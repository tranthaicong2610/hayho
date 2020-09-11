#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
bool  kt(vector<long long>a,long long tong,long h)
{
	for(int i=0;i<h;i++)
	{
		if(tong==a[i] ) return true;
	}
	return false ;
}
int main ()
{
	int test;cin>>test;
	while(test--)
	{
			bool ok=false ;
		long long n;
		cin>>n;
		vector<long long>a(n);
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]=a[i]*a[i];
		}
		sort(a.begin(),a.end());
		
		for(long i=2;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(kt(a,a[i]-a[j],i))
				{
					ok=true;
					break;
				}
			}
			
			if(ok) break;
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
	
		cout<<endl;
	}
	return 0;
}
