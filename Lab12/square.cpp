/*    Engineer: {user}
Assignment: Lab 12
Date: 4-26-18
Description: This program declares the Square class and uses member functions to 
		find the perimeter and area of the square
1.  constructor
2.  same
3.  methods
4.  destructor
5.  period (.)
6.  default
7.  tilde (~)
8.  inline
9.  each
10. implicitly
*/

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.
class Square
{
private:
    float side;
public:
    Square();
    Square(float side);
    ~Square();
    void setSide(float);
    float findArea();
    float findPerimeter();
};

int main()
{
	Square box;	// box is defined as an object of the Square class
    Square box1(9);
	float size;	// size contains the length of a side of the square

    cout << "Please input the length of the side of the square\n";
    cin >> size;

    box.setSide(size);
    cout << "The area of the square is " << box.findArea() << endl;
    cout << "The perimeter of the square is " << box.findPerimeter() << endl;
	
    cout << "The area of box1 is " << box1.findArea() << endl;
    cout << "The perimeter of box1 is " << box1.findPerimeter() << endl;

	return 0;
}

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

Square::Square(float length)
{
    side = length;
}

Square::Square()
{
    side = 1;
}

Square::~Square()
{

}

void Square::setSide(float length)
{
	side = length;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
	return 4 * side;
}