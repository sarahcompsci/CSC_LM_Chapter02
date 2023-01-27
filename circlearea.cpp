//This program will output the circumference and area 
//of the circle with a given radius.

//Sarah Bender

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
  float area;  //definition of area of circle
  int circumference;  //definition of circumference
  cout << "The circumference of the circle is " << 2 * PI * RADIUS << endl;  //computes circumference
  cout << "The area of the circle is " << PI * RADIUS * RADIUS << endl;  //computes area

  return 0;
}

//Change the data of circumference from float to int. Run the program and record the results. Explain what happened to get the results.
//The circumference of the circle is 33.912
//The area of the circle is 91.5624
//The result was most likely the same as before because the computer recognized that the output of the program could not be a whole integer in this case.
