#include "tensor.hpp"

namespace kraken {

	
	template <class T>
	tensor<T>::tensor() {}
	
	// explicit tensor::tensor() {}
	
	template <class T>
	tensor<T>::tensor(const tensor<T>& other) {}
	
	template <class T>
	tensor<T>::tensor(tensor<T>&& other) {}
	
	template <class T>
	tensor<T>& tensor<T>::operator=(const tensor<T>& other) {}
	
	template <class T>
	tensor<T>& tensor<T>::operator=(tensor<T>&& other) {}
	
	template <class T>
	tensor<T>::~tensor() {}


}