
/*
Problem statement : Accept N number from user and accept one number from user and 
				  return index of last occurence of that number

Input:	size  6
		No   25
Elements : 50	11	-11	25	66	25

Outpt:	5
*/

#include<iostream>

using namespace std;

#define ERRMMRY -1
#define ERRSIZE -2
#define NUMABS -3

class Number
{
	private:
		int *arr;
		int iSize;
		int iNo;
	
	public:
		Number(int ptr[], int i, int iValue)
		{
			arr = ptr;
			iSize = i;
			iNo = iValue;
		}
		
		int ChkLastOccNo()
		{
			if(arr == NULL)
			{
				return ERRMMRY;
			}
			if(iSize <= 0)
			{
				return ERRSIZE;
			}
			
			int i = 0;
			for(i = iSize-1; i >= 0; i--)
			{
				if(arr[i] == iNo)
				{
					break;
				}
			}
			
			if(arr[i] == iNo)
			{
				return i;
			}
			else 
			{
				return NUMABS;
			}
		}
		
		~Number()
		{
			delete []arr;
		}
};

int main()
{
	int iSize = 0;
	int iNo = 0;
	
	cout<<"Enter Number that you want to check last occurence\n";
	cin>>iNo;
	
	cout<<"Enter size of array\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invald array size input\n";
		return -1;
	}
	
	int *ptr = new int[iSize];
	if(ptr == NULL)
	{
		cout<<"Error : Memory allocation fails\n";
		return -1;
	}
	
	cout<<"Enter Array elements\n";
	for(int i=0; i < iSize; i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Array is\n";
	for(int i=0; i < iSize; i++)
	{
		cout<<ptr[i]<<"\t";
	}
	cout<<"\n";
	
	Number nobj(ptr,iSize,iNo);
	
	int iRet = nobj.ChkLastOccNo();
	if(iRet == NUMABS)
	{
		cout<<"Number is absent in array\n";
	}
	else 
	{
		cout<<"the last occurence of Number is "<<iRet<<"\n";
	}
	
	delete []ptr;
	
	return 0;
}