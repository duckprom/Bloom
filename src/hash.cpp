#include "hash.h"

Hash::Hash(int seed)
{
	this->seed = seed;
}

unsigned int Hash::operator ()(std::string obj)
{
	unsigned int result = 1;
	int i;
	for(i = 0; i < obj.size(); i++)
	{
		result += result * seed + (unsigned int)obj[i];
	}
	return result;
}

