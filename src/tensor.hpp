#pragma once
#ifndef kraken_tensor__hpp
#define kraken_tensor__hpp

namespace kraken {
	
template <class T>
class tensor {

public:

	tensor();
	// explicit tensor();
	tensor(const tensor<T>&);
	tensor(tensor<T>&&);
	tensor<T>& operator=(const tensor<T>&);
	tensor<T>& operator=(tensor<T>&&);
	~tensor();
	
};

}

#endif
