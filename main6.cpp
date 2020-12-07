
#include<iostream>

using namespace std;

class Numbers
{
	public:
		int iNo1;
		int iNo2;
		
		Numbers(int iValue1, int iValue2)
		{
			iNo1 = iValue1;
			iNo2 = iValue2;
		}
		
		void DisplayRevNum()
		{
			int i = 0;
			
			if(iNo1 > iNo2)
			{
				cout<<"Error : Invalid input\n";
				return;
			}
			
			for(i = iNo2; i >= iNo1; i--)
			{
				cout<<i<<"\t";
			}
		}
};
int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter lower number fromrange\n";
	cin>>iValue1;
	
	cout<<"Enter higher number from range\n";
	cin>>iValue2;
	
	if(iValue1 > iValue2)
	{
		cout<<"Error : Invalid input\n";
		return -1;
	}
	
	Numbers obj(iValue1,iValue2);
	
	obj.DisplayRevNum();
}