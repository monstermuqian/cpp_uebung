#include "Mylist.h"
#include <iostream>
#include <locale>
using namespace std;

Mylist::Mylist() {
	cout << "construction called....."<<endl;
	while (true) {
		cout << "Enter the number you want to store:";
		cin >> temp;
		Mylist::add(temp);
		cout << "want to finish the enter?(y/n)";
		cin >> flag;
		if (tolower(flag) == 'y') {
			break;
		}
	}

}

Mylist::~Mylist() {
	cout << "destructe the class and exit the progress";
}


void Mylist::add(double temp) {
	mylist_after[count] = temp;
	mylist_before[count] = temp;
	sum += temp;
	count++;
}

void Mylist::sort() {
	double list_temp;
	if (!count) {
		cout << "there is just one element in the list" << endl;
	}
	else {
		int count_temp = count;
		bool swap = false;
		while (true) {
			for (int i = 0; i < count_temp - 1; ++i) {
				if (mylist_after[i] > mylist_after[i + 1]) {
					list_temp = mylist_after[i + 1];
					mylist_after[i + 1] = mylist_after[i];
					mylist_after[i] = list_temp;
					swap = true;
				}
			}
			if (!swap) {
				break;
			}
			swap = false;
			--count_temp;
		}
	
		cout << "Sorting progress is finished.." << endl;
	}
}

void Mylist::printlist() {
	cout << "start to print the unsorted list.." << endl;
	for (int i = 0; i < count ; ++i) {
		cout << mylist_before[i] << " ";
	}
	cout << endl;
	cout << "start to print the sorted list..." << endl;
	for (int i = 0; i < count ; ++i) {
		cout << mylist_after[i] << " ";
	}
}

void Mylist::average() {
	cout << "the average number of mylist is " << sum / count << endl;
}