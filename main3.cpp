
#include<iostream>

using namespace std;

class Number
{
	public :
		int iNo1;
		int iNo2;
		
		Number(int iValue1, int iValue2)
		{
			iNo1 = iValue1;
			iNo2 = iValue2;
		}
		
		void DisplayRange()
		{
			int  i=0;
			
			for(i = iNo1; i <= iNo2; i++)
			{
				cout<<i<<"\t";
			}
		}
};

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter lower number\n";
	cin>>iValue1;
	
	cout<<"Enter higher Number\n";
	cin>>iValue2;
	
	if(iValue1 > iValue1)
	{
		cout<<"Error : Invalid input\n";
		return -1;
	}
	
	Number obj(iValue1,iValue2);
	
	obj.DisplayRange();
	
	return 0;
}