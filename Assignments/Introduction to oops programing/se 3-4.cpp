#include<iostream>
using namespace std;

class Ticket {
	public:
		//deconstructor
		~Ticket(){
			cout<<"saving your ticket:"<<endl;
		}
};

int main(){
	Ticket *t1 = new Ticket();
	
	delete t1;
	
	return 0;
}
