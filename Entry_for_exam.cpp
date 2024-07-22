#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string cnic;
    int rollnum,age = 0;
    cout<<"Enter age : ";
    cin>>age;
    cout<<endl<<"Enter Roll Number : ";
    cin>>rollnum;
    cout<<endl<<"Enter your 13 digit CNIC : ";
    cin>>cnic;
    if (cnic.length()== 13 && (age >= 15 && age<=15) && (rollnum >=0 && rollnum<=1000)){
        cout<<"Candidate will be allowed to sit in exam"<<endl;
        
    }
    else{
        cout<<"Candidate will not be allowed to sit in exam"<<endl;
    }
    
    return 0;
}