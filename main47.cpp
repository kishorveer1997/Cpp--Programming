
/*
Problem statement : Accept N number from user and return elements which are divisible by 3 & 5.

Input:	N  6
Elements : 50	15	45	-30	-125	2

Outpt:	35	45	-30
*/

#include<iostream>

using namespace std;

class Number
{
	private:
		int *ptr;		//characterestics
		int iSize;		//characterestics
		
	public:
		Number(int arr[],int i)		//Constructor
		{
			ptr = arr;
			iSize = i;
		}
		
		void DisDivByFiveThree()	//Behaviour
		{
			if(ptr == NULL)		//Filter
			{
				cout<<"Error : Memory alocation fails\n";
				return;
			}
			if(iSize <= 0)		//filter
			{
				cout<<"Error : Invalid array size input\n";
				return;
			}
			
			cout<<"\nnumbers which are divisible by 3 & 5 are\n";
			for(int i=0; i < iSize;i++)
			{
				if((ptr[i] % 5 == 0) && (ptr[i] % 3 == 0) && ptr[i] != 0)
				{
					cout<<ptr[i]<<"\t";
				}
			}
			
		}
		
		~Number()		//Destructor
		{
			delete []ptr;	
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter size of arrays\n";
	cin>>iValue;
	if(iValue <= 0)
	{
		cout<<"Error : Invalid array size input\n";
		return -1;
	}
	
	int *ptr = new int[iValue];
	if(ptr == NULL)
	{
		cout<<"Error : Memory alocation fails\n";
		return -1;
	}
	
	cout<<"Enter array elements\n";
	for(int i=0; i < iValue;i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"Array elements are\n";
	for(int i=0; i < iValue;i++)
	{
		cout<<ptr[i]<<"\t";
	}
	
	Number nobj(ptr,iValue);
	
	nobj.DisDivByFiveThree();
	
	delete []ptr;
	
	return 0;
}