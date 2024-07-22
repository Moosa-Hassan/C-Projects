/*
Program to chexk if an year is an leap year
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    while (true){
    bool Leap = true;
    int year = 0;
    cout<<endl<<"Enter year : ";
    cin>>year;
    if ((year%4)==0){
        if (((year%100) == 0 ) &&  ((year%400)!=0)){
            Leap = false;
        }
    }
    else{
        Leap = false;
    }
    if (Leap == true){
        cout<<endl<<"It is a leap year";
    }
    else{
        cout<<endl<<"It is not a leap year";
    }
    cout<<endl<<"Do you want to check another year?";
    cout<<endl<<"Press 1 to check or any other key to quit";
    int choice =0;
    cin>>choice;
    if (choice != 1){break;}
    }    
    return 0;
}