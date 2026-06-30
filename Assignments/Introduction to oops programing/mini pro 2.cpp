#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class content{
	public:
		string title;
		string platform;
		int views;
		string status;
		
		void data(){
			cin.ignore();
			
			cout<<"Enter your title:";
			getline(cin,title);
			
			cout<<"Enter your platform:";
			getline(cin,platform);
			
			cout<<"Enter views:";
			cin>>views;
			
			
			cin.ignore();
			
			cout<<"Enter status:";
			getline(cin,status);
		}
		
		void savefile(){
			ofstream outfile("content.txt",ios::app);
			
			if(!outfile){
				cout<<"Error opening file!"<<endl;
				return;
			}
			
			outfile<<title<<","<<platform<<","<<views<<","<<status<<endl;
			outfile.close();
			
			
			cout<<"Content saved succesfully!"<<endl;
		}		
};

int main(){
	int choice;
	
	do{
		cout<<"\n ===content tracker menu ==="<<endl;
		cout<<"1. Add new content:"<<endl;
		cout<<"2. Exit:"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice){
			case 1:{
				content c;
				c.data();
				c.savefile();
				break;
			}
			case 2:{
				cout<<"Exiting program"<<endl;
				break;
			}
			case 3:
				cout<<"invaild choice!"<<endl;
				break;
		}
	} while(choice != 2); 
	return 0;
}
