#include<iostream>
using namespace std;
int main ()
{
	long long n,a,b,c,dem=0;
	cin>>n>>a>>b>>c;
	while(n>=a||n>=b)
	{
		if(n>=a&&n>=b) 
		{
			if(a<b-c)
			{
				long long Min=a;
				long long h;
				h=n/Min;
				n=n-h*Min;
				dem+=h;
			}
			else 
			{
				long long Min=b;
				long long h;
				h=n/Min;
				n=n-h*(b-c);
				dem+=h;
			}
		}
		if(n>=a&&n<b)
		{
			long long h=n/a;
			dem+=h;
			n=n-h*a;
		}
		if(n>=b&&n<a) 
		{
			long long h=n/(b);
			n=n-h*(b-c);
//			cout<<n<<endl;
			dem++;
		}
		
	}
	cout<<dem;
	return 0;
}
