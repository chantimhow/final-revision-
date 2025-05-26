#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	string date = "11/2/2024";
	string date1 = "4/10/2025";
	//int date = 1;
	//int date1 = 2;

	if (date > date1) {
		cout << "date is bigger than date1";
	}
	else if (date1 > date){
		cout << "date1 is bigger than date";
	}
}