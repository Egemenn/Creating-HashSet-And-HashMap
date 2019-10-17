#include <iostream>
#include <vector>
#include "HashSet.h"
#include "Iterator.h"
using namespace std;


template<class E,class Container>
HashSet<E,Container>::HashSet() {

}

template<class E, class Container>
HashSet<E, Container>::~HashSet() {

}

template <class E, class Container>
void HashSet<E,Container>:: add(E e){
    if(contains(e)== false)//set fuonksiyonu duplicate element icermeyecek
        data.push_back(e);

}

template<class E,class Container>
void HashSet<E,Container>::addAll(Collection<E,Container>& c) {
    for(int k=0; k<c.size(); k++){
        data.push_back(c.iterator());
    }
}

template<class E,class Container>
void HashSet<E,Container>::clear() {
    data.clear();
}

template<class E,class Container>
bool HashSet<E,Container>::contains(E e) {

    try {
        if(data.size()==0)
            throw data.size();
        bool does_contain = false;
        for (int i = 0; i < data.size(); i++) {
            if (data.at(i) == e)
                does_contain = true;

            return does_contain;
        }
    }
    catch (int s)
    {
        cout<<"Empty data. So it doesn't contains"<<e<<endl;
    }

}

template<class E,class Container>
bool HashSet<E,Container>::containsAll(Collection<E,Container>& c) {
    for(int i=0; i< c.size(); i++){
        if(data.at(i)==c.iterator())
            return true;
    }

    return false;
}

template<class E,class Container>
bool HashSet<E,Container>::isEmpty() {
    if(data.empty())
        return true;
    return false;
}

template<class E,class Container>
void HashSet<E,Container>::remove(E e) {
    for(int k=0; k<data.size(); k++){
        if(data.at(k)==e)
            data.erase(e.data(k));

    }
}

template<class E,class Container>
void HashSet<E,Container>::removeAll() {
    for(int k=0; k<data.size(); k++){
        remove(data.at(k));
    }
}

template<class E,class Container>
void HashSet<E,Container>::retainAll(Collection<E, Container>& c) {

}

template<class E,class Container>
int HashSet<E,Container>::size() {
    return data.size();
}

template<class E,class Container>
Iterator<E,Container> HashSet<E,Container>::iterator() {
    return iteratorx;
}

template<class E, class Container>
vector<E, Container> HashSet<E, Container>::getVect() {
    return data;
}

