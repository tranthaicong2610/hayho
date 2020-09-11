#include<iostream>
#include<vector>
using namespace std;
long d[100000000]={0},a[1000000];
int main ()
{
	int test;cin >>test;
	while(test--)

{
	
	long n;cin>>n;
	long long s=0;
	for(long i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	if(s%2!=0) cout<<"NO";
	else 
	{
		s=s/2;
		d[0]=1;
		for(long i=0;i<n;i++ )
		{
			for(long j=s;j>=a[i];j--)
			{
				if(d[j-a[i]]) d[j]=1;
			}
		}
		if(d[s]) cout<<"YES";
		else cout<<"NO";
	}
	cout<<endl;
	}	
	return 0;
}
