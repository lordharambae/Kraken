#pragma once
#ifndef kraken_regressor__hpp
#define kraken_regressor__hpp

namespace kraken {

class regressor {

public:

	regressor();
	explicit (regressor);
	regressor(const regressor&);
	regressor(regressor&&);
	regressor& operator=(const regressor&);
	regressor& operator=(regressor&&);
	~regressor();

};

}

#endif
