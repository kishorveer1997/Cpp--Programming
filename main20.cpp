
/*
Accept number of rows and column from user and display below pattern.

Input : row :4		col:4
ouyput:  
		1	1	1	1
		2	2	2	2
		3	3	3	3
		4	4	4	4
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
			
			for(int i=1; i <= iRow;i++)
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
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows\n");
	scanf("%d", &iValue1);
	
	printf("Enter number of columns\n");
	scanf("%d",&iValue2);
	
	Pattern obj(iValue1,iValue2);
	
	obj.DisplayPattern();
	
	return 0;
}