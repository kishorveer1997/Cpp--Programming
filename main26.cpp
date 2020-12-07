/*
Problem statement : Accept number of rows and column from user and display below pattern.

Input : rows : 4   col : 4

Output:
		2	4	6	8
		1	3	5	7
		2	4	6	8
		1	3	5	7
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
			
			for(int i=1; i <= iRow; i++)
			{
				int iCnt1 = 1;
				int iCnt2 = 2;
				for(int j=1; j <= iCol; j++)
				{
					if(i % 2 == 0)
					{
						cout<<iCnt1<<"\t";
						iCnt1 = iCnt1 +2;
					}
					else 
					{
						cout<<iCnt2<<"\t";
						iCnt2 = iCnt2 +2;
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