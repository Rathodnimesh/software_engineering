/*
Q3. swaping 2 number;
*/
#include<iostream>
#include<string>

using namespace std;
void swap(int a,int b){
	
	int svaap;
	svaap=a;
	a=b;
	b=svaap;
	

	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;	
}
int main(){
	int a,b;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"a is:"<<a<<endl;
	cout<<"b is:"<<b<<endl;
	
	cout<<"after swapping two number A and B"<<endl;
	
	swap(a,b);
	return 0;
}
