#pragma once
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
