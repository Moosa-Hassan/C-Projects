#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <conio.h>
//#include <gtk/gtk.h>
//#include <unistd.h>
#include <Windows.h>
#include <stdlib.h>
using namespace std;


string Categories[12] = {"Ones","Twos","Threes","Fours","Fives","Sixes","Four of a Kind","Full House","Little Straight","Big Straignt","Choice","Yacht"};


bool Usercheck(const string &username) // function to check if usernane exists
{
	ifstream file("UserDetails.txt");// opening of file in read mode
	string line;// variable to store a line of the file
	while (getline(file, line)) // gets a line of a file
	{
		if (line.find(username) != string::npos) // checks if username is in the line fetched
		{
			file.close();
			return true;// returns true if found else returns false
		}
	}
	file.close();
	return false; 
}

void signUp_func() // function to create a new account
{
	string  username ;
    string password  ;// variables to store username and passwords
    do
    {// loop to have user enter a username which is not in the file
	    cout << "Enter your desired username: ";
	    cin >> username;

	    if (Usercheck(username)) 
	    {
		cout << "Username taken, try something else."<<endl;
	    }
    }while(Usercheck(username)==true);

	cout << "Enter your password: ";
	//cin >> password;
    char ch;  // variable to store a character
    ch = _getch(); // function which gets a character from cin
    while(ch != 13)//ascii of 'enter'/ loop runs until enter is pressed
    {
      password.push_back(ch);// appends the character entered in password
      cout << '*';// prints * to maintain secracy of passwoerd
      ch = _getch();
    }
	ofstream file("UserDetails.txt", ios::app);// opens file in write mode
	file << username << " " << password << endl;// write to the file
	file.close();
    cout<<endl<<"Signing you up";
    for(int i=0;i<3;i++)
    {
        Sleep(700);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
        cout<<".";
    }
    cout<<endl<<endl;
    cout<<"Connecting to our servers";
    for(int i=0;i<3;i++)
    {
        Sleep(700);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
        cout<<".";
    }
    cout<<endl<<"It might take a while ";
    for(int i=0;i<3;i++)
    {
         cout<<"|";
         Sleep(580);
         cout<<"\b";// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution

         cout<<"/";
         Sleep(580);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
         cout<<"\b";

         cout<<"--";
         Sleep(580);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
         cout<<"\b\b";

         cout<<"\\";
         Sleep(580);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
         cout<<"\b";

    }
    cout<<endl;
    
	cout << "Sign up successful!"<<endl;
}

bool LoginCheck(const string& username, const string& password)// function to check if user has entered the correct username and password
{
	ifstream file("UserDetails.txt");// opens file in read mode
	string line;// variable to store a line in file
	while (getline(file, line)) // gets a line from the filr
	{
		if (line.find(username + " " + password) != string::npos) // checks if username and password in file
		{
			file.close();
			return true;// returns true if not in file else returns false
		}
	}
	file.close();
	return false;
}
bool UsernameCheck(const string& username , int &error_code)// function to see if anusername already exists
{
	ifstream file("UserDetails.txt");// opens file in read mode
	string line;// variable to store an line n file
	while (getline(file, line)) // gets a line from the file
	{
		if (line.find(username ) != string::npos)// checks if username in file
		{
           
			file.close();
			return true;// return s true if not in file else returns false
		}
	}
	file.close();
    cout<<"It appears this username does not exist. Do you want to create an new account?(Press Y for Yes, N for No)";
    string choice ;// variable to see store the choice of above uestion
    cin>>choice;
    error_code = 2; // repsents the situaction in which a new username is made which already exists
    if ( choice == "Y" || choice == "y"){
        signUp_func();// if user wants to create a new uswername it takes them to sugh up function else returns false
    }
    else if (choice != "Y" || choice != "y")
	return false;
}
void password_check(string &username, int &error_code) // gives multiple tries to user to enter password
{
	string  password ="";
    int tries = 3;// Total tries are 4. 3 here as three chances left after first wrong password

	do{// loop to give three tries
	cout << "Enter your password: ";
	//cin >> password;
    char ch;
    ch = _getch();
    while(ch != 13)
   {//character 13 is enter
      password.push_back(ch);// same loop as that in making password in sign up funcion
      cout << '*';// makes an password encrypted to user
      ch = _getch();
   }
    cout<<endl;
	if (LoginCheck(username, password)) 
	{
		cout << "Login was successful!"<<endl;//ends function if correct password entered
        return;
	}
	else
	{   
        tries -= 1;
		cout << "You Have "<<tries<<" left." << endl;// shows the number of tries left
	}
    }while(tries>0);

    if (tries ==0 )
    {
        cout<<"Too many wrong passwords entered. Exiting the game"<<endl;
    }
    error_code = 1;// error to repsent that wron password wa entered
}

void login_func(int &error_code) // function to login into account
{
	string  username ;
    string password ;
    
    cout<<"Welcome !"<<endl;
    Sleep(750);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
	cout << "Enter your username: ";
	cin >> username;
    UsernameCheck(username,error_code);// checks if username exists 
    if (error_code == 2){  return;}// done in the case a user does't want to create an new account

	cout << "Enter your password: ";

    char ch;
    ch = _getch();
    while(ch != 13)
   {//character 13 is enter // same loop as in sign up function
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }
	if (LoginCheck(username, password)) // checks if a user has sucessfully logged in
	{
        cout<<endl<<"Restoring Progress";
        for(int i=0;i<3;i++)
        {
            Sleep(700);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
            cout<<".";
        }
        cout<<endl;
		cout << "Login was successful!"<<endl;
	}
	else
	{   
		cout <<endl<< "Invalid Password. Please try again." << endl;// execcuted i case password is entered incorectly
        password_check(username,error_code);
       
	}
}


void roll_dice(int Dice[], int size)
{ // Function to Generate 5 random rolls
    srand(time(0)); // to change randon number else it will give same number
    cout<<endl<<"Rolling your dice";
    for(int i=0;i<3;i++)
    {
        Sleep(700);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
        cout<<".";
    }
    cout<<endl;
    
    for (int i = 0 ; i<size ; i++)
    {
        Dice[i] = (rand()%6)+1; // function to get a random number between 1 and 6
        
    }
}

void print_dice( int Dice[], int size)
{ // Function to print the contents of array / the dice rolled
    cout<<endl<<"Your rolls are ";
    for (int i = 0 ; i<size ; i++)
    {
        for(int i=0;i<3;i++)
        {
            Sleep(600);// function which produces a time delay in execution of function. Its argumet is the number of mimiseconds to delay the execution
            cout<<".";
        }
        cout<<"\b\b\b";
        cout<<Dice[i]<<" ";
    }
    cout<<endl;
    Sleep(600);
}

int count(int Dice[], int size, int number)
{ // fundtion to count the number of times an number is rolled
    int count = 0;
    for (int i = 0 ; i<size ; i++){
        if (Dice[i] == number){
            count ++;
        }
    }
    return count;
}    

void swap(int Dice[] , int size , int num1, int num2)
{ // function to swap two values in an array
    int temp = Dice[num1];
    Dice[num1] = Dice[num2];
    Dice[num2] = temp;
}

void sort_roll(int Dice[],int size)
{ // funvtion to sort the rolls in ascending order used in little and big straight category
    for (int i = 0; i<size ; i++){
        int smallest = i;
        for (int j = i; j <size ; j++ ){
            if (Dice[smallest] > Dice[j]){smallest = j;}
        }
        swap(Dice,size,i,smallest);
    }
}

int nums(int Dice[], int size , int number){ // general function for categories ones to sixes 
    return (number * count(Dice,size,number));// returns the product of number for which category is chosen and its count in the rools
}

    


int yacht(int Dice[], int size){ // function for yacth category all dice rools have to be same
    if (Dice[0] == Dice[1] && Dice[0] == Dice[2] && Dice[0] == Dice[3] && Dice[0] == Dice[4]){// checks to see if all rolls same
        return 50;
    }
    return 0 ;
}

int choice ( int Dice[] ,int size)
{ // function for choice category return the sum of the dice
    return Dice[0] + Dice[1] + Dice[2] + Dice[3] + Dice[4];
}
int little_straight(int Dice[], int size)
{ // function for little straight category returns 30 if it contains 1,2,3,4,5
    sort_roll(Dice,size);
    if (Dice[0] == 1 && Dice[1] == 2 && Dice[2] == 3 && Dice[3] == 4 && Dice[4] == 5){
        return 30;
    }
    return 0;
}

int big_straight(int Dice[], int size)
{ // function for big straight category returns 30 if ir contains 2,3,4,5,6
    sort_roll(Dice,size);
    if (Dice[0] == 2 && Dice[1] == 3 && Dice[2] == 4 && Dice[3] == 5 && Dice[4] == 6){
        return 30;
    }
    return 0;
}

int four_of_a_kind(int Dice[], int size)
{ // function for four of a kind category returns 4 times a number if it is rolled more than 3 times
    for (int i = 1; i<7 ; i++){
        if (count(Dice,size,i)>=4){ // if count is >= 4 then score is returned
            return i * 4;
        }
    }
    return 0;
}

int full_house(int Dice[], int size)
{ // function for the full house category return ssum of dice if the dice rolled 2 numbers (one two times and thw other three times)
    int num1 = 0; // stores the first number
    int count1 = 0; // counts the occurnce of first number
    int num2 = 0; // stores the second number
    int count2 = 0; // stores the occurance of seconf number
    for (int i = 1; i<7 ; i++){ // loop to find first number and its count
        if (count(Dice,size,i)==3 || count(Dice,size,i)==2){ // starts from 1 till 6
            num1 = i;
            count1 = count(Dice,size,i);
            break;
        }
    }
    if (num1 != 0)// sees if  a number  was repeated  2 or 3 times
    {
        for (int i = num1+1; i<7 ; i++)
        { // loop to find second number and its count
         if (count(Dice,size,i)==3 || count(Dice,size,i)==2)
         { // starts from the first number +1
            num2 = i;
            count2 = count(Dice,size,i);
            break;
         }
        }
    }
    else{return 0;}
    if (count1+count2 == 5){ // condition to see if condition of category met
        return choice(Dice,size);
    }
    return 0;

}

void choose_category(int Dice[],int size , int &score)
{ // function to choose category and call chosen category
    cout<<endl<<"Choose a category lisetd below"<<endl<<endl;
    int category =0;
    
    cout<<"Remenber to choose the corresponding number"<<endl<<endl;
    
    cout<<"Hint: choose one which would give you maximun score"<<endl<<endl;
    
    do{
       cout<<"Ones (1), Twos (2), Threes (3) "<<endl;
       cout<<"Fours (4), Fives (5), Sixes (6) "<<endl;
       cout<<"Four of a kind (7), Full House (8)"<<endl; 
       cout<<"Little Straight (9), Big Straight (10)"<<endl;
       cout<<"Choice (11), Yacht(12) "<<endl;
       cout<<endl<<"Your chosen number = ";
       cin>>category; 
       cout<<endl<<"Your category is "<<Categories[category-1]<<endl;
    }while( category < 1 || category>12);
    if (category == 1) {score = nums(Dice,size,1);}
    else if(category == 2 ) 
    {
        score = nums(Dice,size,2);
    } // conditional to call correct category
    else if(category == 3) 
    {
        score = nums(Dice,size,3);
    }
    else if(category ==  4 ) 
    {
        score = nums(Dice,size,4);
    }
    else if(category == 5 ) 
    {
        score = nums(Dice,size,5);
    }
    else if(category == 6 ) 
    {
        score = nums(Dice,size,6);
    }
    else if(category == 8) 
    {
        score = full_house(Dice,size);
    }
    else if(category == 7 ) 
    {
        score = four_of_a_kind(Dice,size);
    }
    else if(category == 9 ) 
    {
        score = little_straight(Dice,size);
    }
    else if(category == 10 ) 
    {
        score = big_straight(Dice,size);
    }
    else if(category == 11 ) 
    {
        score = choice(Dice,size);
    }
    else if(category == 12 ) 
    {
        score = yacht(Dice,size);
    }
    return;

}


int main()
{  do {
    int total_score = 0;// stores the total score of all games
    const int size = 5; // settin the size of array to 5 as this is number of throws
    int Dice[size] ; // Declaring an array of size 5 to be the dice roll
    int score = 0;// stores the score of each game
    int exit = 0; // stores int to see if player wants to end game
    int error = 0;// ( 0  is no error, 1 is wrong password, 2 is usrname taken)
    cout<<endl<<"Welcome to Yacht!!! Are you ready to play?"<<endl;
    int input;// variable to see if a person wants to log in sign up or quit
    do{
    
	cout << "For Login enter 1" << endl<<"For Signup enter 2" <<endl<<"To Exit enter 3"<<endl;
    
	cin >> input;
	if (input==1)
	{
		login_func(error);       
		 
	}

	else if (input==2)
	{
		signUp_func();
	}
    else if(input == 3)
    {
        cout<<"Exiting...";
        return 0;
    }
    
    if (error == 1)
    {
        return 0;
    }
    }while(input !=1 && input != 2 && cin.fail() == false);
    do{// do while event controlled loop to run the game as many times as user wants 
    cout<<endl<<endl<<"To play press any number except 0 "<<endl;
    cout<<endl<<"To end game press 0"<<endl;
    cin>>exit;
    if(exit ==0){break;}// cin.fail returns true if an alphabet is entered hence it is used to termnate loop
    roll_dice(Dice,size); // to generate dice rolls
    print_dice(Dice,size); // prints the dice rolled
    choose_category(Dice,size,score); // function to determine category to play
    if (score==0)// checks to see if a user scored in a game and prints appropiate messge
    {
        cout<<endl<<"Hmm, Better luck next time"<<endl;
    }
    else
    {
        cout<<endl<<"Yay! You won!!!"<<endl;
    }
    cout<<endl<<"You scored : "<<score<<endl; 
    total_score += score; // updates the total score
    cout<<endl<<"The total Score is "<<total_score;
    
    }while(true);
    cout<<endl<<"Your total score for the game is "<<total_score<<endl;
    cout<<endl<<"Thanks for playing!!!"; // final message for user to see when they exit game
}while(true);
    
    return 0;

}