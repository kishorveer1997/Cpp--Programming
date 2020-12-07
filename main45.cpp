
/*
Problem statement : Accept N number from user and return elements which are divisible by 5.

Input:	N  6
Elements : 50	25	63	3	-125	2

Outpt:	50	25	-125
*/

#include<iostream>

using namespace std;

class Number
{
	public:
		void DisplayDivFive(int arr[],int iSize)		//behaviour
		{
			
			if(arr == NULL)
			{
				cout<<"Error : Memory alocations fails\n";
				return;
			}
			if(iSize <= 0)
			{
				cout<<"Error : Invalid array size input\n";
				return;
			}
			
			cout<<"\nNumbers which are divisble by 5 are\n";
			for(int i=0; i < iSize; i++)
			{
				if(arr[i] % 5 == 0)
				{
					cout<<arr[i]<<"\t";
				}
			}
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter size of array\n";
	cin>>iValue;
	if(iValue <= 0)
	{
		cout<<"Error : Invalid input\n";
		return -1;
	}
	
	int *ptr = new int(iValue);
	if(ptr == NULL)
	{
		cout<<"Error : Invalid input\n";
		return -1;
	}
	
	cout<<"Enter array elements\n";
	for(int i=0; i < iValue;i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"array elements are\n";
	for(int i=0; i < iValue;i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj;
	
	nobj.DisplayDivFive(ptr,iValue);
	
	return 0;
}