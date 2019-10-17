#ifndef INC_161044101_CSE241_HW6_LINKEDLIST_H
#define INC_161044101_CSE241_HW6_LINKEDLIST_H
#include "List.h"
#include "Queue.h"
#include <vector>
using namespace std;
using namespace Iterative;

template <class E, class Container>
class LinkedList : public List<E, Container>, public Queue<E, Container>
{
public:
    LinkedList<E, Container>();
    ~LinkedList<E, Container>();
    void add(E e) override;
    void addAll(Collection<E,Container>& c) override ;
    void clear() override ;
    bool contains(E e) override ;
    bool containsAll(Collection<E,Container>& c) override ;
    bool isEmpty() override ;
    void remove(E e) override ;
    void removeAll() override ;
    void retainAll(Collection<E, Container>& c) override ;
    int size() override ;
    //void add(E e) override;
    E element();
    void offer(E e) override;
    E poll();
    vector<E, Container> getVect() const;
    Iterator<E,Container> iterator() override ;
private:
    Iterator<E,Container> iteratorx;
    vector<E,Container> data;
    int used;//kullanilan size
};



#endif //INC_161044101_CSE241_HW6_LİNKEDLİST_H
