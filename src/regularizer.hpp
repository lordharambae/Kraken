#pragma once
#ifndef kraken_regularizer__hpp
#define kraken_regularizer__hpp

namespace kraken {

class regularizer {

public:

	regularizer();
	explicit regularizer();
	regularizer(const regularizer&);
	regularizer(regularizer&&);
	regularizer& operator=(const regularizer&);
	regularizer& operator=(regularizer&&);
	~regularizer();

};

}

#endif
