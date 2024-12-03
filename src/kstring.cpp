#include <cstring>
#include <stdexcept>
#include "kstring.h"

namespace Kai
{
    namespace Foundation
    {
        template <typename T>
        BaseString<T>::BaseString(const T *initial)
        {
            if (initial)
            {
                length = std::strlen(initial);
                data = new T[length + 1];
                std::strcpy(data, initial);
            }
            else
            {
                length = 0;
                data = new T[1]();
            }
        }

        template <typename T>
        BaseString<T>::~BaseString()
        {
            delete[] data;
        }

        template <typename T>
        BaseString<T> &BaseString<T>::operator=(const BaseString &other)
        {
            if (this != &other)
            {
                delete[] data;
                length = other.length;
                data = new T[length + 1];
                std::strcpy(data, other.data);
            }
            return *this;
        }

        template <typename T>
        size_t BaseString<T>::size() const {
            return length;
        }

        template <typename T>
        const T* BaseString<T>::c_str() const {
            return data;
        }
    }
}