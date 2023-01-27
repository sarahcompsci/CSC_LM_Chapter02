//This program will output the area and perimeter 
//of a rectangle with a given length and width. 

//Sarah Bender

#include <iostream>
using namespace std;

const int length = 8;
const int width = 3;

int main()
{
  int area;
  int perimeter; 
  cout << "The area of the rectangle is " << length * width << endl;
  cout << "The perimeter of the retangle is " << length + length + width + width << endl;

  return 0;
}
