
#include<iostream>

using namespace std;

class Pattern
{
	public:
		int iNo;
		
		Pattern(int iValue)
		{
			iNo = iValue;
		}
		
		void DisplayPattern()
		{
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
			for(int i = 1; i <= iNo;i++)
			{
				cout<<"#\t"<<i<<"\t*\t";
			}
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	Pattern obj(iValue);
	
	obj.DisplayPattern();
	
	return 0;
}