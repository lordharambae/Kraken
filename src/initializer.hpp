#pragma once
#ifndef kraken_initializer__hpp
#define kraken_initializer__hpp

namespace kraken {

class initializer {

public:

	initializer();
	explicit initializer();
	initializer(const initializer&);
	initializer(initializer&&);
	initializer& operator=(const initializer&);
	initializer& operator=(initializer&&);
	~initializer();

};

}

#endif
