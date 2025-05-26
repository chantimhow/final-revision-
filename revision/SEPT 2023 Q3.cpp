//#include <iostream>
//#include <iomanip>
//#include <fstream>
//using namespace std;
//void top3dramas(string drama_name[], double rating[]);
//void ratingless15(string drama_name[], double rating[]);
//
//
//int main() {
//	string drama[6] = { "The Gloria","The Bom Bang Theory","Love Between Fairies Only", "Why Wednesday","Identity Gap Theories","Copy Cat Killers" };
//	double rating[6] = { 17.5,8.8,12.0,22.4,10.8,5.8 };
//	ratingless15(drama, rating);
//	top3dramas(drama, rating);
//
//}
//void ratingless15(string drama_name[], double rating[]) {
//	int dramacount = 0;
//	cout << "Drama(s) with not over 15 million viewers" << endl;
//	for (int i = 0 ; i < 6; i++) {
//		if (rating[i] < 15) {
//			cout << ++dramacount << ". " << drama_name[i] << endl;
//		}
//	}
//}
//
//void top3dramas(string drama_name[], double rating[]) {
//	ofstream outfile;
//	outfile.open("Rating.txt");
//	int dramanumber = 0;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5 - i;j++) {
//			if (rating[j] < rating[j + 1]) {
//				swap(rating[j], rating[j + 1]);
//				drama_name[j].swap(drama_name[j + 1]);
//
//			}
//		}
//	}
//	if (outfile.is_open()) {
//		outfile << "Top 3 Rating Dramas" << endl;
//		for (int i = 0; i < 3; i++) {
//			outfile << ++dramanumber << ". " << drama_name[i];
//
//		}
//	}
//	else cout << "file is not open";
//}