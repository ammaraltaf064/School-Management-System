#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Notice_board {
public:
    void display_notice() {
        cout << "\t\t\t   SCHOOL MANAGEMENT SYSTEM." << endl;
        cout << "\n\t\t\t ----------------------------- " << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |   WELCOME TO Govt.SCHOOL   |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t |                            |" << endl;
        cout << "\t\t\t  ---------------------------- " << endl;

        cout << "\n\t\t\t   STUDENT SCHEDULES & Timings." << endl;
        cout << "\n -------------------------------------------------------------------------------------- " << endl;
        cout << " |                                 Monday timings                                      |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |Lecture  01 | Lecture 02 | Lecture  03 | Lecture  04  |  Lecture  05 |  Lecture  06  |" << endl;
        cout << " | 8:00-9:00    9:00-10:00   10:00-11:00   11:00-12:00     12:00-1:00      1:00-2:00   |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |                                 Tuesday timings                                     |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |Lecture  01 | Lecture 02 | Lecture  03 | Lecture  04  |  Lecture 05  |  Lecture  06  |" << endl;
        cout << " | 8:00-9:00    9:00-10:00   10:00-11:00   11:00-12:00     12:00-1:00      1:00-2:00   |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |                                 Wednesday timings                                   |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |Lecture  01 | Lecture 02 | Lecture  03 | Lecture  04  |  Lecture  05 |  Lecture  06  |" << endl;
        cout << " | 8:00-9:00    9:00-10:00   10:00-11:00   11:00-12:00     12:00-1:00      1:00-2:00   |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |                                 Thursday timings                                    |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |Lecture  01 | Lecture 02 | Lecture  03 | Lecture  04  |  Lecture 05  |  Lecture  06  |" << endl;
        cout << " | 8:00-9:00    9:00-10:00   10:00-11:00   11:00-12:00     12:00-1:00      1:00-2:00   |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |                                   Friday timings                                    |" << endl;
        cout << " |                                                                                     |" << endl;
        cout << " |Lecture  01 | Lecture  02 | Lecture 03 | Lecture  04  |  Lecture 05  |   Lecture  06 |" << endl;
        cout << " | 8:00-8:45     8:45-9:30     9:30-10:15  10:15-11:30     11:30-12:15     Prayer Time |" << endl;
        cout << " |                                                                             (OFF)   |" << endl;
        cout << "  ------------------------------------------------------------------------------------- " << endl;
    }
};

class Student {
    string F_name;  // Students first name
    string L_name;  // Students last name
    string Father_name;  // Students Father name
    string Roll_No;  // Students Roll number
    string Classes;  // Students Class
    string Dept;  // Students Department name
    char Section;   // Students Section name
    string Sub;  // Students Subjects means how many subject he have or any subject name
    string CNIC;  // Students CNIC
    string Phone_no;  // Students Phone number

public:  // Here we write public to get private data members through Encapsulation method
    Student() = default; // Default constructor

    Student(string fn, string ln, string fa_n, string rln, string cls, string dpt, char sctn, string sub, string cnic, string phone)
        : F_name(fn), L_name(ln), Father_name(fa_n), Roll_No(rln), Classes(cls), Dept(dpt), Section(sctn), Sub(sub), CNIC(cnic), Phone_no(phone) {
    }

    void Student_information() const {
        cout << "\nStudents Data Output" << endl;
        cout << "First Name : " << F_name << endl;
        cout << "Last Name : " << L_name << endl;
        cout << "Father Name : " << Father_name << endl;
        cout << "Roll Number : " << Roll_No << endl;
        cout << "Class : " << Classes << endl;
        cout << "Department : " << Dept << endl;
        cout << "Section : " << Section << endl;
        cout << "Subject : " << Sub << endl;
        cout << "Fathers/Student CNIC : " << CNIC << endl;
        cout << "Fathers/Student Phone number : " << Phone_no << endl;
    }

    void inputStudentData() {
        cout << "\nStudents Data Input" << endl;
        cout << "First Name : ";
        cin.ignore();   // ignores trash values
        getline(cin, F_name);
        cout << "Last Name : ";
        getline(cin, L_name);
        cout << "Father Name : ";
        getline(cin, Father_name);
        cout << "Roll Number : ";
        getline(cin, Roll_No);
        cout << "Class : ";
        getline(cin, Classes);
        cout << "Department : ";
        getline(cin, Dept);
        cout << "Section : ";
        cin >> Section;
        cin.ignore();  // To ignore the newline character left by cin >> Section
        cout << "Subject : ";
        getline(cin, Sub);
        cout << "Fathers/Student CNIC : ";
        getline(cin, CNIC);
        cout << "Fathers/Student Phone number : ";
        getline(cin, Phone_no);
    }

    void update_record() {
        int choice;
        cout << "Enter choice to update data : ";
        cin >> choice;
        cin.ignore();  // To ignore the newline character left by cin >> choice
        switch (choice) {
            case 1: {
                cout << "Update first name : ";
                getline(cin, F_name);
                break;
            }
            case 2: {
                cout << "Update last name : ";
                getline(cin, L_name);
                break;
            }
            case 3: {
                cout << "Update father name : ";
                getline(cin, Father_name);
                break;
            }
            case 4: {
                cout << "Update Roll No : ";
                getline(cin, Roll_No);
                break;
            }
            case 5: {
                cout << "Update class name : ";
                getline(cin, Classes);
                break;
            }
            case 6: {
                cout << "Update Department : ";
                getline(cin, Dept);
                break;
            }
            case 7: {
                cout << "Update Section : ";
                cin >> Section;
                cin.ignore();  // To ignore the newline character left by cin >> Section
                break;
            }
            case 8: {
                cout << "Update Subjects : ";
                getline(cin, Sub);
                break;
            }
            case 9: {
                cout << "Update CNIC : ";
                getline(cin, CNIC);
                break;
            }
            case 10: {
                cout << "Update Phone Number : ";
                getline(cin, Phone_no);
                break;
            }
            default: {
                cout << "Invalid choice!" << endl;
                break;
            }
        }
    }
};

int main() {
    Notice_board ntb;
    ntb.display_notice();
     
    int no_of_student, opt;  // For taking number of students so we can use them in array
    cout << "\nEnter number of Student/Students : ";
    cin >> no_of_student;
    cin.ignore();

    vector<Student> students(no_of_student);

    cout << "Enter your option (1 for entering data, 2 for displaying data, 3 for updating data): ";
    cin >> opt;
    cin.ignore();
    do 
	{
    if (opt == 1 || opt == 01) {
        for (int i = 0; i < no_of_student; i++) {
            students[i].inputStudentData();
        }
    cout << "Enter your option (1 for entering data, 2 for displaying data, 3 for updating data): ";
    cin >> opt;
    } else if (opt == 2 || opt == 02) {
        for (const auto& student:students){
            student.Student_information();
        }
    cout << "Enter your option (1 for entering data, 2 for displaying data, 3 for updating data): ";
    cin >> opt;
    } else if (opt == 3 || opt == 03) {
        for (int i = 0; i < no_of_student; i++) {
            students[i].update_record();
        }
    } else {
        cout << "Invalid option!" << endl;
    }
   }while(opt!=3); 

 return 0;
}
