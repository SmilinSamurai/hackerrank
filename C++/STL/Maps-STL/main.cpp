#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

void getQuery(map<string, int> &students, int sq) {
	string name;
	int mark;
	cin >> name;
	map<string, int>::iterator it;
	switch (sq) {
		case 1:
		cin >> mark;
		it = students.find(name);
		if (it != students.end())
			students.at(name) += mark;
		else
			students.insert(make_pair(name, mark));
		break;
		case 2:
			it = students.find(name);
			if (it != students.end())
				students.erase(name);
		break;
		case 3:
			it = students.find(name);
			if (it != students.end())
				cout << it->second << endl;
			else
				cout << 0 << endl;
		break;

	}
}

int main() {
    int q;
		map<string, int> students;
    cin >> q;
    cin.ignore();
		for (int i = 0; i < q; i++) {
			int sq;
			cin >> sq;
			cout << sq << endl;
			getQuery(students, sq);
		}
}
