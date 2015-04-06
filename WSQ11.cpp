#include <iostream>
#include <cstring>
#include <algorithm>
#include "BigIntegerLibrary.hh"
using namespace std;

bool checking (BigInteger num){
  string str1 = bigIntegerToString(num);
  reverse (srt1.begin(), str1.end());
  BigInteger num2 = stringToBigInteger(str1);
  return (num == num2);
}
BigInteger Inverter(BigInteger num){
  for(int i=0; i<=30 && checking(num) == false; n++){
    string str2 = bigIntegerToString(num);
    reverse (str2.begin(), str2.end());
    BigInteger num3 = stringToBigInteger(str2);
    num = num+num3;
  }
	return c;
}
int main (){
	int palindromes=0, lycherel=0, changer=0;
	int lowb,upb;
	BigInteger num;
	cout << "Please give me the lower bound: " << endl;
	cin >> lowb;
	cout << "Please give me the upper bound: " << endl;
	cin >> upb;
  for (BigInteger num=lowb; num<=upb; num=num+){
    if(checking(num) == true){
      palindromes++;
    }
		else {
      num = Inverter(num);
      if(checking(num) == true){
        changer++;
      }
			else{
      cout << "I found a Lycherel number: " << num << " is Lychrel." << endl;
        lycherel++;
      }
    }
  }
cout << "Natural Palindromes: " << palindromes << endl;
cout << "Non-Lycherel Palindromes " << changer << endl;
cout << "Lycherels" << lycherel << endl;
  return 0;
}
