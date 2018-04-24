#pragma once
#ifndef kraken_tensor__hpp
#define kraken_tensor__hpp

namespace kraken {
	
template <class T, unsigned long long int C = 4ull>
class tensor {

	typedef unsigned long long int size_t;
	typedef T value_t;
	typedef tensor<value_t> tensor_t;
	typedef value_t& reference;
	typedef value_t* iterator;

	inline const void allocate();

	size_t __capacity = C;
	size_t __size;
	iterator __buffer;

public:

	tensor() noexcept;
	explicit tensor(const size_t&);
	tensor(const iterator, const iterator);
	tensor(const tensor_t&);
	tensor(tensor_t&&) noexcept;
	tensor_t& operator=(const tensor_t&);
	tensor_t& operator=(tensor_t&&) noexcept;
	~tensor();

	void resize(const size_t&);
	void reserve(const size_t&);
	void fill(const value_t&);
	void swap(tensor_t&, tensor_t&);

	iterator begin() noexcept;
	const iterator begin() const noexcept;
	iterator end() noexcept;
	const iterator end() const noexcept;
	
	constexpr size_t size() const noexcept;
	constexpr size_t capacity() const noexcept;
	constexpr bool empty() const noexcept;

	reference operator[](const size_t&);
	constexpr reference operator[](const size_t&) const;
	reference at(const size_t&);
	constexpr reference at(const size_t&) const;

	reference front();
	constexpr reference front() const;
	reference back();
	constexpr reference back() const;

	friend bool operator==(const tensor_t&, const tensor_t&);
	friend bool operator!=(const tensor_t&, const tensor_t&);

};

}

#endif
