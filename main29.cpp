/*
problem statement : Accept number of rows and coumn from user and display below pattern

Input : row 4   col 4
output:
		1	2	3	4	
		2	3	4	5
		3	4	5	6
		4	5	6	7
*/

#include<iostream>

using namespace std;

class Pattern
{
	private:
		int iRow;
		int iCol;
		
	public:
		
		Pattern(int i, int j)
		{
			iRow = i;
			iCol = j;
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
			
			for(int i=1; i<= iRow; i++)
			{
				int iCnt = i;
				for(int j=1; j <= iCol; j++)
				{
					cout<<iCnt++<<"\t";
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
	
	Pattern pObj(iValue1,iValue2);
	
	pObj.DisplayPattern();
	
	return 0;
}