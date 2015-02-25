#ifndef BLOOM_FILTER_HASH_H
#define BLOOM_FILTER_HASH_H

#include <string>

class Hash
{
	private:
		int seed;
		
	public:
		Hash(int);
		unsigned int operator ()(std::string obj);
};

#endif
