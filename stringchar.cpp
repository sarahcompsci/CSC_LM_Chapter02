//This program demonstrate the use of characters and strings

//Sarah Bender

#include <iostream>
#include <string>
using namespace std;

//Definition of constants
const string FAVORITESODA ="Dr. Dolittle";  //use double quotes for strings
const char BESTRATING = 'A';  //use single quotes for characters

int main()
{
  char rating = 'B';  //second highest product rating
  string favoriteSnack = "crackers";  //most preferred snack
  int numberOfPeople = 250;  //the number of people in the survey
  int topChoiceTotal = 148;  //the number of people who prefer the top choice

  cout << "The preferred soda is " << FAVORITESODA << endl;
  cout << "The preferred snack is " << favoriteSnack << endl;
  cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
  cout << "Each of our products were given a rating of " << BESTRATING << endl;
  cout << " from our expert tasters" << endl;
  cout << "The other products were rated no higher than a " << rating << endl;

  return 0;
}

//Is it possible to change the choice of FAVORITESODA by adding code within the main module of the program? Why or why not?
//It is not possible to change the choice of FAVORITESODA by adding code within the main module of the program. This is because FAVORITESODA is a constant and not a variable, meaning the value cannot change from what it is set to initially. 

//Is it possible to change the choice of favoriteSnack by adding code within the program? Why or why not? 
//It is possible to change the choice of favoriteSnack by adding code within the program. This is because any assignment statement which isn't marked as a constant is a variable. Variables are able to be changed as many times as the programmer wants throughout the program.
