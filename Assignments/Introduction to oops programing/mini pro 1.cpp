#include<iostream>
#include<string>
using namespace std;

class content{
	private:
	string Title;
	string Platform;
	int View;
	string Status;
	
	public:
		//parameter
		content(string ti,string pl,int vie,string sta){
			Title=ti;
			Platform=pl;
			View=vie;
			Status=sta;
		}
		
		void display(){
			cout<<"\nTitle->"<<Title;
			cout<<"\nplatform->"<<Platform;
			cout<<"\nview->"<<View;
			cout<<"\nstatus->"<<Status;
		}
};

int main(){
	content c11("business","zoom",2566,"private");
	c11.display();
}
