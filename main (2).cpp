/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C++ program to demonstrate the
// working of array of lists in C++
#include <bits/stdc++.h>
using namespace std;

// Function to print list elements
// specified at the index, "index"
void print(list<int>& mylist,
		int index)
{
	cout << "The list elements stored at the index " <<
			index << ": \n";

	// Each element of the list is a pair on
	// its own
	for (auto element : mylist)
	{
		// Each element of the list is a pair
		// on its own
		cout << element << '\n';
	}
	cout << '\n';
}

// Function to iterate over all the array
void print(list<int>* myContainer, int n)
{
	cout << "myContainer elements:\n\n";

	// Iterating over myContainer elements
	// Each element is a list on its own
	for (int i = 0; i < n; i++)
	{
		print(myContainer[i], i);
	}
}

// Driver code
int main()
{
	// Declaring an array of lists
	// In list each element is of type int
	list<int> myContainer[3];

	// listing values to the list stored
	// at the index 0
	// 15 <-> 5 <-> 10 <-> 20
	myContainer[0].push_front(5);
	myContainer[0].push_back(10);
	myContainer[0].push_front(15);
	myContainer[0].push_back(20);

	// listing values to the list stored
	// at the index 1
	// 40 <-> 30 <-> 35 <-> 45
	myContainer[1].push_front(30);
	myContainer[1].push_back(35);
	myContainer[1].push_front(40);
	myContainer[1].push_back(45);

	// listing values to the list stored
	// at the index 2
	// 60 <-> 50 <-> 55 <-> 65
	myContainer[2].push_front(50);
	myContainer[2].push_back(55);
	myContainer[2].push_front(60);
	myContainer[2].push_back(65);

	// Calling print function to iterate
	// over myContainer elements
	print(myContainer, 3);

	return 0;
}
