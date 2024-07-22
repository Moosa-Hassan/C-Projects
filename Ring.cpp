#include <iostream>
#include<cmath>
using namespace std;
int main(){
   int years,dwarves = 0;
   int men =1;
   int elves = 1;
   cout<<"Enter the number of years since the one ring destruction: ";
   cin>>years;
   dwarves = years * years;
   for (int i = 1; i<=years;i++){
    if (i == 1){
        continue;
    }
    elves = elves *2;
   }
   for (int i = 1; i <= years;i++){
    men = men*i;
   }
   cout<<endl<<"On this Ring Day : ";
   cout<<endl<<"Elves will sing for "<<elves<<" minutes.";
   cout<<endl<<"Dwarves will forge "<<dwarves<<" rings.";
   cout<<endl<<"Men will light a flame of "<<men<<" feet in height.";


    return 0;
} 