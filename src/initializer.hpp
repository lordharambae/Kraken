#pragma once
#ifndef kraken_initializer__hpp_
#define kraken_initializer__hpp_

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
