
#include<iostream>

using namespace std;

class Area
{
	public :
		float width;
		float length;
		
		Area(float Value1, float Value2)
		{
			width = Value1;
			length = Value2;
		}
		
		float AreaOfRectangle()
		{
			float Area = width * length;
			
			return Area;
		}
};

int main()
{
	float Value1 = 0.0f, Value2 = 0.0f;
	
	cout<<"Enter width of Rectangle\n";
	cin>>Value1;
	
	cout<<"Enter length of Rectangle\n";
	cin>>Value2;
	
	if(Value1 < 0 || Value2 < 0)
	{
		cout<<"Error : Invalid Input\n";
		return -1;
	}
	Area aobj(Value1,Value2);
	
	float Ret = aobj.AreaOfRectangle();
	cout<<"Area of Rectangle is "<<Ret<<"\n";
}