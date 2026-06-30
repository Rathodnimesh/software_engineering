#include<iostream>
#include<fstream>

using namespace std;
	int main(){	
	int Time;
	int totalTime=0;
	float average;
	for(int i=0;i<7;i++){	
	cout<<"enter a screen data time "<<i+1<<":";
	cin>>Time;	
	totalTime +=Time;
	
	average	=totalTime/7;
	
}
cout<<"Total Screen Time:"<<totalTime<<endl;

cout<<"average screen time:"<<average<<endl;

if(average>5){
	cout<<"warning message if average  exceeds healthy limit";
}
else{
	cout<<"good job no any problem";
}


	return 0;
}
