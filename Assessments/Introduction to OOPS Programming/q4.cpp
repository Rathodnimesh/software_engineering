#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	string goal;
	ofstream file("dailygoal.txt");
	
	cout<<"enter a daily goal:";
	getline(cin,goal);
	file<<goal<<endl;
	file.close();
	cout<<"done";
	return 0;
}
