#pragma once
#ifndef kraken_normalizer__hpp
#define kraken_normalizer__hpp

namespace kraken {

class normalizer {

public:

	normalizer();
	explicit normalizer();
	normalizer(const normalizer&);
	normalizer(normalizer&&);
	normalizer& operator=(const normalizer&);
	normalizer& operator=(normalizer&&);
	~normalizer();

};

}

#endif
