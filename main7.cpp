
#include<iostream>

using namespace std;

class Pattern
{
	public:
		int iValue;
		
		Pattern(int iNo)
		{
			iValue = iNo;
		}
		
		void DisplayPattern()
		{
			int i=0;
			
			if(iValue < 0)
			{
				iValue = -iValue;
			}
			
			for(i = 1; i <= iValue*2;i++)
			{
				if(i <= iValue)
				{
					cout<<"*\t";
				}
				else 
				{
					cout<<"#\t";
				}
			}
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	Pattern obj(iValue);
	
	obj.DisplayPattern();
	
	return 0;
}