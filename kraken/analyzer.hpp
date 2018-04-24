#pragma once
#ifndef kraken_analyzer__hpp
#define kraken_analyzer__hpp

#include "tensor.hpp"

namespace kraken {

template <class F>
class analyzer {

	F __functor;

public:

	analyzer();
	explicit analyzer(F&&);
	analyzer(const analyzer&);
	analyzer(analyzer&&);
	analyzer& operator=(const analyzer&);
	analyzer& operator=(analyzer&&);
	~analyzer();

	template <class T>
	void analyze(const tensor&);

};

}

#endif
