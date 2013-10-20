#pragma once 

#include <vector>
#include <bitset>
#include "hash.h"
#include <string>

#define N 1024 * 8

class Bloom
{
	private:
		std::bitset<N> bits;
		std::vector<Hash> hashes;
		
	public:
		Bloom(std::vector<Hash>& hashes);
		
		void set(std::string obj);
		bool test(std::string obj);
};
