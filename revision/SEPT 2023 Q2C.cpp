//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	double dryprice[2] = { 30,45 };
//	double wetprice[2] = { 8,8 };
//	string drygarment[2] = { "Coat/Jacket","Dress" };
//	string wetgarment[2] = { "Wash and Fold","Wash and Iron" };
//	char cleaning;
//	char garment;
//	double amount;
//	double totalamount = 0;
//	char cont;
//	do {
//		cout << "Dry Cleaning and Laundry Services" << endl;
//		cout << "1.Dry Cleaning" << endl;
//		cout << "2.Wet Cleaning" << endl;
//		cout << "Pick a choice from the list: ";
//		cin >> cleaning;
//
//		switch (cleaning) {
//		case '1':
//			cout << "1. " << drygarment[0] << endl;
//			cout << "2. " << drygarment[1] << endl;
//			cin >> garment;
//			switch (garment) {
//			case '1':
//				cout << "how many pieces?" << endl;
//				cin >> amount;
//				totalamount += amount * dryprice[0];
//				break;
//			case '2':
//				cout << "how many pieces?" << endl;
//				cin >> amount;
//				totalamount += amount * dryprice[1];
//				break;
//			}
//			break;
//		case '2':
//			cout << "1. " << wetgarment[0] << endl;
//			cout << "2. " << wetgarment[1] << endl;
//			cin >> garment;
//			switch (garment) {
//			case '1':
//				cout << "how many kg?" << endl;
//				cin >> amount;
//				totalamount += amount * wetprice[0];
//				break;
//			case '2':
//				cout << "how many pieces?" << endl;
//				cin >> amount;
//				totalamount += amount * wetprice[1];
//				break;
//			}
//			break;
//
//		}
//		cout << "do you wan to continue? (Y-yes  N-no)" << endl;
//		cin >> cont;
//
//	} while (tolower(cont == 'y'));
//	cout << showpoint << setprecision(2) << fixed << "Please pay RM" << totalamount * 106/100;
//}
