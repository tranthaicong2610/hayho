#include<iostream>
using namespace std;

int main ()
{
	float n;cin>>n;
	float tong=0,i;
	for( i=1;i<=n;i++)
	{
		tong=tong+(i+1)*i/2;
		if(tong>n) break;
	}
	cout<<i-1;
	return 0;
}
