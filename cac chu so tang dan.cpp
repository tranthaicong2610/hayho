#include <iostream>
using namespace std;
long long a[150][150],mod=1000000007;
void solve()
{
    for(int i=1;i<=10;i++)
	{
		a[1][i]=i;
	}
	for(int i=2;i<=104;i++)
	{
		long long tong=0;
		for(int j=1;j<=10;j++)
		{
			tong+=a[i-1][j];
			tong=tong%mod;
			a[i][j]=tong;
			
		}
	}
	
}
int main() {
	solve();
	int test;
	cin>>test;
	
	while(test--)
	{
		
		int n;cin>>n;
		cout<<a[n][10]<<endl;
	}
	// your code goes here
	return 0;
}
