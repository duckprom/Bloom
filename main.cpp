#include<iostream>
#include<vector>
#include<string>
#include "bloom.h"
#include "hashFactory.h"
using namespace std;

#define K 5

void test(int k, vector<string>& setValues, vector<string>& notInSetValues)
{
		vector<Hash> hashes;
		int counter = 0;
		double percentOfErrors = 0;
		for(int i = 0; i < k; i++)
			hashes.push_back( HashFactory::instance().getRandomHash() );
	
		Bloom bloom(hashes);
		for(int i = 0; i < setValues.size(); i++)
			bloom.set(setValues[i]);
		
		
		for(int i = 0; i < notInSetValues.size(); i++)
			counter += bloom.test(notInSetValues[i]);
		
		if(notInSetValues.size())
			percentOfErrors = counter * 100.0 / notInSetValues.size();
			
			
		cout<<"Test k = "<<k<<endl;		
		cout<<"Percent of errors = "<<percentOfErrors<<"%"<<endl<<endl;
}

int main()
{
	vector<string> setValues, notInSetValues;
	
	setValues.push_back("apple");
	setValues.push_back("orange");
	setValues.push_back("potato");
	setValues.push_back("cherry");
	setValues.push_back("cucumber");
	setValues.push_back("raspberry");
	
	notInSetValues.push_back("needle");
	notInSetValues.push_back("saw");
	notInSetValues.push_back("gold");
	notInSetValues.push_back("ferrum");
	notInSetValues.push_back("oil");
	notInSetValues.push_back("dog");
	notInSetValues.push_back("cat");
	notInSetValues.push_back("whale");
	notInSetValues.push_back("big sheep");
	notInSetValues.push_back("small sheep");
	
	test(5, setValues, notInSetValues);
	return 0;
}
