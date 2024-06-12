#ifndef cppml_Value_h
#define cppml_Value_h

#include <mutex>

#include "Type.h"

namespace cppml {

    /// @brief abstract class containing actual data values
    class Value {

        /// @brief mutex stored in order to have thread-safe value retrieval
        std::mutex m;

        /// @brief value stored as nullptr
        void * stored_value = nullptr;

    public:

        /// @brief type-safe and thread-safe retrieval of value ptr
        /// @tparam T type of stored value
        /// @return pointer to stored value
        template <typename T>
        T * getStoredValue() {
            std::lock_guard<std::mutex> lg(m);
            T * stored = dynamic_cast<T>(stored_value);
            return stored;
        }

        /// @brief retrieves type of stored value
        /// @return Type associated with this Value
        virtual Type& getValueType() = 0;

    };

}

#endif