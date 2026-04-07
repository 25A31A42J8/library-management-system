#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Book {
    char bno[6];
    char bname[50];
    char aname[20];
public:
    void create_book() {
        cout << "\nEnter Book No: "; cin >> bno;
        cout << "Enter Book Name: "; cin.ignore(); cin.getline(bname, 50);
        cout << "Enter Author Name: "; cin.getline(aname, 20);
    }
    void show_book() {
        cout << "\nBook No: " << bno << "\nName: " << bname << "\nAuthor: " << aname;
    }
    char* retbno() { return bno; }
};

// Functions to write to file, read, and delete records follow...
