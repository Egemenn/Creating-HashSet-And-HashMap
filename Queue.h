#ifndef INC_161044101_CSE241_HW6_QUEUE_H
#define INC_161044101_CSE241_HW6_QUEUE_H
#include "Collection.h"

template<class E,class Container> class Queue : public Collection<E,Container>{

public:
    virtual void add(E e)=0;
    virtual E element()=0;
    virtual void offer(E e)=0;
    virtual E poll()=0;
};

#endif //INC_161044101_CSE241_HW6_QUEUE_H
