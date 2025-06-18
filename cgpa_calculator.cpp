#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<string> courseNames(numCourses);
    vector<float> grades(numCourses);
    vector<int> credits(numCourses);

    float totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < numCourses; ++i) {
        cout << "\nEnter name of course " << i + 1 << ": ";
        cin >> courseNames[i];
        cout << "Enter grade for " << courseNames[i] << ": ";
        cin >> grades[i];
        cout << "Enter credit hours for " << courseNames[i] << ": ";
        cin >> credits[i];

        totalGradePoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n--- Grade Summary ---\n";
    for (int i = 0; i < numCourses; ++i) {
        cout << courseNames[i] << " - Grade: " << grades[i]
             << ", Credit Hours: " << credits[i] << "\n";
    }

    cout << "\nTotal Credit Hours: " << totalCredits << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
