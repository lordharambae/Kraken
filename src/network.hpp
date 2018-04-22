#pragma once
#ifndef kraken_network__hpp
#define kraken_network__hpp

namespace kraken {

class network {

public:

	network();
	explicit network();
	network(const network&);
	network(network&&);
	network& operator=(const network&);
	network& operator=(network&&);
	~network();

};

}

#endif
