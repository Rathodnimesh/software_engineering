#include<iostream>
using namespace std;

class movie{
	private:
		string title;
		int year;
		float rating;
		
		public:
			//parameter constrocuter
			movie(string titl,int yea,float rat){
				title=titl;
				 year=yea;
				 rating=rat;
			}
			
			//copy constructor
			movie(const movie&m){
				title=m.title;
				year=m.year;
				rating=m.rating;
			}
			
			void display(){
				cout<<"\ntitle:"<<title;
				cout<<"\nyear:"<<year;
				cout<<"\nrating"<<rating;
			}
};

int main(){
	movie m1("housefull3",2024,4.5);
	m1.display();
	
	movie m2=m1;
	m2.display();
	
}
