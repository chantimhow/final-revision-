//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//int main() {
//	double monthlyplan[] = { 1.99,2.99,9.99,49.99,99.99,149.99 };
//	double yearlyplan[] = { 1.67,2.50,8.33 };
//	int userplan;
//	string userstorage;
//	double totalprice;
//
//	cout << "please choose cloud storage of Google Drive Plan that you would like to purchase: " << endl;
//	cout << "1.1-Monthly Plan" << endl;
//	cout << "2.1-Year Plan" << endl;
//	cin >> userplan;
//	cout << "please key in storage size (15GB, 100GB, 200GB, 2TB, 10TB, 20TB, 30TB:" << endl;;
//	cin >> userstorage;
//	
//
//	switch (userplan) {
//	case 1: {
//		if (userstorage == "15GB") {
//			totalprice = 0;
//		}
//		else if (userstorage == "100GB") {
//			totalprice = monthlyplan[0];
//		}
//		else if (userstorage == "200GB") {
//			totalprice = monthlyplan[1];
//		}
//		else if (userstorage == "2TB") {
//			totalprice = monthlyplan[2];
//		}
//		else if (userstorage == "10TB") {
//			totalprice = monthlyplan[3];
//		}
//		else if (userstorage == "20TB") {
//			totalprice = monthlyplan[4];
//		}
//		else if (userstorage == "30TB") {
//			totalprice = monthlyplan[5];
//		}
//		else {
//			cout << "not available";
//			return 0;
//		}
//		break;
//	}
//	case 2: {
//		if (userstorage == "15GB") {
//			totalprice = 0;
//		}
//		else if (userstorage == "100GB") {
//			totalprice = yearlyplan[0];
//		}
//		else if (userstorage == "200GB") {
//			totalprice = yearlyplan[1];
//		}
//		else if (userstorage == "2TB") {
//			totalprice = yearlyplan[2];
//		}
//		else {
//			cout << "not available!";
//			return 0;
//		}
//		break;
//	}
//	}
//	cout << showpoint <<setprecision(2) << fixed <<"Total price for a year is $" << totalprice * 12;
//}
//
//		
//
//
//
//	
//
//
//
//
//	
