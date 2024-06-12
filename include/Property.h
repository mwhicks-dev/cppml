#ifndef cppml_Property_h
#define cppml_Property_h

#include "Type.h"

namespace cppml {

    /// @brief parent of all property indicators for a data attribute
    class Property {

    public:

        virtual void validate(Type&) = 0;

        /// @brief ordinal ensuring that a property is not transformed 
        ///     inappropriately (eg. nominal to ratio); lower is less mutable
        /// @return size_t ordering type
        virtual size_t getOrdinal() = 0;

    };

}

#endif