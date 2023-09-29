#include <iostream>
using namespace std;
 int main (){
 	
 	
 	
 	
 	string a;
 	int b;
 	char c;
 	
 	cout<<"Enter a String: ";
 	getline(cin,a);// Name
 	
 	cout<<"Enter a Number: ";
 	cin>>b;// number
 	
 	cout<<"Enter a Letter: ";
 	cin>>c;// Letter
 	
 	a[b] = c;
 	
 	cout << a;
 

 	return 0;
 }