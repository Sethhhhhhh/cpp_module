#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <exception>
#include <string>

template<typename T>
class Array {
    
    private:
        T *             _array;
        unsigned int    _size;

    public:
        Array<T>(void) : _array(NULL) {};
        Array<T>(unsigned int n) : _array(new T[n]), _size(n) {};
        Array<T>(const Array<T> & src) {
            _size = src.size();
            _array = new T[_size];

            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = src._array[i];
            }
        };
        ~Array<T>(void) {
            if (_array != NULL)
                delete[] _array;
        };

        Array<T> &  operator=(const Array<T> & src) {
            _size = src.size();
            _array = new T[_size];

            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = src._array[i];
            }
            
            return (*this);
        };
        unsigned int    size(void) const {
            return (_size);
        }

        T &   operator[](unsigned int n) const {
            if (n >= _size)
                throw   OutOfRange();

            return (_array[n]);
        }

        class   OutOfRange : public std::exception {
            public:
                virtual const char *what() const throw() {
                    return ("Out of range");
                };
        };
};

#endif