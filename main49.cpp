
/*
Problem statement : Accept N number from user and return frequency of even numbers

Input:	N  6
Elements : 50	33	-11	25	66	2

Outpt:	3
*/

#include<iostream>

using namespace std;

#define ERRMMRY -1
#define ERRSIZE -2

class Number
{
	private:
	
	int *arr;
	int iSize;
	
	public:
	
	Number(int ptr[], int i)
	{
		arr = ptr;
		iSize = i;
	}
	
	int CountEvenNo()
	{
		int iCnt = 0;
		
		if(arr == NULL)
		{
			return ERRMMRY; 
		}
		if(iSize <= 0)
		{
			return ERRSIZE;
		}
		
		for(int i=0; i < iSize; i++)
		{
			if((arr[i] % 2 == 0) && (arr[i] != 0))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
	
	~Number()
	{
		delete []arr;
	}
};

int main()
{
	int iSize = 0;
	
	cout<<"Enter size of array\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	int *ptr = new int[iSize];
	if(ptr == NULL)
	{
		cout<<"Error : Memory alocation fails\n";
		return -1;
	}
	
	cout<<"Enter array elements\n";
	for(int i=0; i < iSize; i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Array elements are\n";
	for(int i=0; i < iSize; i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iSize);
	
	int iRet = nobj.CountEvenNo();
	if(iRet == ERRMMRY)
	{
		cout<<"\nError : Memory alocation fails\n";
	}
	else if(iRet == ERRSIZE)
	{
		cout<<"\nError : Invalid array size input\n";
	}
	else 
	{
		cout<<"\nFrequency of even numbes are "<<iRet<<"\n";
	}
	
	delete []ptr;
	
	return 0;
}