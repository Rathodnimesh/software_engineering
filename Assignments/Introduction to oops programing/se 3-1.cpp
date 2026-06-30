#include<iostream>
using namespace std;

class product {
	private:
		string productname;
		float price;
		int rating;
		
		public:
		
		 //parameter
		 product(string pn,float p,int r){
		 	productname=pn;
		 	price=p;
		 	rating=r;
		 }
	
			void displayinfo(){
				cout<<"\n productname:"<<productname;
				cout<<"\n price:"<<price;
				cout<<"\n rating:"<<rating;
			}
};

int main(){
    product p1 ("shampoo",289,4.5);
//	p1.displayinfo();
	
	cout<<"\n product 1 detils:";
	p1.displayinfo();
}
