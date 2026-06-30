#include<iostream>
#include<fstream>
using namespace std;

class playlist{
	private:
		string name;
		
		public:
			playlist(){
				cout<<"welcoes playlist  my favourits creted"<<endl;
			}
			
			~playlist(){
				ofstream  file("autosave.txt");
				if(file.is_open()){
					file<<"playlist name:"<<endl;
					file.close();
					cout<<"Auto saving playlist to file..."<<endl;
				}
				else
				{
					cout<<"Error saving file!"<<endl;
				}
				}
};              

int main(){
	playlist p1;
}   
