#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

void readNumbersFromFile(string filename){
	string line;
	float sdev=0.0;
	int counter=1,sum=0,number=0;
	if (filename == "numbers.txt"){
		ifstream myfile(filename.c_str());
		myfile.is_open();
		while(getline(myfile,line)){
			number = atoi(line.c_str());
			sum = sum + number;
			sdev = sqrt((pow(number-(sum/counter),2)/number));
			counter++;
		}
		cout << "Sum: " << sum << endl;
		cout << "Number of values: " << counter << endl;
		cout << "Average: " << sum/counter << endl;
		cout << "Standard deviation: " << sdev << endl;
	}
	else {
		cout << "Something is wrong with the input file" << endl;
	}
}
void check_banana (string filename){
  if (filename == "banana.txt"){
		string line;
  	string banana = "banana";
  	int count = 0;
  	ifstream myfile;
  	myfile.open ("banana.txt");
  	if (myfile.good() == true){
    	while (getline (myfile, line)){
      	transform(line.begin(),line.end(),line.begin(), ::tolower);
      	if (line.find (banana) != string::npos){
        	count ++;
      	}
    	}
    	cout << "Number of times that 'banana' appears: " << count << endl;
  	}
	}
	else {
		cout << "Something is wrong with the input file" << endl;
	}
}

int main(){
	string filename;
	cout << "Name of the file: ";
	cin >> filename;
	readNumbersFromFile(filename);
	check_banana (filename);
	return 0;
}
