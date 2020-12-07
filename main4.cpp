
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
		
		void DisplayEvenNo()
		{
			int i=0;
			
			for(i = iNo1; i <= iNo2; i++)
			{
				if(i % 2 == 0)
				{
					cout<<i<<"\t";
				}
			}
		}
};

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter Lower Number from range\n";
	cin>>iValue1;
	
	cout<<"Enter Higher Number from range\n";
	cin>>iValue2;
	
	if(iValue1 > iValue2)
	{
		cout<<"Error : Invalid INput\n";
		return -1;
	}
	
	Numbers obj(iValue1,iValue2);
	
	obj.DisplayEvenNo();
	
	return 0;
}