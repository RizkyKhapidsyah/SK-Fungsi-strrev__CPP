#pragma warning(disable:4996)

#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	char kata[20];
	
	cout << "Masukan Sembarang Kata = ";
	gets_s(kata);
	strrev(kata);
	cout << "Hasil Perubahan = " << kata;

	_getch();
	return 0;
}