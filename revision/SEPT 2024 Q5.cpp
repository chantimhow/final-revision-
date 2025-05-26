#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


struct livingcost {
	string foodtype;
	double amount;
	float price;
};
void writefoodinfo(livingcost food[], int& nofood);

int main() {
	livingcost livingcosts[12];
	int nofood = 0;
	writefoodinfo(livingcosts, nofood);
	

}
void writefoodinfo(livingcost food[], int& nofood) {
	char cont;
	ofstream outfile;
	do {
		cout << "enter food: ";
		getline(cin, food[nofood].foodtype);
		cout << "enter calorie: ";
		cin >> food[nofood].amount;
		cout << "enter price: ";
		cin >> food[nofood].price;
		cout << "do you want to continue? (y/n)";
		++nofood;
		cin >> cont;
		cin.ignore();

	} while (cont == 'y');
	outfile.open("foodinfo.txt", ios::app);
	if (outfile.is_open()) {
		for (int i = 0; i < nofood;i++) {
			outfile << food[i].foodtype << endl;
			outfile << showpoint << setprecision(2) << fixed << food[i].amount << endl;
			outfile << showpoint << setprecision(2) << fixed << food[i].price << endl;
		}
	}
}

void computefoodamount(livingcost food[], int nofood) {
	int width = 80; 
	cout << setw(width - 1) << setfill('-') << '-';
	cout << setw(40 - strlen("Food Type")) << left << "Food Type" << setfill(' ');
	cout << setw(20 - strlen("|amount (kg)|")) << "|amount (kg)|";
	cout << setw(20-strlen("Price RM"))

}