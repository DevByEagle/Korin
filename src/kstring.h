#ifndef KSTRING_H
#define KSTRING_H

#include <cstddef>

namespace Kai {
    namespace Foundation {
        template <typename T>
        class BaseString {
        public:
            BaseString(const T* initial);
            virtual ~BaseString();

            BaseString& operator=(const BaseString& other);

            size_t size() const;
            const T* c_str() const;
        private:
            T* data;
            size_t length;
        };
    }

    typedef Foundation::BaseString<char> String;
}

#endif // KSTRING_H