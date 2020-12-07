
/*
Problem statement : Accept N number from user and display 3 digit number from array.

Input:	size  6
		
Elements : 151	66	3	700	10	-188

Outpt:	151		700 	-188
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
		
		void DisThreeDigNo()
		{
			if(arr == NULL)
			{
				cout<<"Error : Memory allocation fails\n";
				return;
			}
			if(iSize == 0)
			{
				cout<<"Error : Invalid array size\n";
				return;
			}
			
			cout<<"\nThree digit Numbers are\n";
			for(int i=0; i <iSize; i++)
			{
				int iNo = arr[i];
				int iCnt = 0;
				
				while(iNo != 0)
				{
					iNo = iNo / 10;
					iCnt++;
					if(iCnt >=4)
					{
						break;
					}
				}
				
				if(iCnt == 3)
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
	
	nobj.DisThreeDigNo();
	
	delete[]ptr;
	
	return 0;
}