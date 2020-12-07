

/*
Problem statement : Accept N number from user and return difference betwwen summation
					of even elements and summation of odd elements.

Input:	N  6
Elements : 85	66	3	80	93	88

Outpt: 53 (234 -181 )
*/

#include<iostream>

using namespace std;

class MyArray
{
	public:
	int DiffEvenOddSum(int arr[], int iSize)
	{
		int iEven = 0, iOdd = 0;
			
		if(iSize < 0)
		{
			return -1;
		}
			
		for(int i=0; i < iSize; i++)
		{
			if(arr[i] % 2 == 0)
			{
				iEven = iEven + arr[i];
			}
			else 
			{
				iOdd = iOdd + arr[i];
			}
		}
			
		return (iEven - iOdd);
	}
};

int main()
{
	int iSize = 0;
	
	cout<<"Enter size of array\n";
	cin>>iSize;
	
	if(iSize < 0)
	{
		cout<<"Error : Invalid input\n";
		return -1;
	}
	
	int arr[iSize];
	
	cout<<"Enter elements of arrays\n";
	for(int i=0; i < iSize;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter elements of arrays are\n";
	for(int i=0; i < iSize;i++)
	{
		cout<<arr[i]<<"\t";
	}

	MyArray mobj;
	
	int iRet = mobj.DiffEvenOddSum(arr,iSize);
	if(iRet == -1)
	{
		cout<<"Error : Invalid input\n";
	}
	cout<<"\nDifference between summation of Even and Odd Elements is :"<<iRet<<"\n";
	
	return 0;
}