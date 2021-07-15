#include "epi.hpp"
#include "fstream"
void epi(string k,int h){
	ofstream myfile;
	myfile.open("output.txt");//open "output.txt"
	string pi = to_string(M_PI); //convert double PI to string
	string e = to_string(M_E); //convert double E to string
	if(k == "pi"){
		for(int i = 0; i <= h; i++){ //print PI in "output.txt"
			myfile << pi[i];
		}
	}
	else if(k == "e"){
		for(int i = 0; i <= h; i++){ //print E in "output.txt"
			myfile << e[i];
		}
	}
	else{
		cout << "eror"; // if k!=E or PI print eror
	}
myfile.close(); //close "output.txt"


}
