#include <iostream>

using namespace std;

int main()
{
	// std::cout << "Hello World" << std::endl;
	
	const double smallRoomFee = 25.0;
	const double largeRoomFee = 35.0;
	const double taxRate = 0.06;
	const string estimateValid = "This estimate is valid for 30 days.";
	
	int largeRooms = 0;
	int smallRooms = 0;
	
	cout << "How many large rooms: ";
	cin >> largeRooms;
	cout << endl;
	cout << "How many small rooms: ";
	cin >> smallRooms;
	cout << endl;
	
	double largeRoomTotal = largeRooms * largeRoomFee;
	double smallRoomTotal = smallRooms * smallRoomFee;
	double cost = smallRoomTotal + largeRoomTotal;
	double tax = cost * taxRate;
	double totalEstimate = tax + cost;
	
	cout << "Estimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << smallRooms << endl;
	cout << "Number of large rooms: " << largeRooms << endl;
	cout << "Price per small room: $" << smallRoomFee << endl;
	cout << "Price per large room: $" << largeRoomFee << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "===========================================" << endl;
	cout << "Total estimate: $" << totalEstimate << endl;
	cout << estimateValid << endl;
	
	return 0;
}