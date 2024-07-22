#include <iostream>
using namespace std;

int totalSecretIngredient;

void UpdatePattyCount(int numPatty , int &TotalPatty){
    TotalPatty = TotalPatty + numPatty;
}

void UpdateIngredientCount (int countSecretIngredient){
    totalSecretIngredient = totalSecretIngredient + countSecretIngredient;
}

int main(){
    int num =0;
    int numPatty = 0;
    int secret = 0;
    int TotalPatty= 0;
    cout<<"SpongeBob, How many orders do you need to process today? ";
    cin>>num;
    for (int i =0 ; i<num; i++){
        cout<<endl<<"Order "<<i+1<<" How Many Patties? ";
        cin>>numPatty;
        cout<<endl<<"Order "<<i+1<<" How Much Secret Ingredient? ";
        cin>>secret;
        UpdateIngredientCount(secret);
        UpdatePattyCount(numPatty,TotalPatty);
    }
    cout<<endl<<"SpongeBob, you need to cook a total of "<<TotalPatty<<" patties today.";
    cout<<endl<<"Also, you used a total of "<<totalSecretIngredient<<" units of the secret ingredient.";

    return 0;
}