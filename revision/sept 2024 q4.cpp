//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//struct tumbLers {
//	char type[100];
//	int  sales;
//};
//void writeTumbLerDetails(tumbLers tumbler[], int& notumbler);
//void bestsale(tumbLers tumble[], int noTumbler);
//void selectTumbler(tumbLers tumbler[], int noTumbler);
//
//int main() {
//	int notumbler = 0;
//	tumbLers tumbLer[20];
//	string tumblertype;
//	writeTumbLerDetails(tumbLer, notumbler);
//	bestsale(tumbLer, notumbler);
//	selectTumbler(tumbLer, notumbler);
//	system("pause");
//}
//void writeTumbLerDetails(tumbLers tumbLer[], int& noTumbler) {
//	char cont;
//	ofstream outfile;
//
//	do {
//		cin.getline(tumbLer[noTumbler].type, 100);
//		cin >> tumbLer[noTumbler].sales;
//		++noTumbler;
//		cout << "do you want to continue? (y/n)" << endl;
//		cin >> cont;
//		cin.ignore();
//		
//
//	} while (tolower(cont) == 'y');
//
//	outfile.open("tumblerDetails.txt",ios::app);
//	if (outfile.is_open()) {
//		for (int i = 0; i < noTumbler; i++) {
//	
//			outfile << tumbLer[i].type << endl;
//			outfile << tumbLer[i].sales << endl;
//		}
//	}
//	else cout << "file is not open";
//	outfile.close();
//
//	
//}
//
//void bestsale(tumbLers tumble[], int noTumbler) {
//	int topsales = 0;
//	int topsalesi = 0;
//	for (int i = 0; i < noTumbler; i++) {
//		if (tumble[i].sales > topsales) {
//			topsales = tumble[i].sales;
//			topsalesi = i;
//		}
//	}
//	cout << "the best sale in the list is " << tumble[topsalesi].type << " with sale of " << tumble[topsalesi].sales << endl;
//}
//void selectTumbler(tumbLers tumbler[], int noTumbler) {
//	string tumblerselect;
//	bool found = false;
//	cout << "please key in the type of tumbler:" << endl;
//	getline(cin, tumblerselect);
//
//	for (int i = 0; i < noTumbler;i++) {
//		if (tumblerselect == tumbler[i].type) {
//			cout << "the annual sale of " << tumbler[i].type << " is $" << tumbler[i].sales;
//			found = true;
//			break;
//			
//		}
//	}
//	if (!found) cout << "not available!";
//
//}