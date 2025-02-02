#include <iostream>
using namespace std;
//NAME; STEVENS ORDONEZ PEREZ
//ID: A2NXXXX
//DATE: 2025-02-01
//DESCRIPTION: I'M USING THE KNOWLEDGE OF VARIABLES NOW AND APPLYING THEM BY CREATING A BASIC CHILDRENS QUESTION.
int main()
{
	int NumApples, NumOranges, NumGrapes, TotalOfOranges;
	NumApples = 13;
	NumOranges= 10;
	NumGrapes = 2;

	cout << "We have a total of " << NumApples << " Apples!" << endl;
	cout << "If we have " << NumApples << " Apples. Then how much oranges do we have if the total amount of oranges are subtracted from the number of apples?" << endl;
	cout << "Total subtracted amount: " << NumApples - NumOranges << " organges left." << endl;
	cout << "How much oranges were in total? "; cin >> TotalOfOranges;
	if(TotalOfOranges == NumOranges)
	{
	cout << "Correct!" << endl;
	}
	else
	{
	cout << "Unfortunately, you are wrong :(" << endl;
	}
	return 0;
}
