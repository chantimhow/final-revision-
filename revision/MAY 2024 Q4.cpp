//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//struct song {
//	string title;
//	string genre;
//	string singer;
//	int yor;
//};
//void reLeased(song songs[], int no);
//void readSong(song songs[], int& no);
//void sortgenre(song songs[], int no);
//
//int main(){
//	int no_of_songs = 0;
//	song songs[10];
//	readSong(songs, no_of_songs);
//	reLeased(songs, no_of_songs);
//	sortgenre(songs, no_of_songs);
//
//}
//
//void readSong(song songs[], int& no) {
//	ifstream infile;
//	infile.open("details.txt");
//	if (infile.is_open()) {
//		while(!infile.eof()){
//			getline(infile, songs[no].title);
//			getline(infile, songs[no].singer);
//			getline(infile, songs[no].genre);
//			infile >> songs[no].yor;
//			infile.ignore();
//			
//			++no;
//		}
//	}
//}
//void reLeased(song songs[], int no) {
//	cout << "song released before 2020";
//	int order = 0;
//	for (int i = 0; i < no; i++) {
//		if (songs[i].yor < 2020) {
//			cout << endl << ++order << ". " << songs[i].title;
//		}
//	}
//}
//
//void sortgenre(song songs[], int no) {
//	
//	int genrecount = 0;
//	string genre[100];
//	for (int i = 0; i < no; i++) {
//		bool found = false;
//		for (int j = 0; j < genrecount; j++) {
//			
//			if (songs[i].genre == genre[j]) {
//				found = true;
//				
//				break;
//			}
//		}
//			if (!found) {
//				
//				genre[genrecount++] = songs[i].genre;
//			}
//		
//	}
//	
//	for (int i = 0; i < genrecount; i++) {
//		int songnumber = 0;
//		cout << endl << "Genre: " << genre[i];
//		for (int j = 0; j < no;j++) {
//			if (songs[j].genre == genre[i]) {
//				cout << endl <<  ++songnumber << ". " << songs[j].title;
//			}
//		}
//	}
//}
//
