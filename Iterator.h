#ifndef INC_161044101_CSE241_HW6_ITERATOR_H
#define INC_161044101_CSE241_HW6_ITERATOR_H
namespace Iterative {

    template<class E, class Container>
    class Iterator {

    public:
        Iterator &next();
        bool hasNext();
        Iterator &remove();

    private:
        E *Ptr;

    };

}
#endif //INC_161044101_CSE241_HW6_ITERATOR_H
