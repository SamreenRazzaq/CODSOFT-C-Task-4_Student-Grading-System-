#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    vector<string> student_names;
    vector<double> student_grades;
    string name;
    double grade;
	cout << "Student Grade Management System" << endl;
	
//Input Student names:	
	while (true) {
        cout << "Enter student name (or 'done' to finish): ";
        getline(cin, name);
        
//Enter Grades:
	if (name == "done") {
            break;
        }
		cout << "Enter Grades (in numbers) " << name << ": ";
        cin >> grade;
        cin.ignore();
		student_names.push_back(name);
        student_grades.push_back(grade);
    }
    
	if (student_names.empty()) {
        cout << "No student data entered." << endl;
        return 0;
    }
	double total_grades = 0.0;
    double highest_grade = student_grades[0];
    double lowest_grade = student_grades[0];
	for (size_t i = 0; i < student_grades.size(); i++) {
    	double grade = student_grades[i];
    	total_grades += grade;
    	highest_grade = max(highest_grade, grade);
    	lowest_grade = min(lowest_grade, grade);
}

//Display:
	int num_students = student_grades.size();
    double average_grade = total_grades / num_students;
	cout << "\nGrade Summary:" << endl;
    cout << "Average Grade: " << average_grade << endl;
    cout << "Highest Grade: " << highest_grade << endl;
    cout << "Lowest Grade: " << lowest_grade << endl;
	return 0;
}

