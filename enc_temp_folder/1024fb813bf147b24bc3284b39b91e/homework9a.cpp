#include <iostream>
#include <string>

using namespace std;

int convertString(string);

int main() {
	string Date;

	cout << "Enter date in the following format: Month Day Year: ";
	cin >> Date;

	int nums = stoi(Date);		//function from string library converts string to int

	cout << nums << endl;

	//return nums;

	//convertString(Date);

	//getDate(nums);



}

int convertString(string Date)
{
	int nums = stoi(Date);		//function from string library converts string to int

	return nums;
}
/*int getDate(int* day, int* month, int* year) {

	if (*month == "January") //can't rename this because it is a constant
	{
		int mnum1 = 01;
	}
	else if (*month == "February");
	{
		int mnum2 = 02;
	}
	else if(month == "March");
	{
		int mnum3 == 03;
	}

	return *day, *month, *year;
}*/

/* OUTPUT


-------------------------------------------
* Homework problem:
1. Get Date

Write a function getDate(int *dptr, int *mptr, int *yptr)  that
prompts the user to enter the date as a string in the form dd-mmm-yyyy (for example, 05-
Apr-2103) and returns these values through iptr, mptr, and yptr.

Test your program using the main program.
__________________________________________
PseudoCode/Questions/Notes
//how do I take a string an convert it to a number? stoi function from string library
//how to I break up a string into three different numbers?  Do I want to break the string into different ints?what happens if I change things into ints
//the month part of the string can be sifted through by using an if else statement then assigning it a number

*/
