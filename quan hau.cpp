#include<iostream>
#include<cmath>
using namespace std;
const int mn=100;
int v[mn];
void Print(int x[],int d,int c,const char*msg="")
{
	cout<<msg;
	for(int i=d;i<=c;i++)
	{
		cout<<" "<<x[i];
	}
}
// hau k dung tai dong i ko bi hau dat truoc chieu
bool GoodPlace(int k,int i)
{
	for(int j=1;j<k;j++)
	{
		
		//neu hau j chieu hau k la that bai
		if(v[j]==i||abs(v[j]-i)==k-j)
			return false ;
		
	}//for
	return true;
}
//dich chuyen tu v[k] voi k=1->n
//tim duoc i de cac hau 1..k-1 ko chieu
int Find(int n ,int k)
{
	for (int i=v[k]+1;i<=n;i++)
	{
		if(GoodPlace(k,i) ) return i;
		
	}
	return 0 ;
}
// hai phuong an la 1 nghiem va moi nghiem 
void Queen(int n) //number of solution : 
//1(only one solusion
//>1 all only solusion
{
	for(int i=1;i<=n;i++)
	{
		v[i]=0;
	}
	int k=1;//2 linh canh trai,phai: neu k>n den dich;neu k<1:fail
	while(1)
	{
		if(k>n)
		{
			Print(v,1,n,"\n place Queen as follow");
		}//co ngiem
		else if(k<1)
		{
			cout<<"\n vo nghiem";
			return ;
		}//vo nghiem
		v[k] = Find(n,k);
		if(v[k]) k++;
		else k--;
		
	}
}
void Run()
{
	for(int i=1;i<=5;i++)
	{
		Queen(i);
	}
}
void RunAll()
{
	Queen(8);
}
int main ()
{
	RunAll();
	//Run();
	cout<<"the end";
	return 0;
}
