#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream file("my_fav_songs,txt");
	
	if(!file){
		cout<<"Errror creting file"<<endl;
		return 1;
	}
	
	file<<"1.Shape of You - Ed Sheeran"<<endl;
	file<<"2.Blinding Lights - The Weeknd"<<endl;
	file<<"3. Kesariya - Arijit Singh"<<endl;
	file<<"4.Perfect - Ed Sheeran"<<endl;
	file<<"5. Tum Hi Ho - Arijit Singh"<<endl;
	
	file.close();
	cout<<"File is created and songs writeen succesfully!"<<endl;
	
	return 0;
}
