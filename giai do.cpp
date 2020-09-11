#include<iostream>
using namespace std;
long a[100005]={0};
long snt[1006]={0};
int main ()
{
	int dem=1;
	for(long i=2;i<=10005;i++)
	{
		if(a[i]==0)
		{
			
			snt[dem]=i;
			dem++;
			for(int j=i*i;j<=10005;j=j+i)
			{
				a[j]=1;
			}
			
		}
	}
	int test;
	cin>>test;
	while(test--)
	{
		int n;cin>>n;
		cout<<snt[n]<<endl;
	}
	return 0;
}
