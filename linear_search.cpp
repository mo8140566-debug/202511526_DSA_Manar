#include <iostream>
#include <string>

using namespace std;

int main(){
    long keyNumber=787406580;
    int phoneManar[3];
    int i=0;
    //filling numbers
    do{
        cout<<"Enter your phone Manar"<<endl;
        cin>>phoneManar[i];
        i=i+1;
    }while(i<3);

   //linear search
   //number Manar
   for (int i=0;i<3;i++){

    if(phoneManar[i]==keyNumber){
        cout<<"Manar number's found"<<endl;
        break;
    }
   }


   /*

   string name;
   char singleCharacter;
   float phoneManar;

   cout << "enter your Manar" << endl;
   cin>>Manar;

   cout << "enter your phone Manar" << endl;
   cin>>phoneManar;
   cout<<endl;
   cout<<"hello  "<<Manar<< " this is your phone: "<<phoneManar<<endl;

   */
     return 0;
}
