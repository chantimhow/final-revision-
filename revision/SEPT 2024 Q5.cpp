//#include <iostream>
//#include <string>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//
//
//struct livingcost {
//	string foodtype;
//	double amount;
//	float price;
//};
//void writefoodinfo(livingcost food[], int& nofood);
//void computefoodamount(livingcost food[], int nofood);
//
//int main() {
//	livingcost livingcosts[12];
//	int nofood = 0;
//	writefoodinfo(livingcosts, nofood);
//	computefoodamount(livingcosts, nofood);
//	
//
//}
//void writefoodinfo(livingcost food[], int& nofood) {
//	char cont;
//	ofstream outfile;
//	do {
//		cout << "enter food: ";
//		getline(cin, food[nofood].foodtype);
//		cout << "enter calorie: ";
//		cin >> food[nofood].amount;
//		cout << "enter price: ";
//		cin >> food[nofood].price;
//		cout << "do you want to continue? (y/n)";
//		++nofood;
//		cin >> cont;
//		cin.ignore();
//
//	} while (cont == 'y');
//	outfile.open("foodinfo.txt", ios::app);
//	if (outfile.is_open()) {
//		for (int i = 0; i < nofood;i++) {
//			outfile << food[i].foodtype << endl;
//			outfile << showpoint << setprecision(2) << fixed << food[i].amount << endl;
//			outfile << showpoint << setprecision(2) << fixed << food[i].price << endl;
//		}
//	}
//}
//
//void computefoodamount(livingcost food[], int nofood) {
//	double totalprice = 0;
//	int width = 80; 
//	cout << setw(width - 1) << setfill('-') << '-' << endl;
//	cout << setw(40 - strlen("Food Type")) << left << setfill(' ') << "Food Type" ;
//	cout << setw(20 - strlen("|amount (kg)|")) << "|amount (kg)|";
//	cout << setw(20 - strlen("Price RM")) << right << setfill(' ') << "Price(RM)" << endl;
//	cout << setw(width - 1) << setfill('-') << '-';
//	for (int i = 0; i < nofood; i++) {
//		cout << endl;
//		cout << setw(40 - food[i].foodtype.length()) << left << setfill(' ') << food[i].foodtype;
//		cout << setw(20 - 5) << left << setfill(' ') << showpoint << setprecision(2) << fixed << food[i].amount;
//		cout << setw(20 - 5) << right << setfill(' ') << showpoint << setprecision(2) << fixed <<  food[i].price;
//		totalprice += food[i].price;
//	}
//	cout << endl << setw(width - 1) << setfill('-') << '-';
//	cout << setw(60 - strlen("Daily Total")) << setfill(' ') << right << "Daily Total|";
//	cout << setw(20 - 3) << setfill(' ') << right << showpoint << fixed << setprecision(2) << totalprice;
//	cout << endl << setw(width - 1) << setfill('-') << '-';
//	cout << setw(60 - strlen("Monthly Total")) << setfill(' ') << right << "Monthly Total|";
//	cout << setw(20 - 5) << setfill(' ') << right << showpoint << fixed << setprecision(2) << totalprice*30;
//
//
//
//
//	
//
//}