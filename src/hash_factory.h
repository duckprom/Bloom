#ifndef BLOOM_FILTER_HASH_FACTORY_H
#define BLOOM_FILTER_HASH_FACTORY_H

#include "hash.h"

class HashFactory
{
	private:
		HashFactory(); 
		HashFactory(HashFactory const&);
		void operator=(HashFactory const&);
		
	public:
		static HashFactory& instance();
		Hash getRandomHash();
};
#endif
