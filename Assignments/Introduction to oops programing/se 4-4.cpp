#include<iostream>
#include<string>
using namespace std;

class socialmediauser{
	protected:
		string username;
		int followers;
		
		public:
			//constructor
			socialmediauser(string un,int fo){
				username=un;
				followers=fo;
			}
			
			void displayprofile(){
				cout<<"usrname:"<<username;
				cout<<"followers:"<<followers;
			}
			
			//derived class youtuber 
			
			class youtuber: public socialmediauser{
				protected:
					string channelname;
					
					public:
					
					youtuber(string un,int fo,string cn): socialmediauser(un,fo){
						channelname=cn;
					}
					
					void uploadvideo(string title){
						 cout << "Video \"" << title << "\" uploaded to " << channelName << endl;
					}
			};
			
			//derived class  gamin youtuber
			class gamingyoutuber : public youtuber{
				public:
					gaminyoutuber(string un,int fo,string cn):youtuber (un,fo,cn){}
					
					voidstreamGame(string gamename){
						cout<<username<<"is now streaming";
						cout<<gamename<<"on "<<chanelname<<endl;
					}
			};
};

int main(){
	gy g1("nimesh_gamer",8000,"n_gaming");
	
	g1.displayprofile();
	g1.uploadvideo();
	g1.streagame("pubg");
}
