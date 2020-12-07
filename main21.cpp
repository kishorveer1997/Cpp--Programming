/*
Problem Statement : Accept number of rows and columns from user and display below pattern

Input : row : 4		col:4
output:
		A	B	C	D
		A	B	C	D
		A	B	C	D
		A	B	C	D
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
			if(iCol > 26)
			{
				cout<<"Error : Invalid Input\n";
				return;
			}
			
			for(int i=1; i <=iRow; i++)
			{
				char ch = 'A';
				
				for(int j=1; j <= iCol; j++)
				{
					cout<<ch<<"\t";
					ch++;
				}
				cout<<"\n";
			}
				
		}
};

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter number of rows\n";
	cin>>iValue1;
	
	cout<<"Enter number of columns\n";
	cin>>iValue2;
	
	Pattern obj(iValue1,iValue2);
	
	obj.DisplayPattern();
	
	return 0;
}