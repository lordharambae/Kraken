#pragma once
#ifndef kraken_tensor__hpp
#define kraken_tensor__hpp

namespace kraken {
	
template <class T, unsigned long long int S>
class tensor {

	typedef unsigned long long int size_t;
	typedef T value_t;
	typedef tensor<value_t, size_t> tensor_t;
	typedef value_t& reference;
	typedef value_t* iterator;

	value_t _buffer[S > 0 ? S : 1];

public:

	tensor();
	explicit tensor();
	tensor(const tensor_t&);
	tensor(tensor_t&&);
	tensor_t& operator=(const tensor_t&);
	tensor_t& operator=(tensor_t&&);
	~tensor();

	void fill(const value_t&);
	void swap(tensor_t&, tensor_t&);

	iterator begin() noexcept;
	const iterator begin() const noexcept;
	iterator end() noexcept;
	const iterator end() const noexcept;
	
	constexpr size_t size() const noexcept;
	constexpr bool empty() const noexcept;

	reference operator[](const size_t&);
	constexpr const reference operator[](const size_t&) const;
	reference at(const size_t&);
	constexpr const reference at(const size_t&) const;

	reference front();
	constexpr const reference front() const;
	reference back();
	constexpr const reference back() const;

	bool operator==(const tensor_t&, const tensor_t&);
	bool operator!=(const tensor_t&, const tensor_t&);


};

}

#endif
