
/*
Problem statement : Accept N number from user and return  difference between 
					largest and smallest element from array
				  

Input:	size  6
		
Elements : 15	66	3	70	10	88

Outpt:	85  (88 - 3)
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
		
		int DiffMaxMinNo()
		{
			int i = 0;
			int iMax = arr[i];
			int iMin = arr[i];
			
			for(i =0; i < iSize; i++)
			{
				if(arr[i] > iMax)
				{
					iMax = arr[i];
				}
				
				if(arr[i] < iMin)
				{
					iMin = arr[i];
				}
			}
			
			return (iMax - iMin);
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
		cout<<"Error : Invalid arrray size\n";
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
	
	cout<<"Array is\n";
	for(int i=0; i < iSize; i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iSize);
	
	int iRet = nobj.DiffMaxMinNo();
	cout<<"\nDiffrence between largest and smallest number is "<<iRet<<"\n";
	
	delete []ptr;
	
	return 0;
}