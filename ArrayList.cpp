#include "ArrayList.h"

template<class E, class Container>
ArrayList<E, Container>::ArrayList() {

}

template<class E, class Container>
ArrayList<E, Container>::~ArrayList()
{
}

template<class E,class Container>
void ArrayList<E,Container>::add(E e) {
    //if(contains(e)== false)
    data.push_back(e);//hashSetteki gibi aynısından olmama zorunluluğu olmadığı için if kontrolü yapmadım.

}

template<class E,class Container>
void ArrayList<E,Container>::addAll(Collection<E,Container>& c) {
    for(int k=0; k<c.size(); k++){
        data.push_back(c.iterator());
    }
}

template<class E,class Container>
void ArrayList<E,Container>::clear() {
    data.clear();
}

template<class E,class Container>
bool ArrayList<E,Container>::contains(E e) {
    bool does_contain=false;
    for(int i=0; i< data.size(); i++){
        if(data.at(i)==e)
            does_contain= true;
    }
    return does_contain;
}

template<class E,class Container>
bool ArrayList<E,Container>::containsAll(Collection<E,Container>& c) {
    for(int i=0; i< c.size(); i++){
        if(data.at(i)==c.iterator())
            return true;
    }
}

template<class E,class Container>
bool ArrayList<E,Container>::isEmpty() {
    return data.empty();

}

template<class E,class Container>
void ArrayList<E,Container>::remove(E e) {
    for(int k=0; k<data.size(); k++){
        if(data.at(k)==e)
            data.erase(e.data(k));

    }
}

template<class E,class Container>
void ArrayList<E, Container>::removeAll() {
    for(int k=0; k<data.size(); k++){
        remove(data.at(k));
    }
}

template<class E, class Container>
void ArrayList<E,Container>::retainAll(Collection<E, Container>& c) {

}

template<class E, class Container>
int ArrayList<E,Container>::size() {
    return data.size();
}

template<class E, class Container>
Iterator<E,Container> ArrayList<E,Container>::iterator() {
    return iteratorx;
}

template<class E, class Container>
vector<E, Container> ArrayList<E, Container>::getVect() {
    return data;
}
