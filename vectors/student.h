#include <vector>
#include <string>

using namespace std;

class Student {

    public:
    Student(string firstName, string lastName);

    void addGrade(double grade);
    double calculateAverage();
    void printDetails();

private:
    string name;    
    string surename;             
    vector<double> grades;    

};
