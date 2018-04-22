#pragma once
#ifndef kraken_analyzer__hpp
#define kraken_analyzer__hpp

namespace kraken {

class analyzer {

public:

	analyzer();
	explicit analyzer();
	analyzer(const analyzer&);
	analyzer(analyzer&&);
	analyzer& operator=(const analyzer&);
	analyzer& operator=(analyzer&&);
	~analyzer();

};

}

#endif
