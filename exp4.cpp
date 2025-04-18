 #include <iostream>
using namespace std;
int main() {
const int NUM_STUDENTS = 10;
const int NUM_COURSES = 5;
int marks[NUM_STUDENTS][NUM_COURSES];
// Input marks obtained by each student in each course
for (int i = 0; i < NUM_STUDENTS; ++i) {
cout << "Enter marks for student " << i + 1 << " in 5 courses: ";
for (int j = 0; j < NUM_COURSES; ++j) {
cin >> marks[i][j];
}
}
// Display the array showing marks of each student in each course
cout << "Marks obtained by each student in each course:" << endl;
for (int i = 0; i < NUM_STUDENTS; ++i) {
cout << "Student " << i + 1 << ": ";
for (int j = 0; j < NUM_COURSES; ++j) {
cout << marks[i][j] << " ";
}
cout << endl;
}
return 0;
}