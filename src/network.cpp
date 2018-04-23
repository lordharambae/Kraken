#include "network.hpp"
#include "tensor.hpp"

namespace kraken {


	network::network() {}

	explicit network::network() {}

	network::network(const network& other) {}

	network::network(network&& other) {}

	network& operator=(const network& other) {}

	network& operator=(network&& other) {}

	network::~network() {}


	template <class T> 
	void train(const tensor<T>& input, const tensor<T>& output) {}

	template <class T> 
	void train(tensor<T>&& input, tensor<T>&& output) {}


	template <class T> 
	void train(const tensor<tensor<T>>& inputs, const tensor<tensor<T>>& outputs) {}
	
	template <class T> 
	void train(tensor<tensor<T>>&& inputs, tensor<tensor<T>>&& outputs) {}


	template <class T> 
	tensor<T> calculate(const tensor<T>& input) {}
	
	template <class T> 
	tensor<T> calculate(tensor<T>&& outputs) {}


}




