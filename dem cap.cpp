#include<iostream>
using namespace std;
int main ()
{
//	int test;cin>>test;
//	while(test--)
//	{
		string s;
		cin>>s;
		long long tong=0,dem1=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1') dem1++;
			else if(s[i]=='2')
			{
				tong+=dem1;
				
			}
		}
		cout<<tong;
//	}
	return 0;
}
