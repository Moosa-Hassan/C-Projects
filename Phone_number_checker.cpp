#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string phone;
    cout<<"Enter phone number : ";
    cin>>phone;
    if (phone.length() == 10){
        phone = "("+phone.substr(0,3)+") "+phone.substr(3,3)+ "-"+phone.substr(6,4);
        cout<<endl<<"The formatted string is : "<<phone;
    }
    else{
        cout<<endl<<"Entered string is not of correct length";
    }
    return 0;
}