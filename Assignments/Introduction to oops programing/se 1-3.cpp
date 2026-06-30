#include<iostream>
#include<string>
using namespace std;

class Task{
	private:
		string title;
		bool isDone;
		
		public:
			Task(string t){
				title=t;
				isDone=false;
			}
			
			void markdone(){
				isDone = true;
			}
			
			void display(){
				cout<<"Task:"<<title<<" | status";
				if(isDone){
					cout<<" done";
				}
				else{
				  cout<<"Not done";
			}
				  cout<<endl;
			}
};

int main(){
	Task t1("complate homework");
	
	t1.display();
	t1.markdone();
	t1.display();
}
