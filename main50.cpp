
/*
Problem statement : Accept N number from user and return difference between frequency of even and odd numbers

Input:	N  6
Elements : 50	32	-11	25	66	2

Outpt:	2 (4-2)
*/

#include<iostream>

using namespace std;

#define ERRMMMRY -100
#define ERRSIZE -101

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
		
		int CntDiffEvenOdd()
		{
			int iEven = 0, iOdd = 0;
			
			if(arr == NULL)
			{
				return ERRMMMRY;
			}
			if(iSize <= 0)
			{
				return ERRSIZE;
			}
			
			for(int i=0; i < iSize; i++)
			{
				if((arr[i] % 2 == 0) && (arr[i] != 0))
				{
					iEven++;
				}
				else if((arr[i] != 0))
				{
					iOdd++;
				}
			}
			
			return (iEven - iOdd);
		}
		
		~Number()
		{
			delete []arr;
		}
};

int main()
{
	int iSize = 0;
	
	cout<<"Enter array size\n";
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
	
	int iRet = nobj.CntDiffEvenOdd();
	if(iRet == ERRMMMRY)
	{
		cout<<"\nError : Memory allocation fails\n";
	}
	else if(iRet == ERRSIZE)
	{
		cout<<"\nError : invalid input size\n";
	}
	else 
	{
		cout<<"\nDifference between Even and odd Elements are "<<iRet<<"\n";
	}
	
	delete []ptr;
	
	return 0;
}