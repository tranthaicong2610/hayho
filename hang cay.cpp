#include<iostream>
#include<string>
using namespace std;
bool ok=false;
int solve1(string a,string b)
{
	string temp1=a,temp2=b;
	while(temp1.size()<temp2.size()) temp1='0'+a;
	while(temp1.size()>temp2.size()) temp2='0'+b;
	if(temp1>temp2) return 1;
	if(temp1<temp2) return 2;
	if(temp1==temp2) return 0;
	
}

int main ()
{
	
	while(1)
	{
		int a;
		cin>>a;
		for (int stt = 1; stt<= a; stt++){
		string h[a];
		for (int i = 0; i < a; i ++){
		cin >> h[i];
		}
		string max = h[0],min = h[0];
		bool Kt = false;
		for (int i = 1; i < a; i++){
			if (solve1(max,h[i])==false){
			max = h[i];
			Kt=true;
			}
			if (solve1(min,h[i])==true){
			min = h[i];
			Kt = true;
			}
		}
		if(Kt==false) cout<<"Case "<<stt<<": "<<"There is a row of trees having equal height."<<endl;
		else{
		while(max.length()>1 && max[0] == '0') max.erase(0,1);
		while(min.length()>1 && min[0] == '0') min.erase(0,1);
		cout<<"Case "<<stt<<": "<<min<<" "<<max<<endl;
		
		}
	}
}
	return 0;
}
