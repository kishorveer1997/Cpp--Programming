/*
problem statement : Accept number of rows and coumn from user and display below pattern

Input : row 5    col 5
output:
		1	2	3	4	5
	   -1  -2  -3  -4  -5
		1	2	3	4	5
	   -1  -2  -3  -4  -5
		1	2	3	4	5
*/

#include<iostream>

using namespace std;

class Pattern
{
	private:
		int iRow;	//characterstics
		int iCol;	//characterstics
		
	public:
		
		Pattern(int i, int j)		//paramtetrised constructor
		{
			iRow = i;
			iCol = j;
		}
		
		void DisplayPattern()
		{
			if(iRow < 0)	//filter
			{
				iRow = -iRow;
			}
			
			if(iCol < 0)	//filter
			{
				iCol = -iCol;
			}
			
			for(int i=1; i <= iRow; i++)
			{
				for(int j=1; j <= iCol; j++)
				{
					if(i % 2 != 0)
					{
						cout<<" "<< j <<"\t";
					}
					else 
					{
						cout<< -j <<"\t";
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
	
	cout<<"Enter number of column\n";
	cin>>iValue2;
	
	Pattern pobj(iValue1,iValue2);
	
	pobj.DisplayPattern();
	
	return 0;
}

