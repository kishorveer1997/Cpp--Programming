

/*
Problem statement : Accept N number from user and return product of all odd elements
				  

Input:	size  6
		
Elements : 15	66	3	70	10	88

Outpt:	45
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
		Number(int ptr[], int iValue)
		{
			arr = ptr;
			iSize = iValue;
		}
		
		int MultOfOdd()
		{
			int iMult = 1;
			
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
				if(arr[i] % 2 != 0)
				{
					iMult = iMult * arr[i];
				}
				
			}
			
			return iMult;
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
	
	int *ptr = new ptr[iSize];
	if(ptr == NULL)
	{
		cout<<"Error : Memory allocation fails\n";
		return -1;
	}
	
	cout<<"Enter array elements\n";
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
	
	int iRet = nobj.MultOfOdd();
	if(iRet == ERRMMRY)
	{
		cout<<"\nError : Memory allocation fails\n";
	}
	else if(iRet == ERRSIZE)
	{
		cout<<"\nError : Invalid array size input\n";
	}
	else 
	{
		cout<<"\nMultiplication of all odd elements from array is "<<iRet<<"\n";
	}
	
	delete []ptr;
	
	return 0;
}