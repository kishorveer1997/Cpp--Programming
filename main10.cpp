
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
		
		int DiffFact()
		{
			int iEven = 1, iOdd = 1;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
			for(int i=iNo; i >1; i--)
			{
				if(i % 2 == 0)
				{
					iEven = iEven * i;
				}
				else 
				{
					iOdd = iOdd * i;
				}
			}
			
			return (iEven - iOdd);
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	Number obj(iValue);
	
	int iRet = obj.DiffFact();
	cout<<"Difference between even and odd Factorial is "<<iRet<<"\n";
	
	return 0;
}