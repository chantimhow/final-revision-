#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct recipe {
	string name;
	string ingredient;
	double cookingtime;
	int servings;
};
void morethanfourservings(recipe cook[], int no);
void readrecipe(recipe cook[], int& no);


int main() {
	int no;
	recipe cook[10];
	readrecipe(cook, no);
	morethanfourservings(cook, no);
};
void readrecipe(recipe cook[], int& no) {
	ifstream infile;
	;
	infile.open("recipe.txt");
	if (infile.is_open()) {
		while (!infile.eof()) {
			getline(infile, cook[no].name);
			getline(infile, cook[no].ingredient);
			infile >> cook[no].cookingtime;
			infile >> cook[no].servings;
			infile.ignore();
			++no;


		}
	}
	else cout << "file is not open";

}

void morethanfourservings(recipe cook[], int no) {
	int recipenumber = 0;
	for (int i = 0; i < no; i++) {
		if (cook[i].servings > 4) {
			cout << "Recipe " << ++recipenumber << endl;
			cout << "Name: " << cook[i].name << endl;
			cout << "Ingredients: " << cook[i].ingredient << endl;
			cout << "Cooking Time: " << cook[i].cookingtime << " minutes" << endl;
			cout << "Servings: " << cook[i].servings << endl << endl;

		}
	}
}