#ifndef cppml_Type_h
#define cppml_Type_h

namespace cppml {

    /// @brief forward declaration of Countability defined in Countability.h
    class Countability;

    /// @brief forward declaration of Property defined in Property.h
    class Property;

    /// @brief forward declaration of Value defined in Value.h
    class Value;

    /// @brief parent of all data type indicators for a data attribute
    class Type {

    public:

        /// @brief ensures that this type can be used with the specified 
        ///     property and countability; if it cannot, throws a 
        ///     std::invalid_argument
        virtual void validate(Property&, Countability&) = 0;

        /// @brief ensures that the passed value is correspondent to this type
        virtual void validate(Value&) = 0;

    };

}

#endif