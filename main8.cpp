
#include<iostream>

using namespace std;

class Number
{
	public:
		int iNo;
	
		Number(int iValue)
		{
			iNo = iValue;
		}
		
		int EvenFactorial()
		{
			int iFact = 1;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
			for(int i=iNo; i >1; i--)
			{
				if(i % 2 == 0)
				{
					iFact = iFact * i;
				}
			}
			
			return iFact;
		}
	
	
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	Number nobj(iValue);
	
	int iRet = nobj.EvenFactorial();
	cout<<"Factorial is "<<iRet<<"\n";
	
	return 0;
}