//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <fstream>
//
//using namespace std;
//
////determine the function prototypes that are required by the program
//void average(string title[], double price[], int noBook);
//void arrangeGenre(string title[], string genre[], int noBook);
//int main(){
//	const int noBook = 5;
//	string title[] = { "Snow White", "Becoming", "Pinocchio", "Atomic Habits", "Love Destiny" };
//	string genre[] = { "Fairy Tale","Autobiography","Fairy Tale","Self Help","Romance" };
//	double price[] = { 15.9,66.00,14.90,55.00,30.00 };
//	average(title, price, noBook);
//	arrangeGenre(title, genre, noBook);
//}
//void average(string title[], double price[], int noBook) {
//	double totalprice = 0;
//	int bookcount = 0;
//	for (int i = 0; i < noBook;i++) {
//		totalprice += price[i];
//	}
//
//	double averageprice = totalprice/noBook;
//	cout << showpoint << setprecision(2) << fixed <<"Average price: RM" << round(averageprice) << endl;
//	cout << "Book Title:" << endl;
//	for (int i = 0;i < noBook;i++) {
//		if (price[i] < averageprice) {
//			cout << ++bookcount << '.' << title[i] << endl;
//		}
//		
//	}
//}
//void arrangeGenre(string title[], string genre[], int noBook) {
//	ofstream outfile;
//	int quantity = 0;
//	outfile.open("BookGenre.txt", ios::app);
//	if (outfile.is_open()) {
//		outfile << "<1. Fairy Tale>" << endl;
//
//		for (int i = 0;i < noBook;i++) {
//			if (genre[i] == "Fairy Tale") {
//				outfile << title[i] << endl;
//				quantity++;
//			}
//		}
//		outfile << "Quantity: " << quantity << endl << endl;
//		quantity = 0;
//		outfile << "<2. Autobiography>" << endl;
//
//
//		for (int i = 0;i < noBook;i++) {
//			if (genre[i] == "Autobiography") {
//				outfile << title[i] << endl;
//				quantity++;
//			}
//		}
//		outfile << "Quantity: " << quantity << endl << endl;
//		quantity = 0;
//		outfile << "<3. Self Help>" << endl;
//
//
//		for (int i = 0;i < noBook;i++) {
//			if (genre[i] == "Self Help") {
//				outfile << title[i] << endl;
//				quantity++;
//			}
//		}
//		outfile << "Quantity: " << quantity << endl << endl;
//		quantity = 0;
//		outfile << "<4. Romance>" << endl;
//
//
//		for (int i = 0;i < noBook;i++) {
//			if (genre[i] == "Romance") {
//				outfile << title[i] << endl;
//				quantity++;
//			}
//		}
//		outfile << "Quantity: " << quantity << endl << endl;
//		quantity = 0;
//
//	}
//}
//
