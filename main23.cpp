
/*
Problem statement : Accept number of rows and columns from user dsplay below pattern.

Input : row :4     col:4
output:
		4	4	4	4
		3	3	3	3
		2	2	2	2
		1	1	1	1
*/

#include<iostream>

using namespace std;

class Pattern
{
	public:
		int iRow;
		int iCol;
		
		Pattern(int iValue1, int iValue2)
		{
			iRow = iValue1;
			iCol = iValue2;
		}
		
		void DisplayPattern()
		{
			if(iRow < 0)
			{
				iRow = -iRow;
			}
			
			if(iCol < 0)
			{
				iCol = -iCol;
			}
	
			for(int i=iRow; i >=1; i--)
			{
				for(int j=1; j <= iCol;j++)
				{
					cout<<i<<"\t";
				}
				cout<<"\n";
			}
		}
};

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	cout<<"Enter number of rows\n";
	cin>>iValue1;
	
	cout<<"Enter number of columns\n";
	cin>>iValue2;
	
	Pattern obj(iValue1,iValue2);
	
	obj.DisplayPattern();
	
	return 0;
}