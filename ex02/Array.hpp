#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
private:
    T* _elements;         // Pointer to the array elements
    unsigned int _size;   // Number of elements in the array

public:
    // Default constructor: Creates an empty array
    Array() : _elements(NULL), _size(0) {}

    // Parameterized constructor: Creates an array of n elements initialized by default
    Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

    // Copy constructor
    Array(const Array& other) : _elements(new T[other._size]), _size(other._size) {
        for (unsigned int i = 0; i < _size; i++) {
            _elements[i] = other._elements[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] _elements;
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            T* temp = new T[other._size];    // Allocate temporary memory
            for (unsigned int i = 0; i < other._size; i++) {
                temp[i] = other._elements[i];
            }
            delete[] _elements;             // Free existing memory
            _elements = temp;               // Assign the new memory
            _size = other._size;            // Copy size
        }
        return *this;
    }

    // Subscript operator for accessing elements
    T& operator[](unsigned int index) {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _elements[index];
    }

    // Const version of the subscript operator
    const T& operator[](unsigned int index) const {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _elements[index];
    }

    // size() member function: Returns the number of elements
    unsigned int size() const {
        return _size;
    }
};

#endif
