#ifndef INC_161044101_CSE241_HW6_COLLECTION_H
#define INC_161044101_CSE241_HW6_COLLECTION_H
#include "Iterator.h"
using namespace Iterative;

template <class E ,class Container>
class Collection {
public:
    virtual Iterator<E, Container> iterator()=0;
    virtual void add(E e)=0;
    virtual void addAll(Collection& c)=0;
    virtual void clear()=0;
    virtual bool contains(E e)=0;
    virtual bool containsAll(Collection& c)=0;
    virtual  bool isEmpty()=0;
    virtual void remove(E e)=0;
    virtual void removeAll()=0;
    virtual void retainAll(Collection<E, Container>& c)=0;
    virtual int size()=0;

};


#endif //INC_161044101_CSE241_HW6_COLLECTİON_H
