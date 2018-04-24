#pragma once
#ifndef kraken_tensor__hpp
#define kraken_tensor__hpp

namespace kraken {
	
template <class T>
class tensor {

	typedef unsigned long long int size_t;
	typedef T value_t;
	typedef tensor<value_t> tensor_t;
	typedef value_t& reference;
	typedef value_t* iterator;

	inline const void allocate();

	size_t __capacity = 4;
	size_t __size;
	iterator __buffer;

public:

	tensor() noexcept;
	explicit tensor(const size_t&, const value_t& = value_t());
	tensor(iterator, iterator);
	tensor(const tensor_t&);
	tensor(tensor_t&&) noexcept;
	tensor_t& operator=(const tensor_t&);
	tensor_t& operator=(tensor_t&&) noexcept;
	~tensor();


	iterator begin() noexcept;
	const iterator begin() const noexcept;
	iterator end() noexcept;
	const iterator end() const noexcept;
	
	constexpr size_t size() const noexcept;
	constexpr size_t capacity() const noexcept;
	constexpr bool empty() const noexcept;

	void fill(const value_t&);
	constexpr reference get(const size_t&) const;
	reference set(const size_t&);

	reference front();
	constexpr reference front() const;
	reference back();
	constexpr reference back() const;

	friend bool operator==(const tensor_t&, const tensor_t&);
	friend bool operator!=(const tensor_t&, const tensor_t&);

};

}

#endif
