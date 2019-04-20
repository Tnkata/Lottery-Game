// Name: Timothy Nkata
// Summary: Exercise 3.4.5 (a+b) This code is meant to display lottery picks.
// The most difficult aspect is working out the variables and what is going to be stored in the arrays.
// It took about 30 minutes to write the code
// 04/15/2019 Rev. A
// 04/18/2019 Rev. B added comments and organized the code
/*
Display Example:
Input the numbers for the lottery
2
Input the numbers for the lottery
4
Input the numbers for the lottery
1
Input the numbers for the lottery
6
Input the numbers for the lottery
8
The lottery picks are:
 1 7 4 0 9
The user picked :
 2 4 1 6 8
0 Matching Element(s)
*/;
#include<iostream>
#include<ctime>
using namespace std;

void generateNumbers(int b[], int a) // Used this variable to generate the lottery picks
{
	for (int i = 0; i < a; i++)
	{
		b[i] = rand() % 10;
	 }
}
void getUser(int user[], int z) // this varible lets the user enter their lucky numbers.
{
	for (int a = 0; a < z; a++)
	{
		cout << "Input the numbers for the lottery\n";
		cin >> user[a];
	}

}
void displayValues(int generate[], int user[], int a) // this variable is used to display the values
{
	cout << "The lottery picks are: \n";
	cout << " " << generate[0];
	cout << " " << generate[1];
	cout << " " << generate[2];
	cout << " " << generate[3];
	cout << " " << generate[4] << endl;
	cout << "The user picked :\n";
	cout << " " << user[0];
	cout << " " << user[1];
	cout << " " << user[2];
	cout << " " << user[3];
	cout << " " << user[4] << endl;

}
int findMatches(int b[], int user[], int a) // this variable displays how many numbers matched the lottery
{
	int k = 0;
	for (int i = 0; i < a; i++)
	{
		if (b[i] == user[i])
		{
			k++;
			//cout << k << "Matching Elements\n";
		}
		
	}
	cout << k << " Matching Element(s)\n"; 
	return a;
}


int main()
{
	const int size = 5; // Used to pass down into the array.
	int firstArray[size];// This array contains 5 spaces
	int secondArray[size];// This array contains 5 spaces
	generateNumbers(firstArray, size); // Passes down the variables into the function
	getUser(secondArray, size);// Passes the second array and size variable into the function.
	displayValues(firstArray, secondArray, size);
	findMatches(firstArray, secondArray, size);

	system("pause");
	return 0; 
}
// End of program