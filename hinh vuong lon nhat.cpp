#include<iostream>
#include<algorithm>
using namespace std;
int a[1005];
int main ()
{
	int test;cin>>test;
	while(test--)
	{
		
		int n,kq=0;cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			int temp=min(a[i],n-i);
			kq=max(kq,temp);
		}
		cout<<kq<<endl;
	}
	return 0;
}

