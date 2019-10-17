#include "Iterator.h"

namespace Iterative {


    template<class E, class Container>
    Iterator<E, Container> &Iterator<E, Container>::next() {
        Ptr++;
        return *this;
    }

    template<class E, class Container>
    bool Iterator<E, Container>::hasNext() {

        if (++Ptr != nullptr)
            return true;
        else
            return false;

    }

    template<class E, class Container>
    Iterator<E, Container> &Iterator<E, Container>::remove() {
        //return <#initializer#>;

        if (++Ptr != nullptr) {


        }
    }

}
