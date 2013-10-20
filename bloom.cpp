#include "bloom.h"

Bloom::Bloom(std::vector<Hash>& hashes)
{
	this->hashes = hashes;
}

void Bloom::set(std::string obj)
{
	for(int i = 0; i < hashes.size(); i++)
	{
		bits[ hashes[i](obj) % N ] = 1;
	}
}

bool Bloom::test(std::string obj)
{
	for(int i = 0; i < hashes.size(); i++)
		if(! bits[ hashes[i](obj) % N ])
			return false;
	return true;
}
