
/*
Problem statement : Accept N number from user and return frequency of 11 Number

Input:	N  6
Elements : 50	11	-11	25	66	11

Outpt:	2
*/

#include<iostream>

using namespace std;

#define ERRMEMMRY -100
#define ERRSIZE -101

class Number
{
	private:
		int *arr;
		int iSize;
		int iNo;
		
	public:
		Number(int ptr[],int i, int j)
		{
			arr = ptr;
			iSize = i;
			iNo = j;
		}
		
		int CountFrequrncyOfNo()
		{
			int iCnt = 0;
			
			if(arr == NULL)
			{
				return ERRMEMMRY;
			}
			if(iSize <= 0)
			{
				return ERRSIZE;
			}
			
			for(int i=0; i < iSize; i++)
			{
				if(arr[i] == iNo)
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
	int iValue = 0;
	int iNo = 0;
	
	cout<<"Enter size of array\n";
	cin>>iValue;
	if(iValue <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	cout<<"Enter number that you want to count frequency\n";
	cin>>iNo;
	
	int *ptr = new int[iValue];
	if(ptr == NULL)
	{
		cout<<"Error : Memory allocation fails\n";
		return -1;
	}

	cout<<"Enter array elements\n";
	for(int i=0; i < iValue; i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Array elelents are\n";
	for(int i=0; i < iValue; i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iValue,iNo);
	
	int iRet = nobj.CountFrequrncyOfNo();
	if(iRet == ERRMEMMRY)
	{
		cout<<"Error : Memory allocation fails\n";
	}
	else if(iRet == ERRSIZE)
	{
		cout<<"Error : Invalid array size input\n";
	}
	else
	{
		cout<<"\nFrequncy of "<<iNo<<" is "<<iRet<<"\n";
	}
	
	delete []ptr;
	
	return 0;
}