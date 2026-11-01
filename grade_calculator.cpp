#include <iostream>
#include <string>
using namespace std;

int main() {

    int numberOfStudents;

    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;

    cout << "How many students? ";
    cin >> numberOfStudents;

    for (int i = 1; i <= numberOfStudents; i++) {

        string name;
        double score;
        char grade;

        cout << "\nEnter name of student " << i << ": ";
        cin >> name;

        cout << "Enter score: ";
        cin >> score;

        // Calculate grade
        if (score >= 90) {
            grade = 'A';
            countA++;
        }
        else if (score >= 80) {
            grade = 'B';
            countB++;
        }
        else if (score >= 70) {
            grade = 'C';
            countC++;
        }
        else if (score >= 60) {
            grade = 'D';
            countD++;
        }
        else {
            grade = 'F';
            countF++;
        }

        // Display grade
        cout << "Student: " << name << endl;
        cout << "Grade: " << grade << endl;

        // Personalized message
        if (grade == 'A') {
            cout << "Excellent work!" << endl;
        }
        else if (grade == 'B') {
            cout << "Good job!" << endl;
        }
        else if (grade == 'C') {
            cout << "Satisfactory." << endl;
        }
        else if (grade == 'D') {
            cout << "Needs improvement." << endl;
        }
        else {
            cout << "Please seek help." << endl;
        }
    }

    // Summary
    cout << "\n===== SUMMARY =====" << endl;
    cout << "A grades: " << countA << endl;
    cout << "B grades: " << countB << endl;
    cout << "C grades: " << countC << endl;
    cout << "D grades: " << countD << endl;
    cout << "F grades: " << countF << endl;

    return 0;
}
