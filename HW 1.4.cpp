// HW 1.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct LibraryTlibdata
{
    string title;
    string authors;
    int catalog{};
    string subject;
    string publisher;
    int yop{}; // year of publication
    string yon; // circulation status
};

// Function prototypes
void displayBook(const LibraryTlibdata& book);
void addBook(vector<LibraryTlibdata>& library);
void searchBySubject(const vector<LibraryTlibdata>& library, const string& subject);
void displayAllBooks(const vector<LibraryTlibdata>& library);

int main()
{
    vector<LibraryTlibdata> library;

  
    library.push_back({ "Carrie", "Stephen King", 120901, "horror", "AtameLi", 2001, "in circulation" });
    library.push_back({ "A Little Life", "Hanya Yanagihara", 120902, "drama", "Starbucks", 2002, "not in circulation" });
    library.push_back({ "Maximum Ride", "James Patterson", 120903, "fantasy", "Dunkin", 2003, "in circulation" });
    library.push_back({ "Giovanni's Room", "James Baldwin", 120904, "fiction", "Panera Bread", 2004, "not in circulation" });
    library.push_back({ "Haunted", "Chuck Palahniuk", 120905, "horror", "Kumo", 2005, "not in circulation" });

    cout << "-------" << endl;
    cout << "Library Menu" << endl;
    cout << "1. Add a new book" << endl;
    cout << "2. Search by subject" << endl;
    cout << "3. Display all titles and authors" << endl;

    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    cin.ignore(); // Clear the newline

    if (number == 1)
    {
        addBook(library);
    }
    else if (number == 2)
    {
        string subject;
        cout << "Enter subject to search: ";
        getline(cin, subject);
        searchBySubject(library, subject);
    }
    else if (number == 3)
    {
        displayAllBooks(library);
    }

    return 0;
}

void displayBook(const LibraryTlibdata& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.authors << endl;
    cout << "Catalog Number: " << book.catalog << endl;
    cout << "Subject: " << book.subject << endl;
    cout << "Publisher: " << book.publisher << endl;
    cout << "Year of Publication: " << book.yop << endl;
    cout << "Circulation Status: " << book.yon << endl;
  
}

void addBook(vector<LibraryTlibdata>& library) {
    LibraryTlibdata newbook;
    cout << "Enter title: ";
    getline(cin, newbook.title);
    cout << "Enter author: ";
    getline(cin, newbook.authors);
    cout << "Enter catalog number: ";
    cin >> newbook.catalog;
    cin.ignore(); 
    cout << "Enter subject: ";
    getline(cin, newbook.subject);
    cout << "Enter publisher: ";
    getline(cin, newbook.publisher);
    cout << "Enter year of publication: ";
    cin >> newbook.yop;
    cin.ignore(); 
    cout << "Enter circulation status (in circulation/not in circulation): ";
    getline(cin, newbook.yon);

    library.push_back(newbook);
    cout << "Book added" << endl;
}

void searchBySubject(const vector<LibraryTlibdata>& library, const string& subject) {
    bool found = false;
    for (const auto& book : library) {
        if (book.subject == subject) {
            displayBook(book);
            found = true;
        }
    }
  
}

void displayAllBooks(const vector<LibraryTlibdata>& library) {
    for (const auto& book : library) {
        cout << book.title << " by " << book.authors << endl;
    }
}
