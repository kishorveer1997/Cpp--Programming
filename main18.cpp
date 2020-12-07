

/*
Accept number of rows and column from user and display below pattern.

Input : row :4		col:3
ouyput:  
		3	2	1
		3	2	1
		3	2	1
		3	2	1
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
				for(int j=iCol; j>=1; j--)
				{
					cout<<j<<"\t";
				}
				cout<<"\n";
			}
		}
};

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter Number of rows\n";
	cin>>iValue1;
	
	cout<<"Enter number of columns\n";
	cin>>iValue2;
	
	Pattern obj(iValue1,iValue2);
	
	obj.DisplayPattern();
	
	return 0;
}