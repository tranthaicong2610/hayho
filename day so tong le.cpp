#include<iostream>
#include<vector>
using namespace std;
int main ()
{
	int test;cin>>test;
	while(test--)
	{
		
		int n;cin>>n;
		vector<int >a(n+3);
		int dem=0;
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			if(a[i]%2==1) dem++;
		}
		if(dem%2==1||dem<n&&dem!=0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
