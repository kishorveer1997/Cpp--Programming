
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
			char a = 'A';
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
			if(iNo > 26)
			{
				cout<<"Error : Invalid Input\n";
				return;
			}
			
			for(int i=1; i <= iNo;i++)
			{
				cout<<a<<"\t";
				a++;
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