
#include<iostream>

using namespace std;

class Area
{
	public:
		float iRadius;					//characterestics
		float PI;						//characterestics
		
		Area(float iValue = 2)			//parameterised constructor with default value
		{
			iRadius = iValue;
			PI = 3.14f;
		}
		
		float AreaOfCircle()			//behaviour
		{
			float Area = (2 * PI * iRadius);
			return Area;
		}
};

int main()
{	
	float iValue = 0;
	cout<<"Enter the radius of circle\n";
	cin>>iValue;
	if(iValue < 0)
	{
		cout<<"Error : Invalide Input\n";
		return -1;
	}
	
	Area aobj(iValue);
	
	float Ret = aobj.AreaOfCircle();
	cout<< "Area of circle is "<<Ret<<"\n";
	
	return 0;
}