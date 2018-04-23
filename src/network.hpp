#pragma once
#ifndef kraken_network__hpp_
#define kraken_network__hpp_

namespace kraken {

class network {

	void forward();
	void backward();

public:

	network();
	explicit network(tensor<T>);
	network(const network&);
	network(network&&);
	network& operator=(const network&);
	network& operator=(network&&);
	~network();

	template <class T> void train(const tensor<T>&, const tensor<T>&);
	template <class T> void train(tensor<T>&&, tensor<T>&&);

	template <class T> void train(const tensor<tensor<T>>&, const tensor<tensor<T>>&);
	template <class T> void train(tensor<tensor<T>>&&, tensor<tensor<T>>&&);

	template <class T> tensor<T> calculate(const tensor<T>&);
	template <class T> tensor<T> calculate(tensor<T>&&);

};

}

#endif
