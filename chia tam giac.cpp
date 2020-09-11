#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main ()
{
	int test;
	cin>>test;
	while(test--)
	{
		double n,h;
		cin>>n>>h;
		for(float i=1;i<n;i++)
		{
			double kq=(sqrt)(h*h*i/n);
//			std::cout.precision(6);
			std::cout.setf( std::ios::fixed, std:: ios::floatfield ); 
			cout<<kq<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
