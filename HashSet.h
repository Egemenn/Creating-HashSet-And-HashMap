#ifndef INC_161044101_CSE241_HW6_HASHSET_H
#define INC_161044101_CSE241_HW6_HASHSET_H
#include <vector>
#include "Set.h"
using namespace std;
using namespace Iterative;

template <class E,class Container> class HashSet : public Set<E, Container> {

public:
    HashSet<E,Container>();
    ~HashSet<E,Container>();
    void add(E e)override ;
    void addAll(Collection<E,Container>& c) override ;
    void clear() override;
    bool contains(E e) override ;
    bool containsAll(Collection<E,Container>& c) override ;
    bool isEmpty() override ;
    void remove(E e) override ;
    void removeAll() override ;
    void retainAll(Collection<E, Container>& c) override ;
    int size() override ;
    vector<E, Container> getVect();
    Iterator<E,Container> iterator() override ;
private:
    Iterator<E,Container> iteratorx;
    vector<E,Container> data;
    int used;//kullanilan size

};


#endif //INC_161044101_CSE241_HW6_HASHSET_H
