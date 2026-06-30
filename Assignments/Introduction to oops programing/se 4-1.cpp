#include<iostream>
using namespace std;

class socialmediauser{
	protected:
	string username;
	int followers;
	
	public:
		//constructor
		socialmediauser(string u,int f){
			username=u,
			followers=f;
		}
		
		void displayprofile(){
			cout<<"\nusername:"<<username;
			cout<<"\nfollowrs:"<<followers;
		}
};

int main(){
	socialmediauser user1("nimesh_rathod_0007",1500);
	user1.displayprofile();
}
