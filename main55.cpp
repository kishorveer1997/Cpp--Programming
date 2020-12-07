

/*
Problem statement : Accept N number from user and range from user and display all elements from range
				  

Input:	size  6
		Range  10	25
Elements : 50	11	-11	23	66	25

Outpt:	11	 23	   25
*/

#include<iostream>

using namespace std;

class Number
{
	private:
		int *arr;
		int iSize;
		int iNo1;
		int iNo2;
		
	public:
		Number(int ptr[], int length, int iValue1, int iValue2)
		{
			arr = ptr;
			iSize = length;
			iNo1 = iValue1;
			iNo2 = iValue2;
		}
		
		void DisplayRange()
		{
			if(arr == NULL)
			{
				cout<<"Error : memory allocation fails\n";
				return;
			}
			if(iSize <= 0)
			{
				cout<<"Error : Invalid array size input\n";
				return;
			}
			if(iNo1 > iNo2)
			{
				cout<<"Error : Invalid range\n";
				return;
			}
			
			cout<<"\nArray elements from given range are\n";
			for(int i=0; i < iSize; i++)
			{
				if((arr[i] >= iNo1) && (arr[i] <= iNo2))
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
	int iSize = 0;
	int iNo1 = 0, iNo2 = 0;
	
	cout<<"Enter size of array\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	int *ptr = new int[iSize];
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
	
	cout<<"Enter lower range number\n";
	cin>>iNo1;
	
	cout<<"Enter higher range element\n";
	cin>>iNo2;
	
	if(iNo1 > iNo2)
	{
		cout<<"Error : Invalid range\n";
	}
	
	cout<<"Array is\n";
	for(int i=0; i < iSize; i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iSize,iNo1,iNo2);
	
	nobj.DisplayRange();
	
	delete []ptr;
	
	return 0;
}