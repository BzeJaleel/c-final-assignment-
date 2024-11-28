#include "Student.h"
#include <iomanip>
#include <iostream>

using namespace std;

Student::Student(string firstName, string lastName) {
    name = firstName;
    surename = lastName;
}


void Student::addGrade(double grade) {
    grades.push_back(grade);
}


double Student::calculateAverage() {
    if (grades.empty()) {
        return 0.0; 
    }
    double sum = 0.0;
    for (double grade : grades) {
        sum += grade;
    }
    return sum / grades.size();
}

void Student::printDetails() {
    cout << "Student Name: " << name << ", Average Grade: "
         << fixed << setprecision(2) << calculateAverage() << endl;
}
