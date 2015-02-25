#include<iostream>
#include<vector>
#include<string>
#include "bloom.h"
#include "hash_factory.h"
using namespace std;

#define K 5

void test(const int numberOfHashes, vector<string>& setValues, vector<string>& notInSetValues)
{
		vector<Hash> hashes;
		int counter = 0;
		double percentOfErrors = 0;
		for(int i = 0; i < numberOfHashes; i++)
			hashes.push_back( HashFactory::instance().getRandomHash() );
	
		Bloom bloom(hashes);
		for(int i = 0; i < setValues.size(); i++)
			bloom.Set(setValues[i]);
		
		
		for(int i = 0; i < notInSetValues.size(); i++)
			counter += bloom.Test(notInSetValues[i]);
		
		if(notInSetValues.size())
			percentOfErrors = counter * 100.0 / notInSetValues.size();
			
			
		cout << "Test numberOfHashes = " << numberOfHashes << endl;		
		cout << "Percent of errors = " << percentOfErrors << "%" << endl;
}

int main()
{	
	string setValuesArray[] = {"apple", "orange", "potato", "cherry", "cucumber", "raspberry"};
	vector<string> setValues(setValuesArray, setValuesArray + sizeof(setValuesArray) / sizeof(string));
	
	string notInSetValuesArray[] = {"needle", "saw", "gold", "ferrum", "oil", "dog", "cat", "whale", "big sheep", "small sheep"};
	vector<string> notInSetValues(notInSetValuesArray, notInSetValuesArray + sizeof(notInSetValuesArray) / sizeof(string));
	
	test(5, setValues, notInSetValues);
	return 0;
}
