#include<iostream>
using namespace std;

class socialmediauser{
	protected:
		string username;
		int followers;
		
		public:
			//constructor
			socialmediauser(string us,int fo){
				username=us;
				followers=fo;
			}
			
			void displayprofile(){
				cout<<"\n username:"<<username;
				cout<<"\n followers:"<<followers;
			}
};

//dervid class

class prodcaster:public socialmediauser{
	private:
		string prodcastername;
		
		public:
			//constructor
			
			prodcaster(string us,int fo,string pr):socialmediauser(us,fo){
				prodcastername=pr;
			}
			
			void publisheposide(string episode){
				cout<<"episode \" "<< episode
				<< "\ published on" <<prodcastername <<endl;
			}		
};

int main(){
	prodcaster s1("nimeshbhai",16000,"Tech with rathod");
	s1.displayprofile();
	s1.publisheposide("oop concept in c++ and python ");
	
}
