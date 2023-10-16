#include <iostream>
using namespace std;
int main(){
	
 char choice, again;
 int num1, num2;
 
do{
 
 
         cout<<"\nEnter A for Addition";
         cout<<"\nEnter B for Subtraction";
         cout<<"\nEnter C for Division";
         cout<<"\nEnter D for Multiplication";
 
          cout<<"\n Select an Operator:";
         cin>>choice;
         cout<<"\nEnter First number:";
         cin>>num1;
         cout<<"\nEnter Second number:";
         cin>>num2;
 
         switch(choice){

         case 'A' :
  	     cout<<"Result is "<<num1+num2;
 	     break;
         case 'B' :
 	     cout<<"Result is "<<num1-num2;
 	     break;
         case 'C' :
 	     cout<<"Result is "<<num1/num2;
 	     break;
         case 'D' :
         cout<<"Result is "<<num1*num2;
	     break;
         default:
 	     cout<<"Invalid Operator!";	 
     }
   
   cout<<"\nTry again? Y for YES / N for NO: ";
   cin>>again;
   system("cls");
 }
 
   while(again == 'y'|| again == 'Y');
 
return 0;
}