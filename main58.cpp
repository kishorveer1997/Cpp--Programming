
/*
Problem statement : Accept N number from user and return smmalest element from array
				  

Input:	size  6
		
Elements : 15	66	3	70	10	88

Outpt:	3
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
		
		int MinNumber()
		{
			int i = 0;
			int iMin = arr[i];
			
			for(i =0; i < iSize; i++)
			{
				if(arr[i] < iMin)
				{
					iMin = arr[i];
				}
			}
			
			return iMin;
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
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	int *ptr = new int[iSize];
	if(ptr == NULL)
	{
		cout<<"Error : Memory alocation  fails\n";
		return -1;
	}
	
	cout<<"Enter array elements\n";
	for(int i=0; i < iSize; i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Array is\n";
	for(int j=0; j < iSize; j++)
	{
		cout<<ptr[j]<<"\t";
	}
	
	Number nobj(ptr,iSize);
	
	int iRet = nobj.MinNumber();
	cout<<"\nMinimum number from array is "<<iRet<<"\n";
	
	delete []ptr;
	
	return 0;
}