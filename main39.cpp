/*
problem statement : Accept number of rows and columns from user display below pattern

Input : Row 4     col 4
Output:
		1	2	3	4
			2	3	4
				3	4
					4	
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
			if((iRow < 0) || (iCol < 0) || (iRow != iCol))
			{
				cout<<"Error : Invalid input\n";
				return;
			}
			
			for(int i=1; i <= iRow; i++)
			{
				int iCnt =i;
				
				for(int j=1; j <= iCol; j++)
				{
					if( i<= j)
					{
						cout<<iCnt++<<"\t";
					}
					else 
					{
						cout<<" \t";
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