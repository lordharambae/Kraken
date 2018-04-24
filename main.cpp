#include <iostream>
#include "kraken/tensor.cpp"

#define LOG(t) for (const auto& i : t) std::cout << i << std::endl;

int main() {

	kraken::tensor<int> x(2, 7);
	LOG(x);

	kraken::tensor<int> y(x.begin(), x.end());
	LOG(y);


}




