
#include <iostream>
using namespace std;

int main (){
    string Firstname = "";
    string Secondname = "";
    string departure = "";
    string Arrival = "";
    int age = 0;
    cout<< "Please enter your first name: "<<endl;
    cin >>Firstname;
    cout<< "Please enter your second name: "<<endl;
    cin >>Secondname;
    cout<< "Please enter your age: "<<endl;
    cin >>age;
    cout<< "Please enter city of departure: "<<endl;
    cin >>departure;
    cout<< "Please enter city of arrival: "<<endl;
    cin >>Arrival;

    cout<<"  ---------- --------- ---------- ---------- ----------  "<< endl;
    cout<<"!!          !         !          !          !          !!"<< endl;
    cout<<"!! "<<Firstname<<"    !  "<<Secondname<<"   !   "<<age<<"      !  "<<departure<<"  !   "<<Arrival<<"   !!" << endl;
    cout<<"!!          !         !          !          !          !!"<< endl;
    cout<<"  ---------- --------- ---------- ---------- ----------  "<< endl;


    return 0;
}