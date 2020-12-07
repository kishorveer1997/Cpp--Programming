
/*
Problem statement : Accept N number from user and display summation of each digit of number from array.

Input:	size  6
		
Elements : 151	66	3	700	10	-188

Outpt : 7	12	 3 		7 	1 	17
*/

#include<iostream>

using namespace std;

class Number
{
	private:
		int *arr;
		int iSize;
		
	public:
		Number(int ptr[], int i)
		{
			arr = ptr;
			iSize = i;
		}
		
		void DisSumDigit()
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
			
			cout<<"\nSummation of digits of each number is\n";
			for(int i=0; i < iSize; i++)
			{
				int iSum = 0;
				int iNo = 0;
				
				if(arr[i] < 0)
				{
					iNo = -arr[i];
				}
				else 
				{
					iNo = arr[i];
				}
				
				while(iNo != 0)
				{
					iSum = iSum + (iNo%10);
					iNo = iNo /10;
				}
				cout<<iSum<<"\t";
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
	
	cout<<"Enter array size\n";
	cin>>iSize;
	if(iSize <= 0)
	{
		cout<<"Error : Invalid array size\n";
		return -1;
	}
	
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
	
	Number nobj(ptr,iSize);
	
	nobj.DisSumDigit();
	
	delete[]ptr;
	
	return 0;
}