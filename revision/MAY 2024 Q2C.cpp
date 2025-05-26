//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	double totalprice = 0;
//	double weight;
//	char countrysel, duriansel;
//	char cont;
//
//	cout << "Welcome to JKJS Durian Store!" << endl;
//	cout << "(1) Malaysia" << endl;
//	cout << "(A) Musang King (B) Black Thorn (C) Red Prawn" << endl;
//	cout << "(2) Thailand" << endl;
//	cout << "(A) Mon Tong (B) Chanee (C) Pala-U" << endl;
//	cout << endl;
//	do {
//		cout << "please choose a country (1 or 2): ";
//		cin >> countrysel;
//		cout << "please choose a durian type ( A or B or C): ";
//		cin >> duriansel;
//		if (countrysel != '1' && countrysel != '2' && countrysel != '3') {
//			cout << "please select (1 or 2) only!" << endl;
//		}
//		else if (toupper(duriansel) != 'A' && toupper(duriansel) != 'B' && toupper(duriansel) != 'C') {
//			cout << "please select (A or B or C) only!" << endl;
//		}
//		else {
//			cout << "please key in weight (KG): ";
//			cin >> weight;
//			switch (countrysel) {
//			case '1':
//				switch (duriansel) {
//				case 'A':
//					totalprice += 40 * weight;
//					break;
//				case 'B':
//					totalprice += 100 * weight;
//					break;
//				case 'C':
//					totalprice += 30 * weight;
//					break;
//				}
//				break;
//			case '2':
//				switch (duriansel) {
//				case 'A':
//					totalprice += 22 * weight;
//					break;
//				case 'B':
//					totalprice += 16 * weight;
//					break;
//				case 'C':
//					totalprice += 39 * weight;
//					break;
//				}
//				break;
//
//			}
//		}
//		cout << "continue to select? (Y - yes, N - no): ";
//		cin >> cont;
//	} while (tolower(cont) == 'y');
//	cout << endl <<  "total price of durian: RM" << showpoint << setprecision(2) << fixed << totalprice;
//}