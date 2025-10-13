 #include <iostream>
using namespace std;
#include <iomanip>
int main() {
float subject1, subject2, subject3, subject4, subject5;
  float totalmarks, percentage;
char grade; 
  cout << "Enter marks for five subjects (out of 100 each):" << endl;
 cout << "subject1:";
 cin >> subject1;
 cout << "subject2:";
 cin >> subject2;
 cout << "subject3:";
 cin >> subject3;
 cout << "subject4:";
 cin >> subject4;
 cout << "subject5:";
 cin >> subject5;
 totalmarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (totalmarks / 500.0) * 100;
    if (percentage >= 90) {
        grade = 'A';
      } else  if (percentage >= 80) {
        grade = 'A';
      }  else  if (percentage >= 70) {
        grade = 'B';
      }   else  if (percentage >= 60) {
        grade = 'C';
      }  else  if (percentage >= 50) {
        grade = 'D';
             }  else   {
        grade = 'F' ;
      }   
      string passfailstatus =  (percentage >= 50) ? "pass" : "FAIL";
      cout << "\n--- Report Card ---" << endl;
      cout << std::setw(20) << std::left << "Subject 1 Marks:" << std::setw(5) << std::right << subject1 << std::endl;
    cout << std::setw(20) << std::left << "Subject 2 Marks:" << setw(5) << right << subject2 << endl;
    cout << setw(20) << left << "Subject 3 Marks:" << setw(5) << right << subject3 << endl;
    cout << setw(20) << left << "Subject 4 Marks:" << setw(5) << right << subject4 << endl;
    cout << setw(20) << left << "Subject 5 Marks:" << setw(5) << right << subject5 << endl;
    cout << setw(20) << left << "Total Marks:" << setw(5) << right << totalmarks << endl;
    cout << setw(20) << left << "Percentage:" << setw(5) << right << fixed << setprecision(2) << percentage << "%" << endl;
    std::cout << setw(20) << left << "Grade:" << setw(5) << right << grade << endl;
    cout << setw(20) << left << "Status:" << setw(5) << right << passfailstatus << endl;
    cout << "-------------------" << endl;
      return 0;
}