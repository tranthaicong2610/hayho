#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	long long k;
	cin>>n>>k;
	long long a[700];
	for(int i=0;i<n;i++) cin>>a[i];
	
	if(k>=n)
	{
		sort(a,a+n);
		cout<<a[n-1];
	}
	else 
	{
		int vodich=a[0];
		for(int i=1;i<=k;i++)
		{
			if(vodich<a[i]) 
			{
				vodich=a[i];
			}
		}
		cout<<vodich;
	}
	return 0;
}
