#include <iostream>
#include <string>
using namespace std;
string str;
void reverseString(char* start, char* end){
    int temp=0;
    if(((start+1) == end)|| end<start){
        temp = *(start);
        *(start) = *(end);
        *(end) = *(start);
    }
    else{
        reverseString(start+1,end-1);
    }
}
bool ispalindrome(char* start, char* end){
    if (*start != * end){
        return false;
    }
    else{
        ispalindrome(start+1,end-1);
        return true;
    }
    }

int main(){
    
    
    do{
        cout<<endl<<"Enter a string ";
        getline(cin,str);
        
    
    }while (str.length() == 0);
    int length = str.length();
    char* p1 = &str[0];
    char* p2 = &str[length];
    reverseString(p1,p2);
    cout<<endl<<"Reversed string "<<str;
    if (ispalindrome(p1,p2) == true) { cout<<endl<<"This string is a palindrome";}
    else{cout<<endl<<"Not a palindrome";}
    return 0;
}