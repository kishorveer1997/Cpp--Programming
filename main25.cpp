
/*
Problem statement : Accept number of rows and column from user and display below pattern.

Input : rows : 4   col : 4

Output:
		1	2	3	4
		5	6	7	8
		9	1	2	3
		4	5	6	7
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
			
			int iCnt = 1;
			
			for(int i=1; i <= iRow; i++)
			{
				for(int j=1; j <= iCol; j++)
				{
					cout<<iCnt++<<"\t";
					if(iCnt > 9)
					{
						iCnt = 1;
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