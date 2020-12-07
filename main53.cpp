

/*
Problem statement : Accept N number from user and accept one number from user and 
				  return index of first occurence of that number

Input:	size  6
		No   25
Elements : 50	11	-11	25	66	25

Outpt:	4
*/

#include<iostream>

using namespace std;

#define ERRMMRY -1
#define ERRSIZE -2
#define NUMABS -3

class Number 
{
	private:
		int *arr;		//characterestics
		int iSize;		//characterestics
		int iNo;		//characterestics
		
	public:
		Number(int ptr[], int i, int j)		//parameterised constructor
		{
			arr = ptr;
			iSize = i;
			iNo = j;
		}
		
		int ChkFirstOcc()	//behaviour
		{
			if(arr == NULL)		//filter
			{
				return ERRMMRY;
			}
			if(iSize <= 0)	//filter
			{
				return ERRSIZE;
			}
			
			int i= 0;
			
			for(i=0; i < iSize; i++)
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
	int iSize = 0, iNo = 0;
	
	cout<<"Enter size of array\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	cout<<"Enter number that you want check first occurence\n";
	cin>>iNo;
	
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
	
	cout<<"Array is\n";
	for(int i=0; i < iSize; i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iSize,iNo);
	
	int iRet = nobj.ChkFirstOcc();
	if(iRet == ERRMMRY)
	{
		cout<<"\nError : Memory allocation fails\n";
	}
	else if(iRet == ERRSIZE)
	{
		cout<<"\nError : Invalid array size input\n";
	}
	else if(iRet == NUMABS)
	{
		cout<<"\nNumber "<<iNo<<" is absent in array\n";
	}
	else 
	{
		cout<<"\nFirst occurence of Number "<<iNo<<" is "<<iRet<<"\n";;
	}
	
	delete []ptr;
	
	return 0;
}