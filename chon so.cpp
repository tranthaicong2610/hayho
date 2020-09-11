#include<iostream>
#include<cmath>
 
using namespace std;
//so chinh phuong
long long soCP(long long x){
	long long tmp;
	tmp=sqrt(x);
	if(x!=1&&tmp*tmp==x) return 1;
	else return 0;
}
long long check(long long n){
	long long i=1;
 
	while(i<=sqrt(n)){
		if(n%i==0&&soCP(i)==1) return 1;
		else if(n%i==0&&soCP(n/i)==1) return 1;
		else {
			 i++;
		}
	}
	return 0;
}
long long result(long long n){
	long long max=0;
	if(check(n)==0) return n;
	else {
		for(long long i=2; i<=sqrt(n); i++){
			if(n%i==0){
				if(check(i)==0&&max<i) max=i;
				if(check(n/i)==0&&max<n/i) max=n/i; 
			}
		}
	}
	return max;
}
int main(){
	long long n; cin>>n;
	cout<<result(n);
}
