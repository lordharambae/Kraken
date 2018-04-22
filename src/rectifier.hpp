#pragma once
#ifndef kraken_rectifier__hpp
#define kraken_rectifier__hpp

namespace kraken {

class rectifier {

public:

	rectifier();
	explicit rectifier();
	rectifier(const rectifier&);
	rectifier(rectifier&&);
	rectifier& operator=(const rectifier&);
	rectifier& operator=(rectifier&&);
	~rectifier();

};

}

#endif
