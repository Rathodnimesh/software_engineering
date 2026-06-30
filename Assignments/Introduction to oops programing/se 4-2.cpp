#include<iostream>
#include<string>
using namespace std;

class socialmediauser{
	protected:
	string username;
	int followrs;
	
	public:
		//constuctor
		socialmediauser(string us,int fo){
			username=us;
			followrs=fo;
				}
		
		void displayprofile(){
			cout<<"\n username:"<<username;
			cout<<"\n followrs:"<<followrs;
		
		}	
};

// cout<<------------------------------second --------------------------------

class youtuber : public socialmediauser{
	public:
		string channelname;
		//constructor
		youtuber(string us,int fo,string cn) :socialmediauser(us,fo){
			channelname=cn;
		}
		
		void uploadvideo(string title){
			cout<< "Video \"" << title 
             << "\" uploaded to " <<channelname << endl;
		}
};

int main(){
	 socialmediauser u1("nimesh_rathod_0007",1500);
	u1.displayprofile();
	
	youtuber y1("nimesh_rathod_0007",1500,"nimesh with tech ");
	y1.uploadvideo("DSA turturiol");
}
