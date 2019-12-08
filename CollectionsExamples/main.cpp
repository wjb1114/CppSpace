#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// array of integers, 10 in size, all values set to 0
	int arr [10] {0};
	
	// vector of integers, 10 in size, all set to 0
	// vector is resizeable, array is not
	vector<int> vec (10);
	
	// vector if integers, 5 in size, with values set with braces
	vector<int> vecTwo {0, 1, 2, 3, 4};
	
	cout << vecTwo[0] << endl;
	cout << vecTwo.at(0) << endl;
	
	// add 5 to new vector index, ie index 5, making new  length 6
	vecTwo.push_back(5);
	
	cout << vecTwo[5] << endl;
	return 0;
}