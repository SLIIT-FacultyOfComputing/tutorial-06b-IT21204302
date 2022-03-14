#include "Student.h"
#include <iostream>
using namespace std;

void Student::assignDetails(int sId, string nam) {
	studentId = sId;
	name = nam;
}

void Student::display() {
	cout << "student ID : " << studentId << endl;
	cout << "Student Name : " << name;
}
