#include <iostream>
using namespace std;
//NAME; STEVENS ORDONEZ PEREZ
//ID; A2NXXXX
//DATE; 2025-02-02
//DESCRIPTION; LEARNING FROM NOTES. THIS IS AN AMBIGUITY ERROR. IT MEANS THAT IF THERE IS TWO VARIABLES WITH THE SAME NAME THEN IT WOULDN'T WORK.


namespace A
{
	int value = 10;
}

namespace B
{
	int value = 20;
}

namespace brendan
{

	double colin = 1831837; 

}

//using namespace A;
//using namespace B;
//using namespace brendan;
int main()
{
	int colin = 10;
	int value = 20;
	cout << value << endl;
	cout << colin << endl;
	cout << brendan::colin << endl;
}
