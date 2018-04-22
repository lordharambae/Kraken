#pragma once
#ifndef kraken_optimizer__hpp
#define kraken_optimizer_hpp

namespace kraken {
	
class optimizer {

public:

	optimizer();
	explicit optimizer();
	optimizer(const optimizer&);
	optimizer(optimizer&&);
	optimizer& operator=(const optimizer&);
	optimizer& operator=(optimizer&&);
	~optimizer();

};	

}

#endif
