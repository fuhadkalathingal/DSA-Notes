#include <bits/stdc++.h>
using namespace std;

class Student {
	private:
	int roll_number;
	string name;
	int standard;
	char gender;
	string mob_number;
	char grade;

	public:
	void setName() {
		cin >> name;
	}

	void getName() {
		cout << name;
	}
};

int main() {

	Student student_1;
	Student *ptr = new Student;

	student_1.setName();
	student_1.getName();

	cout << sizeof(ptr);

	// cin >> student_1.roll_number;
	// cin >> student_1.name;
	// cin >> student_1.standard;
	// cin >> student_1.gender;
	// cin >> student_1.mob_number;
	// cin >> student_1.grade;

	// cout << student_1.name << endl;
	// cout << student_1.roll_number << endl;
	// cout << student_1.standard << endl;
	// cout << student_1.gender << endl;
	// cout << student_1.mob_number << endl;
	// cout << student_1.grade << endl;

	delete ptr;

	return 0;
}
