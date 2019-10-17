#include "LinkedList.h"

template<class E, class Container>
LinkedList<E, Container>::LinkedList() {

}

template<class E, class Container>
LinkedList<E, Container>::~LinkedList() {

}

template <class E,class Container>
void LinkedList<E,Container>:: add(E e){
    data.push_back(e);

}

template<class E,class Container>
void LinkedList<E,Container>::addAll(Collection<E,Container>& c) {
    for(int k=0; k<c.size(); k++){
        data.push_back(c.iterator());
    }
}

template<class E, class Container>
void LinkedList<E, Container>::clear() {
    data.clear();
}

template<class E, class Container>
bool LinkedList<E,Container>::contains(E e) {
    bool does_contain=false;
    for(int i=0; i< data.size(); i++){
        if(data.at(i)==e)
            does_contain= true;
    }
    return does_contain;
}

template<class E, class Container>
bool LinkedList<E,Container>::containsAll(Collection<E,Container>& c) {
    return false;
}

template<class E,class Container>
bool LinkedList<E,Container>::isEmpty() {
    if(data.empty())
        return true;
    return false;
}

template<class E,class Container>
void LinkedList<E,Container>::remove(E e) {
    for(int k=0; k<data.size(); k++){
        if(data.at(k)==e)
            data.erase(e.data(k));

    }
}

template<class E,class Container>
void LinkedList<E,Container>::removeAll() {
    for(int k=0; k<data.size(); k++){
        remove(data.at(k));
    }
}

template<class E,class Container>
void LinkedList<E,Container>::retainAll(Collection<E, Container>& c) {

}
template<class E,class Container>
int LinkedList<E,Container>::size() {
    return data.size();
}


template <class E,class Container>
E LinkedList<E,Container>:: element(){

}

template <class E,class Container>
void LinkedList<E,Container>:: offer(E e){
    data.push_back(e);//add fonksiyonu ile aynı

}

template<class E,class Container>
E LinkedList<E,Container>::poll() {
    return nullptr;
}

template<class E,class Container>
Iterator<E,Container> LinkedList<E,Container>::iterator() {
    return iteratorx;
}

template<class E, class Container>
vector<E, Container> LinkedList<E, Container>::getVect() const {
    return data;
}

