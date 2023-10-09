#include <iostream>
using namespace std;
int main(){
	
 char choice;
 int num1, num2;
 
 cout<<"|________Calculator_________|";	
 cout<<"\n|___________________________|";
 
 cout<<"\n|Enter + for Addition       |";
 cout<<"\n|Enter - for subtraction    |" ;	
 cout<<"\n|Enter / for subtraction    |" ;
 cout<<"\n|Enter * for Multiplication |"	;
 cout<<"\n|___________________________|";
 cout<<"\n Select an Operator:";
 cin>>choice;
 cout<<"\nEnter First number:";
 cin>>num1;
 cout<<"\nEnter Second number:";
 cin>>num2;
 
 if (choice == '+'){
 cout<<num1 + num2;	
 }else if (choice == '-'){
 cout<<num1 - num2;
 }else if (choice == '/'){
 cout<<num1 / num2;	
 }else if (choice == '*'){
 cout<<num1 * num2;	
 }else {
 cout<<"Invalid Input";		
 }
return 0;
}