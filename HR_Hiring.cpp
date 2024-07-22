/*
This code is for a person to check if they are eligable to apply for a Position
They must be in the age range 24-36
They are given three tries to enter CNIC after which program quits
Person has choice to use as many times as required
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    while (true){
    string cnic ="" ;
    string department = "";
    string emptime = "";
    string exprience ="";
    int age = 0;
    int tries = 0;
    while(tries<3){
        cout<<endl<<"Enter your CNIC in the following format (12345-6789012-3):";
        cin>>cnic;
        if (cnic.length() == 15 && cnic.substr(5,1) == "-" && cnic.substr(13,1) == "-"){break;}
        tries ++;
        cout<<endl<<"Invalid CNIC- Try gain";
        if (tries == 3){ 
            cout<<endl<<"Exiting program - Too many wrong attempts";
            return 0;
        }        
        }
        cout<<endl<<"Enter departmnet (Marketing/Human Resources/Operations) : ";
        cin.ignore();
        getline(cin,department);
        if (department == "Marketing" || department == "Operations" || department == "Human Resources" || department == "marketing" || department == "operations" || department == "human resources"){
            cout<<endl<<"Do you want to apply part time or full time ";
            
            getline(cin,emptime);
            if ((department == "Human Resources" && emptime =="Full Time")|| (department == "Marketing" && emptime =="Part Time")){
                cout<<endl<<"This Job is not avalaible for this mode";
            }
            else{
                cout<<endl<<"Enter your age ";
                cin>>age;
                if (age>24 && age<36){
                    cout<<endl<<"Do you have prior exprience in your department? (Yes or No) ";
                    cin>>exprience;
                    if (department != "Human Resources" && exprience == "No"){
                        cout<<endl<<"Exprience Required";
                    }
                    else{
                        cout<<endl<<"Congratulations, you are eligable for this job. ";
                    }

                }
                else{
                    cout<<endl<<"You are not eligable due to not being in our age range of 24-36.";
                }

            }


        }
        else{
            cout<<endl<<"No positions open for this department";
        }
    cout<<endl<<"Would you like to try again? Press 1 to restart or any othe key to quit";
    int choice =0;
    cin>>choice;
    if (choice !=1){break;}
    }
    return 0;
}