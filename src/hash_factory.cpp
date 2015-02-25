#include "hash_factory.h"
#include <stdlib.h>
#include <time.h>

HashFactory::HashFactory()
{
	srand(time(NULL));
}

Hash HashFactory::getRandomHash()
{
	//TODO
	int seed = rand() % 64 + 1;
	return Hash(seed) ;
}

HashFactory& HashFactory::instance()
{
	static HashFactory instance;
	return instance;
}
