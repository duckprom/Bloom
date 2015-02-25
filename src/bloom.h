#ifndef BLOOM_FILTER_BLOOM_H
#define BLOOM_FILTER_BLOOM_H

#include "hash.h"
#include <vector>
#include <bitset>

#define N 1024 * 8

class Bloom
{
	private:
		std::bitset<N> bits;
		std::vector<Hash> hashes;
		
	public:
		Bloom(std::vector<Hash>& hashes);
		
		void Set(std::string obj);
		bool Test(std::string obj);
};

#endif
