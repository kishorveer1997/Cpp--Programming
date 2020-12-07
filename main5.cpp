
#include<iostream>

using namespace std;

class Numbers
{
	public:
		
		int AdditionOfNum(int iNo1,int iNo2)
		{
			int iAdd = 0;
			
			for(int i=iNo1; i <= iNo2; i++)
			{
				iAdd = iAdd + i;
			}
			
			return iAdd;
		}
};

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter lower number of range\n";
	cin>>iValue1;
	
	cout<<"Enter higher number of range\n";
	cin>>iValue2;
	
	if(iValue1 > iValue2)
	{
		cout<<"Error : Invalid input\n";
		return -1;
	}
	
	Numbers obj;
	
	int iRet = obj.AdditionOfNum(iValue1,iValue2);
	cout<<"Addition is "<<iRet<<"\n";
	
	return 0;
}