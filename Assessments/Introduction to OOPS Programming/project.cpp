#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class First{	
public:
		int Time[7];
	int totalTime=0;
void dailystudy(){
	float average;
	for(int i=0;i<7;i++){	
	cout<<"enter a study time "<<i+1<<":";
	cin>>Time[i];	
	totalTime +=Time[i];	
	average	=totalTime/7;	
}
cout<<"Total study Time:"<<totalTime<<endl;
cout<<"average study time:"<<average<<endl;
if(average>5){
	cout<<"warning message if average  exceeds healthy limit"<<endl;
}
else{
	cout<<"good job no any problem"<<endl;
}
}
};
class Second :public First{
public:
// second function
void report(){
	
	ofstream file("report.txt");
		cout<<"---------your weekly report is here:-----------"<<endl;
		file<<"---------your weekly report is here:-----------"<<endl;
 
        for(int i=0;i<7;i++)
        {
            cout<<"Day"<< i + 1 << " : "
                 <<Time[i]<< " hours" << endl;
                                  file<<Time[i]<< " hours" << endl;

            totalTime +=Time[i];
           
        }
        float average = totalTime / 7.0;
        cout<<"\nTotal Study Time :"<<totalTime <<"hours"<<endl;
                file<<"\nTotal Study Time :"<<totalTime <<"hours"<<endl;

        cout<<"Average Study Time :"<<average <<"hours"<<endl;
                file<<"Average Study Time :"<<average <<"hours"<<endl;

        if(average>5)
        {
            cout<<"Warning: Average exceeds healthy limit!"<<endl;
                        file<<"Warning: Average exceeds healthy limit!"<<endl;

        }
        else
        {
            cout<<"Good Job No problem."<<endl;
                        file<<"Good Job No problem."<<endl;

        }
        file.close();
}
			
};
// third functions
void exit(){
		cout<<"thank you close the all program"<<endl;
	}
int main(){
	

	
Second s;


	int choice;
	do{
		cout<<"-----student productivity tracker----"<<endl;
		cout<<"1. Log daily study hours:"<<endl;
		cout<<"2. Generate weekly report:"<<endl;
		cout<<"3.exit"<<endl;
		cout<<"4.enter your choice:";
		cin>>choice;
				
		switch(choice){
			case 1:s.dailystudy();
			break;
			case 2:s.report();
			break;
			case 3:exit();
			cout<<"exit program"<<endl;
			break;
		}			 
}
	while(choice!=3);
return 0;
}
		
