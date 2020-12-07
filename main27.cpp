
/*
Problem statement : Accept number of rows and column from user and display below pattern.

Input : rows : 4   col : 4

Output:
	a	b	c	d
	1	2	3	4
	a	b	c	d
	1	2	3	4
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
			
			for(int i=1; i <= iRow ; i++)
			{
				int iCnt = 1;
				char ch = 'a';
				
				for(int j=1; j <= iCol; j++)
				{
					if(i % 2 != 0)
					{
						cout<<ch<<"\t";
						ch++;
					}
					else 
					{
						cout<<iCnt++<<"\t";
					}
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