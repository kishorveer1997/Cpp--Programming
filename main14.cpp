

/*
Problem statement : Accept number from user and display below pattern.

input :  8
output : 2	4	6	8	10	12	14	16
*/

#include<iostream>

using namespace std;

class Pattern
{
	public:
		int iNo;
		
		Pattern(int iValue)
		{
			iNo = iValue;
		}
		
		void DisplayPattern()
		{
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
			for(int i=1; i <=iNo;i++)
			{
				cout<<(2*i)<<"\t";
			}
		}
};

int main()
{
	int iValue =0;
	
	cout<<"Enter NUmber\n";
	cin>>iValue;
	
	Pattern obj(iValue);
	
	obj.DisplayPattern();
	
	return 0;
}