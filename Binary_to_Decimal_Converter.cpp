/*
This program askes fir an input either binary or decimal and converts it to the other base
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void binaryDecimalConverter(string num){
    string neew = "";
    string one = "1";
    int indec= 0;
        for (int i = 0 ; i <num.length() ; i++ ){
            neew = num[i];
            if (neew == one){
                indec = indec + pow(2,(num.length()-1)-i);
            }
        }
        cout<<endl<<"'"<<num<<"'"<<" in binary is equal to "<<"'"<<indec<<"'"<<"in decimal.";
      
    
}
void binaryDecimalConverter(int num){
    string neew = "";
    string neew2 = "";
    int x = num;
    while (x  >0){
        neew = neew + to_string(x%2);
        x= x/2;
    }
    for (int i = neew.length()-1; i>=0;i-- ){
        neew2 = neew2 + neew[i];
    }

    cout<<endl<<"'"<<num<<"'"<<" in decimal is equal to "<<"'"<<neew2<<"'"<<"in binary.";

}




int main(){
    while (true){
    string answer = "";
    string num = "";
    int decimal = 0 ;
    cout<< "Is your input binary (y/n) ";
    cin>>answer;
    if (answer == "y" || answer == "Y"){
        cout<<endl<<"Enter your binary number ";
        cin>>num;
        binaryDecimalConverter(num);
    }
    else{
        cout<<endl<<"Enter your decimal number ";
        cin>>decimal;;
        binaryDecimalConverter(decimal);
    }
    cout<<endl<<endl<<"Do you want to convert another number?"<<endl<<"Press 1 to enter another number or any key to quit ";
    int choice=0;
    cin>>choice;
    if (choice !=1){break;}    }
    return 0;
}