#include<iostream>
using namespace std;
long long f[100];

char fiboword(int n,long long k)
{
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2])
		return fiboword(n-2,k);
		return fiboword(n-1,k-f[n-2]);
		
}
int main ()
{
	
	int test;cin>>test;
	
	while(test--)
	{
		int n;
		long long k;
		f[1],f[2]=1;
		for(int i=3;i<=n;i++)
		{
			f[i]=f[i-1]+f[i-2];
		}	
		cin>>n>>k;
		cout<<fiboword(n,k)<<endl;
	}
	return 0;
}
