#include <iostream>
#include <string>
using namespace std;
int main(){
   int pak = 0;
   int india = 0;
   int day = 0;
   int pcount = 0;
   int icount = 0;
   string win;
   while(pak<20 && india <20){
    day ++;
    cout<<endl<<"Who won the match? Enter P for Pakistan and I for India : ";
    cin>> win;
    cout<<endl;
    if (win == "P" || win == "I"){
        if (win =="P"){
            pak = pak +day;
            pcount ++;
            icount = 0;
        }
        else{
            india = india + day;
            icount ++;
            pcount = 0;
        }
        if(pcount==3){
            pak = pak +5;
        }
        else if(icount ==3){
            india = india +5;
        }
        cout<<"Pakistan "<<pak<<"-"<<india<<" India";
        cout<<endl;

    }
    else{
        day--;
        continue;
    }


   }
   if(pak>india){
    cout<<endl<<"Pakistan won the Jinnah-Ghandhi Trophy!!";
   }
   else{
    cout<<endl<<"India won the Jinnah-Ghandhi Trophy!!";
   }
   return 0;
} 