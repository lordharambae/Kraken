#include "tensor.hpp"

namespace kraken {

template <class T>
tensor<T>::tensor() noexcept {
	__buffer = new value_t[__capacity];
}

template <class T>
tensor<T>::tensor(const typename tensor<T>::size_t& _capacity, 
                  const typename tensor<T>::value_t& _value) {
	__capacity = _capacity << 2;
	__buffer = new value_t[__capacity];
	fill(_value);
	__size = _capacity;
}

template <class T>
tensor<T>::tensor(typename tensor<T>::iterator _begin,
                  typename tensor<T>::iterator _end) {
	size_t _size = _end - _begin;
	__capacity = _size << 2;
	__buffer = new value_t[__capacity];
	for (size_t i = 0; i < _size; ++i, ++_begin)
		__buffer[i] = *_begin;
	__size = _size;
}

template <class T>
tensor<T>::tensor(const typename tensor<T>::tensor_t& _other) {
	__capacity = _other.__capacity;
	__buffer = new value_t[__capacity];
	for (size_t i = 0; i < _other.__size; ++i)
		__buffer[i] = _other.__buffer[i];
	__size = _other.__size;
}

template <class T>
tensor<T>::tensor(tensor_t&& _other) noexcept {
	size_type i;
		rsrv_sz = other.rsrv_sz;
		arr = new T[rsrv_sz];
		for (i = 0; i < other.vec_sz; ++i)
			arr[i] = std::move(other.arr[i]);
		vec_sz = other.vec_sz;
}

template <class T>
typename tensor<T>::tensor_t& tensor<T>::tensor_t& operator=(const tensor_t&);

template <class T>
typename tensor<T>::tensor_t& tensor<T>::tensor_t& operator=(tensor_t&&) noexcept;

template <class T>
tensor<T>::~tensor() {
	delete[] __buffer;
}



template <class T>
typename tensor<T>::iterator tensor<T>::begin() noexcept {
		return __buffer;
}

template <class T>
const typename tensor<T>::iterator tensor<T>::begin() const noexcept {
		return __buffer;
}

template <class T>
typename tensor<T>::iterator tensor<T>::end() noexcept {
		return __buffer + __size;
}

template <class T>
const typename tensor<T>::iterator tensor<T>::end() const noexcept {
		return __buffer + __size;
}



template <class T>
void tensor<T>::fill(const typename tensor<T>::value_t& _value) {
	for (size_t i = 0; i < __capacity; ++i)
		__buffer[i] = _value;
}


}