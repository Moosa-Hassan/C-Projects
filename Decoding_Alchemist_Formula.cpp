#include <iostream>
#include <string>
using namespace std;

int main(){
    string formula = "";
    string check1,check2,check3,check4,Nature,Element,c1,c2,c3 ;
    int vowels,vowels2 = 0;
    cout<<"Enter the Alchemist's Formula : ";
    cin >> formula;
    cout<<endl<<"Decoding... ";
    check1 = formula.substr(0,3);
    check2 =  formula.substr(3,3);
    check3 = formula.substr(6,3);
    check4 = formula.substr(9,3);
    for(int i = 0; i < 3; i++){
        if (check1.substr(i,1) == "A"||check1.substr(i,1) == "E"|| check1.substr(i,1) == "I" || check1.substr(i,1) == "O"|| check1.substr(i,1) == "U"|| check1.substr(i,1) == "a"|| check1.substr(i,1) == "e"|| check1.substr(i,1) == "i"|| check1.substr(i,1) == "o"|| check1.substr(i,1) == "u"){
            vowels++;
        }
        if (check2.substr(i,1) == "A"||check2.substr(i,1) == "E"|| check2.substr(i,1) == "I" || check2.substr(i,1) == "O"|| check2.substr(i,1) == "U"|| check2.substr(i,1) == "a"|| check2.substr(i,1) == "e"|| check2.substr(i,1) == "i"|| check2.substr(i,1) == "o"|| check2.substr(i,1) == "u"){
            vowels2++;
        }

    }
    if (vowels > 1){
        cout<<endl<< "Nature : Liquid";
        Nature = "Liquid";
    }
    else if (vowels<=1){
        cout<<endl<<"Nature : Solid";
        Nature = "Solid";
    }
    else{
        cout<<endl<<"Nature : Gaseous";
        Nature = "Gaseous";
    }
    if ((check2.substr(0,1) == check2.substr(2,1)) && vowels<2){
        Element = "Earth";
        cout<<endl<<"Element : Earth";
    }
    else if(vowels2>=2){
        Element = "Water";
        cout<<endl<<"Element : Water ";
    }
    else if((check2.substr(0,1) == check2.substr(1,1) || check2.substr(1,1) == check2.substr(2,1) || check2.substr(2,1) == check2.substr(0,1) && vowels <2)){
        Element = "Fire";
        cout<<endl<<"Element : Fire";

    }
    else{
        Element = "Air";
        cout<<endl<<"Element : Air";
    }
    c1 = check3.substr(0,1);
    c2 = check3.substr(1,1);
    c3 = check3.substr(2,1);
    if((c1 == c2 && c2 != c3) || (c2 == c3 && c3 != c1) || (c3==c1 && c1 !=c2)){
        cout<<endl<<"Impact : Harmful";
    }
    else if(c1 == c2 && c2 == c3){
        cout<<endl<<"Impact : Beneficial";
    }
    else{
        cout<<endl<<"Impact : Nuetral";
    }


    if (check4.substr(0,1)< check4.substr(1,1) && check4.substr(1,1)< check4.substr(2,1)){
        cout<<endl<<"Stabality : Stable";
    }
    else  if (check4.substr(0,1)> check4.substr(1,1) && check4.substr(1,1)> check4.substr(2,1)){
        cout<<endl<<"Stabality : Volatile";
    }
    else{
        cout<<endl<<"Stabality : Unpredictable";
    }
    if ((Nature == "Liquid" && Element == "Fire")|| (Nature == "Solid" && Element == "Air") || (Nature == "Gaseous" && Element == "Earth")){
        cout<<endl<<"Mastery : Novice";
    }
    else if ((Nature == "Liquid" && Element == "Water")|| (Nature == "Gaseous" && Element == "Air"|| (Nature == "Solid" && Element == "Earth"))){
        cout<<endl<<"Mastery : Expert";
    }
    else{
        cout<<endl<<"Mastery : Intermediate";
    }

    


    

    return 0;
}