
/*
Problem statement : Accept N number from user and return elements which are even and divisible by 5.

Input:	N  6
Elements : 50	25	63	3	-125	2

Outpt:	50	25	-125
*/

#include<iostream>

using  namespace std;

class Number
{
	public:
		void DisplayDiv(int arr[],int iSize);
		{
			if(arr == NULL)
			{
				cout<<"Error : Memory alocation fails\n";
				return;
			}
			if(iSize <= 0)
			{
				cout<<"Error : Invalid array size input\n";
				return;
			}
			
			for(int i=0; i < iSize;i++)
			{
				if((arr[i] % 5 == 0) && (arr[i] % 2 == 0))
				{
					cout<<arr[i]<<"\t";
				}
			}
		}
};

int main()
{
	int iSize = 0;
	
	cout<<"Enter size of array\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invalid input of array size\n";
		return -1;
	}
	
	int *ptr = new int(iSize);
	if(ptr == NULL)
	{
		cout<<"Error : Memory alocation fails\n";
		return -1;
	}
	
	cout<<"Enter array elements\n";
	for(int i=0; i <iSize;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Array elements are\n";
	for(int i=0; i < iSize;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	Number nobj = new Number();
	
	nobj.DisplayDiv(ptr,iSize);
	
	return 0;
}