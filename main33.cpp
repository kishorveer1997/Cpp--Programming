
/*
problem statement : Accept number of rows and columns from user display below pattern

Input : Row 4     col 4
Output:
		*	*	*	*
		*	$	$	*
		*	$	$	*
		*	*	*	*
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
			
			for(int i=1; i <= iRow; i++)
			{
				for(int j=1; j <= iCol; j++)
				{
					if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
					{
						cout<<"*\t";
					}
					else 
					{
						cout<<"$\t";
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
	
	Pattern pobj(iValue1,iValue2);
	
	pobj.DisplayPattern();
	
	return 0;
}