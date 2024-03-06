/*
template< typename T >
class Array
{
    template< typename T >
    friend void swap(T &, T &);

public:
    Array();
    Array(size_t);
    Array(const Array &);
    ~Array();

    const Array &operator=(const Array &);
    const T &operator[](size_t) const;
    T &operator[](size_t);

private:
    T *_array;
    size_t _size;
    size_t _capacity;
};

template< typename T >
Array< T >::Array():
_array(0),
_size(0),
_capacity(0)
{
}

template< typename T >
Array< T >::Array(size_t size):
_size(size),
_capacity(1)
{
    while (_capacity < _size)
        _capacity *= 2;

    _array = new T [_capacity];
}

template< typename T >
Array< T >::Array(const Array< T > &original):
_size(original._size),
_capacity(original._capacity)
{
    _array = new T [_capacity];

    for (size_t i = 0; i < _size; ++i)
        _array[i] = original._array[i];
}

template< typename T >
Array< T >::~Array()
{
    delete [] _array;
}

template< typename T >
const Array< T > &Array< T >::operator=(const Array &rhs)
{
    if (&rhs != this)
    {
        _size = rhs._size;
        _capacity = rhs._capacity;

        delete [] _array;

        _array = new T [_capacity];

        for (size_t i = 0; i < _size; ++i)
            _array[i] = rhs._array[i];
    }

    return *this;
}


template< typename T >
const T &Array< T >::operator[](size_t index) const
{
    return _array[index];
}

template< typename T >
T &Array< T >::operator[](size_t index)
{
    return _array[index];
}
*/
