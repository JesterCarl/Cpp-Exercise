#include <iostream>
using namespace std;

int main (){
	
int grade;

cout<< "Enter your Grade: ";	
cin>>grade;
	
if(grade >= 100){
cout<< "Rank S";		
}else if (grade >= 90){
cout<< "Rank A";		
}else if (grade >= 80){
cout<< "Rank B";	
}else if (grade >= 70){
cout<< "Rank C";	
}else if (grade >= 60){
cout<< "Rank D";	
}else if(grade >= 50){
cout<< "Rank E";	
}else{
cout<< "Rank F";	
}
	
return 0;
}