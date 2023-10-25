#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;
int main(){
	
    int choice, score;
    char q1,q2,q3,q4,q5, again;
do{
    HANDLE col;
	col = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col, 2);
	cout<<"\n__________________________________________";
	SetConsoleTextAttribute(col, 15);
	cout<<"\n|                                        |";
	SetConsoleTextAttribute(col, 6);
	cout<<"\n|             Choose Quiz                |";  
	SetConsoleTextAttribute(col, 13);          
	cout<<"\n|                                        |";
	SetConsoleTextAttribute(col, 12);
	cout<<"\n|         Enter 1 for History            |";
	SetConsoleTextAttribute(col, 14);
	cout<<"\n|         Enter 2 for Mathematics        |";
	SetConsoleTextAttribute(col, 10);
	cout<<"\n|         Enter 3 for Computer           |";
	SetConsoleTextAttribute(col, 9);
	cout<<"\n|                                        |";
	SetConsoleTextAttribute(col, 8);
	cout<<"\n|________________________________________|";
	cout<<"\n";
	SetConsoleTextAttribute(col, 5);
	cout<<"\n\tEnter your answer:";
	cin>>choice;
	system("cls");
	SetConsoleTextAttribute(col, 7);
	cout<<"\n\tPlease Wait!!";SetConsoleTextAttribute(col, 2);
	for(int x=0; x < 6;x++){
		
		cout<<".";
		this_thread::sleep_for(chrono::milliseconds(500));
		
     }
     system("cls");
     
     SetConsoleTextAttribute(col, 10);
     cout<<"\n\tPreparing Output!!";SetConsoleTextAttribute(col, 2);
	for(int x=0; x < 6;x++){
		
		cout<<".";
		this_thread::sleep_for(chrono::milliseconds(500));
		
     }
	system("cls");
	
	 switch(choice){
		case 1:
			SetConsoleTextAttribute(col, 15);
		cout<<"\n\tWELCOME TO HISTORY QUIZ BEE!\n";
		
		SetConsoleTextAttribute(col, 11);
		cout<<"\n1. Pang-ilan  sa  magkakpatid si DR. JOSE RISAL?";
		cout<<"\n\tA.  7";
		cout<<"\n\tB.  8";
		cout<<"\n\tC.  4";
		
		cout<<"\n\nEnter your answer:";
		cin>>q1;
		
		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'A'|| q1 == 'a'){
		score++;
	}	
		cout<<"\n2. WHAT IS THE POPULAR  NICKNAME OF FORMER SENATOR BENIGNO AQUINO JR, WHOSE DEATH BY ASSASSINATION SPARKED THE  EVENTS THAT LED TO THE PEOPLE REVOLUTION""?";
		cout<<"\n\tA. MARCOS";
		cout<<"\n\tB. NONOY";
		cout<<"\n\tC. D~GONG";
		
		cout<<"\n\nEnter your answer:";
		cin>>q2;
		
	if(q2 == 'B'|| q2 == 'b'){
		score++;		
	}
	
	cout<<"\n3. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q3;
		
	if(q3 == 'C'|| q3 == 'c'){
		score++;		
	}
	
	cout<<"\n4. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q4;
		
	if(q4 == 'C'|| q4 == 'c'){
		score++;		
	}
	
	cout<<"\n5. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q5;
		
	if(q5 == 'C'|| q5 == 'c'){
		score++;		
	}
	cout<<"\n Your Score is:"<<score;
	
		case 2:
				SetConsoleTextAttribute(col, 6);
		cout<<"\n\tWELCOME TO MATHEMATICS QUIZ BEE!\n";
		
			SetConsoleTextAttribute(col, 7);
		cout<<"\n1. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q1;
		
		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'C'|| q1 == 'c'){
		score++;
	}	
		cout<<"\n2. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q2;
		
	if(q2 == 'C'|| q2 == 'c'){
		score++;		
	}
	
	cout<<"\n3. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q3;
		
	if(q3 == 'C'|| q3 == 'c'){
		score++;		
	}
	
	cout<<"\n4. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q4;
		
	if(q4 == 'C'|| q4 == 'c'){
		score++;		
	}
	
	cout<<"\n5. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q5;
		
	if(q5 == 'C'|| q5 == 'c'){
		score++;		
	}
	cout<<"\n Your Score is:"<<score;
	
	break;
		case 3:
				SetConsoleTextAttribute(col, 5);
		cout<<"\n\tWELCOME TO COMPUTER QUIZ BEE!\n";
		
			SetConsoleTextAttribute(col, 9);
		cout<<"\n1. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q1;
		
		cout<<"\n_________";
		cout<<"\n";
	if(q1 == 'C'|| q1 == 'c'){
		score++;
	}	
		cout<<"\n2. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q2;
		
	if(q2 == 'C'|| q2 == 'c'){
		score++;		
	}
	
	cout<<"\n3. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q3;
		
	if(q3 == 'C'|| q3 == 'c'){
		score++;		
	}
	
	cout<<"\n4. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q4;
		
	if(q4 == 'C'|| q4 == 'c'){
		score++;		
	}
	
	cout<<"\n5. The first and youngest president of First Philippine Republic?";
		cout<<"\n\tA. Emilio Aguinaldo";
		cout<<"\n\tB. Manuel A. Roxas";
		cout<<"\n\tC. Manuel L. Quezon";
		
		cout<<"\n\nEnter your answer:";
		cin>>q5;
		
	if(q5 == 'C'|| q5 == 'c'){
		score++;		
	}
	cout<<"\n Your Score is:"<<score;
	
	break;
	default:
		
		cout<<"\n Invalid Input";
     }
    cout<<"\nTry again? Y for YES / N for NO: ";
   cin>>again;
   system("cls");
 }
 
   while(again == 'y'|| again == 'Y');
  
     return 0;
     
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
