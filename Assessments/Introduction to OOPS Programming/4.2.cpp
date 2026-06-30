#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ifstream file("dailygoal.txt");
	
	if(!file){
		cout<<"error";
	}
	string s;
	
	while(getline(file,s)){
		cout<<s<<endl;
	}
	
	file.close();
	return 0;
	
}
