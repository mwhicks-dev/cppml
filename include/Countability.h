#ifndef cppml_Countability_h
#define cppml_Countability_h

namespace cppml {

    /// @brief parent of all countability indicators for a data attribute
    class Countability {

    public:

        /// @brief ordinal ensuring that a type is not transformed 
        ///     inappropriately (eg. discrete to continuous)
        /// @return size_t ordering type
        virtual size_t getOrdinal() = 0;

    };

}

#endif