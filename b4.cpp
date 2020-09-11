#include<iostream>
using namespace std;
int main ()
{
	int test;cin>>test;
	while(test--)
	{
		string a;
		cin>>a;
		int dem1=0,dem2=0;
		for(int i=a.size()-1;i>0;i--)
		{
			if(a[i]>a[i-1]) dem1++;
			if(a[i]<a[i-1]) dem2++;
			if(dem1!=0&&dem2!=0) break;
			
			
		}
		if(dem1!=0&&dem2!=0) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
	return 0;
}
