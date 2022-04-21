/*Michael Berry
CS - 210: Programming Languages
Southern New Hampshire University
April 15, 2022
*/

#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>

using namespace std;

/*
Description:
	To call this function, simply pass the function name in Python that you wish to call.
Example:
	callProcedure("printsomething");
*/
void CallProcedure(string pName)
{
	char* procname = new char[pName.length() + 1];
	std::strcpy(procname, pName.c_str());

	Py_Initialize();
	PyObject* my_module = PyImport_ImportModule("PythonCode");
	PyErr_Print();
	PyObject* my_function = PyObject_GetAttrString(my_module, procname);
	PyObject* my_result = PyObject_CallObject(my_function, NULL);
	Py_Finalize();

	delete[] procname;
}



void main()
{
	system("Color 05");
	int menuInput;            // Variable for user menu input.
	char quitCmd = 'a';       // Variable to enter and exit while loop.


	while (quitCmd != 'q') {  // While loop to run the menu experience.
		system("Color 05");
		CallProcedure("PrintMenu");     // Prints the menu.
		cout << endl << endl;
		cin >> menuInput;           // Takes in menu selection from user.
		switch (menuInput)        // Handles user menu selections.
		{
		case 1: 
			system("Color 0A");
			CallProcedure("CreateDict"); // Reads input file, creates dictionary of items and purchase
			cout << endl << endl;        // counts and prints them.
			system("pause");     // Pauses program and prompts user to press enter to continue
			cin.clear();          // Clears cin
			cin.ignore(10000, '\n');      // Clears cin buffer
			system("cls");             // Clears screen
			break;

		case 2: 
			system("Color 0A");
			CallProcedure("SingleItem"); // Reads input file, creates dictionary of items and purchase
			cout << endl << endl;        // counts. Prompts user for item name and prints purchase count
			system("pause");             // for the item.
			cin.clear();
			cin.ignore(10000, '\n');
			system("cls");
			break;

		case 3: 
			system("Color 0A");
			CallProcedure("Histogram");  // Reads input file, creates dictionary of items and purchase
			cout << endl << endl;        // counts, and prints them with purchase counts converted to
			system("pause");             // "*".
			cin.clear();
			cin.ignore(10000, '\n');
			system("cls");
			break;

		case 4:                         // To exit program
			system("Color 04");
			cout << endl << endl << "Program exited by user" << endl << endl;
			quitCmd = 'q';
			break;
			                                                    // User input error checking.
		default: cout << endl << endl << "Invalid input." << endl << endl <<
			"Please make a selection 1 - 4." << endl << endl;
			system("pause");
			cin.clear();
			cin.ignore(10000, '\n');
			system("cls");
			break;
		}
	}
}
