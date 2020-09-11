#include<iostream>
using namespace std;
int main()
{
	int test;cin>>test;
	while(test--)
	{
		long long n;cin>>n;
		
		if(n==1) cout<<"Shin";
		if(n==2) cout<<"Lin";
		if(n>2&&n%2==1) cout<<"Lin";
		if(n>2&&n%2==0)
		{
			int dem=0;
			
			while(n>2)	
			{
				
				if(n%2==1) 
				{
					n=1;
					dem++;
					break;
				}
				if(n%2==0)
				{
					for(int i=3;i<=n;i++)
					{
						if(n%i==0)
						{
							n=n/i;
							dem++;
							break;
						}
					}
				}
				else {
					dem++;
					n--;
				}
				
			}
			if(n==2) dem++;
			if(dem%2==1) cout<<"lin";
			else cout<<"Shin";
		}
		cout<<endl;
	}
	return 0;
}
