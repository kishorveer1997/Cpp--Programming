
/*
Problem statement : Accept N number from user and return largest element from array
				  

Input:	size  6
		
Elements : 15	66	3	70	10	88

Outpt:	70
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
		
		int MaxNumber()
		{
			int iMax = 0;
			int i = 0;
			
			if(arr == NULL)
			{
				return ERRMMRY;
			}
			if(iSize <= 0)
			{
				return ERRSIZE;
			}
			
			iMax = arr[i];
			
			for(i=0; i < iSize; i++)
			{
				if(arr[i] > iMax)
				{
					iMax = arr[i];
				}
			}
			return iMax;
		}
		
		~Number()
		{
			delete []arr;
		}
};


int main()
{
	int iSize = 0;
	
	cout<<"Enter size of arrays\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	int *ptr = new int[iSize];
	if(ptr == NULL)
	{
		cout<<"Error : Memory allocation fails\n";
		return -1;
	}
	
	cout<<"Enter array element\n";
	for(int i=0; i < iSize; i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Array is\n";
	for(int i=0; i < iSize; i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iSize);
	
	int iRet = nobj.MaxNumber();
	if(iRet == ERRMMRY)
	{
		cout<<"\nError : Memory allocation fails\n";
	}
	else if(iRet == ERRSIZE)
	{
		cout<<"\nError : Invalid Input size array\n";
	}
	else 
	{
		cout<<"\nMaximum number from given array is "<<iRet<<"\n";
	}
	
	delete []ptr;
	
	return 0;
}