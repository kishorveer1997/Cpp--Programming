
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
			
			for(int i = iNo; i >0; i--)
			{
				cout<<i<<"\t#\t";
			}
		}
};

int main()
{
	int iValue =0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	Pattern obj(iValue);
	
	obj.DisplayPattern();
	
	return 0;
}