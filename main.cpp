
#include "iostream"
#include "Bsort.cpp"
#include "Msort.cpp"
using namespace std;

void main()
{
	char mass1 [10];
	char mass2 [10];
	for (int i=0;i<10;i++)
	{
		cin>>mass1[i]; 
	}
	
	bubblesort(mass1,10);
	
	for (int i=0;i<10;i++)
	{
		cout<<mass1[i]; 
	}
	
	for (int i=0;i<10;i++)
	{
		cin>>mass2[i]; 
	}
	
	merge_sort(mass2,0,9) ;

	for (int i=0;i<10;i++)
	{
		cout<<mass2[i]; 
	}
		  
}