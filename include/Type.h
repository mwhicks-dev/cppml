#ifndef cppml_Type_h
#define cppml_Type_h

namespace cppml {

    /// @brief parent of all data type indicators for a data attribute
    class Type {

    public:

        /// @brief ordinal ensuring that a type is not transformed 
        ///     inappropriately (eg. string to float); lower is less mutable
        /// @return size_t ordering type
        virtual size_t getOrdinal() = 0;

    };

}

#endif