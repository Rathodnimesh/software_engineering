#include<iostream>
#include<string.h>
// study mood assistant.
using namespace std;


int main(){
	
	int study;
	
	cout<<"enter a hourly study today:";
	cin>>study;
	cout<<"your daily study hour:"<<study<<endl;
	
	if(study>=1&&study<3){
		cout<<"you are normal student";
	}
	else if(study>=3&&study<6){
		cout<<"you are hardwork student";
		
	}
	else if(study>=6&&study<10){
		cout<<"you are 100% achive in your goal in the life";
	}
	else if(study>=10&& study<16){
		cout<<"power full mind men";
	}
	else if(study>=16&&study<20){
		cout<<"powerfull student hard worker";
	}
		else{
		cout<<"please right daily hour study input:";
	}

		return 0;

}
	
