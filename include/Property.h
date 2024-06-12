#ifndef cppml_Property_h
#define cppml_Property_h

#include "Type.h"

namespace cppml {

    /// @brief parent of all property indicators for a data attribute
    class Property {

    public:

        virtual void validate(Type&) = 0;

    };

}

#endif