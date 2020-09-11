#include<iostream>
#include<algorithm>
using namespace std;
long long d[1000006]={0},a[3000006];
int main ()
{
	bool ok=true;
	long long n,k;cin>>n>>k;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
//		d[a[i]]=1;
//		for(long long j=1;j<=k;j++) d[a[i]-j]=1;
	}
	sort(a,a+n);
	long long h=1, Min=a[1];
	if(Min==0)
	{
		long i;
		for( i=1;i<=n;i++)
		{
			if(a[i]!=0) break;
		}
		Min=a[i];
		h=i;
	}
	if(h==n+1) cout<<"1000000";
	else  while(Min>=1)
	{
		for(long long i=h;i<=n;i++ )
		{
			ok=false;
			for(long long j=0;j<=k;j++)
			{
				//if(d[a[i]-j]&&(a[i]-j)%Min==0)
				if((a[i]-j)%Min==0)
				{
					ok=true;break;
				}
			}
			if(ok==false) break;
		}
		
		if(ok) 
		{
			cout<<Min;
			break;
		}
		Min--;
	}
	
	return 0;
}
