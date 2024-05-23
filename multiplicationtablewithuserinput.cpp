#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

float inputyournumber;
void cleanScreen(){
   system("CLS");
}

int main(){
 cout<<" ENTER YOUR NUMBER :"<<endl;
 cin>>inputyournumber  ;

 cout<<"\nTable of "<<inputyournumber<<endl;


 for (int i = 1; i < 11; i++)
 {
    cout<<i*inputyournumber<<endl;
 }
 
   cout<<"PRESS ANY KEY TO CONTINUE "<<endl;

   getch();
   cleanScreen();

return 0;

}