

/*
Problem statement : Accept N number from user and display all numbers which are multiple of 11

Input:	N  6
Elements : 50	33	-11	25	66	2

Outpt:	33	 -11	66
*/

#include<iostream>

using namespace std;

class Number
{
	private:
	
	int *arr;
	int iSize;
	
	public:
	
	Number(int ptr[],int i)
	{
		arr = ptr;
		iSize = i;
	}
	
	void DisplayMultBy11()
	{
		if(arr == NULL)
		{
			cout<<"Error : memory alocation fails\n";
			return;
		}
		if(iSize <= 0)
		{
			cout<<"Error : Invalid array size input\n";
			return;
		}
		
		cout<<"\nElements which are multiple of 11 are\n";
		for(int i=0; i < iSize;i++)
		{
			if((arr[i] % 11 == 0) && (arr[i] != 0))
			{
				cout<<arr[i]<<"\t";
			}
		}
	}
	
	~Number()
	{
		delete []arr;
	}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter array size\n";
	cin>>iValue;
	if(iValue <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	int *ptr = new int[iValue];
	if(ptr == NULL)
	{
		cout<<"Error : memory alocation fails\n";
		return -1;
	}
	
	cout<<"Enter array elements\n";
	for(int i=0; i < iValue;i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Array elements\n are";
	for(int i=0; i < iValue;i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iValue);
	
	nobj.DisplayMultBy11();
	
	delete []ptr;
	
	return 0;
}