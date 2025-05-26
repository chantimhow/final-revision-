//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <string>
//using namespace std;
//#define no 5;
//int bestselling(string name[], double totalGross[]);
//void printList(string name[], string date[], double totalgross[]);
//void sortmovie(string name[], string date[], double totalgross[]);
//
//
//int main() {
//	string movies[] = { "Past Lives","Guardian of the Galaxy Vol.3","John Wick: Chapter 4","Godzilla Minus One","Oppenheimer" };
//	string releasedate[] = { "23/6/2023","5/5/2023","24/3/2023","1/12/2023","21/7/2023" };
//	double grossM[] = { 20.6,845.6,440.1,64.1,951.5 };
//	
//	cout << "Best selling movie in 2023 is " << movies[bestselling(movies, grossM)];
//	sortmovie(movies,releasedate,grossM);
//	printList(movies, releasedate, grossM);
//
//}
//
//int bestselling(string name[], double totalGross[]) {
//	int index = 0;
//	double highestgross = 0;
//	for (int i = 0; i < 5; i++) {
//		if (highestgross < totalGross[i]) {
//			highestgross = totalGross[i];
//			index = i;
//		}
//	}
//	return index;
//}
//
//void sortmovie(string name[], string date[], double totalgross[]) {
//	double tempgross;
//	string tempdate, tempname;
//	for (int i = 0; i < 4;i++) {
//		for (int j = 0; j < 4 - i; j++) {
//			if (totalgross[j] > totalgross[j + 1]) {
//				tempgross = totalgross[j];
//				totalgross[j] = totalgross[j + 1];
//				totalgross[j + 1] = tempgross;
//
//				tempname = name[j];
//				name[j] = name[j + 1];
//				name[j + 1] = tempname;
//
//				tempdate = date[j];
//				date[j] = date[j + 1];
//				date[j + 1] = tempdate;
//			}
//		}
//	}
//
//}
//
//void printList(string name[], string date[], double totalgross[]) {
//	ofstream outfile;
//	outfile.open("list.txt");
//	if (outfile.is_open()) {
//		outfile << setw(100) << setfill('-') << '-' << endl;
//		outfile << setw(60) << setfill(' ') << left << "Name" << setw(20) << setfill(' ') << left << "Release Date" << setw(20) << setfill(' ') << left << "Total Gross ($)" << endl;
//		outfile << setw(100) << setfill('-') << '-';
//		for (int i = 0; i < 5; i++) {
//			outfile << endl <<  setw(60) << setfill(' ') << left << name[i] << setw(20) << setfill(' ') << left << date[i] << setw(20) << setfill(' ') << left << setprecision(1) << fixed << totalgross[i];
//		}
//	}
//}