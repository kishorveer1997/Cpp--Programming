
/*
Problem statement : Accept N number from user and accept one number from user and 
				   check weather that array contains or not

Input:	size  6
		No   25
Elements : 50	11	-11	25	66	11

Outpt:	true
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
		int iNo;
		
	public:
		Number(int ptr[], int i, int j)
		{
			arr = ptr;
			iSize = i;
			iNo = j;
		}
		
		bool ChkNumber()
		{
			int i = 0;
			for(i=0; i < iSize; i++)
			{
				if(arr[i] == iNo)
				{
					break;
				}
			}
			
			if(arr[i] == iNo)
			{
				return true;
			}
			else 
			{
				return false;
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
	
	cout<<"Enter size of array\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	cout<<"Enter number that you want to check  present in array\n";
	cin>>iNo;
	
	int *ptr = new int[iSize];
	if(ptr == NULL)
	{
		cout<<"Error : Memory alocation fails\n";
		return -1;
	}
	
	cout<<"Enter array elemenst\n";
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
	
	bool bRet = nobj.ChkNumber();
	if(bRet == ERRMMRY)
	{
		cout<<"\nError : Memmory alocation fails\n";
	}
	else if(bRet == ERRSIZE)
	{
		cout<<"\nError : Invalid array size input\n";
	}
	else if(bRet == true)
	{
		cout<<"\nNumber "<<iNo<<" is present in array\n";
	}
	else 
	{
		cout<<"\nNumber "<<iNo<<" is Not present in array\n";
	}
	
	delete []ptr;
	
	return 0;
}