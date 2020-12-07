
/*
problem statement : Accept number of rows and columns from user display below pattern

Input : Row 6     col 6
Output:
		*	*	*	*	*	*
		*	#	#	#	*	*
		*	#	#	*	$	*
		*	#	*	$	$	*
		*	*	$	$	$	*
		*	*	*	*	*	*
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
			iRow =i;
			iCol = j;
		}
		
		void DisplayPattern()
		{
			if((iRow < 0) || (iCol < 0) || (iRow != iCol))
			{
				cout<<"Error : Invalid input\n";
				return;
			}
			
			for(int i=iRow; i >=1; i--)
			{
				for(int j=1; j <= iCol; j++)
				{
					if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
					{
						cout<<"*\t";
					}
					else if(i > j)
					{
						cout<<"#\t";
					}
					else 
					{
						cout<<"$\t";
					}
				}
				cout<<"\n\n";
			}
		}
};

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter number of rows\n";
	cin>>iValue1;
	
	cout<<"Enter number of column\n";
	cin>>iValue2;
	
	Pattern pobj(iValue1,iValue2);
	
	pobj.DisplayPattern();
	
	return 0;
}