#pragma once 
#include <string>

class Hash
{
	private:
		int seed;
		
	public:
		Hash(int);
		unsigned int operator ()(std::string obj);
};
