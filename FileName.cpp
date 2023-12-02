#include <iostream>
using namespace std;

int main()
{
	int size; 
	cout << "enter size of your christmas tree: \n";
	cin >> size;

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size - i; ++j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; ++j) {
			cout << "*";
		}
		cout << endl; 
	}

	for (int i = 0; i < size / 2; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << " ";
		}
		cout << "|" << endl; 
	}

	for (int i = 0; i < size / 2; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << " ";
		}
		cout << "|" << endl;
	}

	return 0; 
}