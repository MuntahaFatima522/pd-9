#include <iostream>
#include <windows.h>
using namespace std;

void printHeader();
void Header();
int Menu();
int adminLogin();
int adminMenu();
int adminOptions();
int adminEnd();
int studentLogin();
int studentMenu();
int studentOptions();
int studentEnd();
int Registeration();
bool isRegistered(string studentPass[], int TotalStudents);

int studentIndex;
const int maxBooks = 100;
const int maxStudents = 30;

string books[maxBooks] = {"Computer", "Physics", "Mathematics", "English", "Urdu", "Biology", "Chemistry", "History", "Geography", "Al-Quran"};
string studentsID[maxStudents] = {"Muntaha", "Ali", "Faizan", "Fatima", "Zara", "Noor"};
string studentPass[maxStudents] = {"muntaha_123", "ali_456", "faizan_789", "fatima_123", "zara_456", "noor_789"};
string studentBooks[maxStudents];

int TotalBooks = 10;
int TotalStudents = 6;

int main()
{
	int option;
	printHeader();
	option = Menu();
	system("cls");
	Header();
	if (option == 1)
	{
		cout << "You have entered option 1 i.e. Admin." << endl;
		adminLogin();
	}
	else if (option == 2)
	{
		cout << "You have entered option 2 i.e. Student." << endl;
		studentLogin();
	}
	else if (option == 3)
	{
		cout << "You have entered option 3 i.e. Not Registered." << endl;
		Registeration();
	}
	else if (option == 4)
	{
		return 0;
	}
	else
	{
		cout << "Wrong option" << endl;
	}
}


void printHeader()
{
	system("cls");
	cout << "###################################################################################################################" << endl;
	cout << "##                                                                                                               ##" << endl;
	cout << "##                     ####      ######   ######    ######     #####    ######    ##  ##                         ##" << endl;
	cout << "##                      ##         ##     ##    #   ##    #   ##   ##   ##    #   ##  ##                         ##" << endl;
	cout << "##                      ##         ##     ######    ######    #######   ######     ####                          ##" << endl;
	cout << "##                      ##         ##     ##    #   ##    #   ##   ##   ##    #     ##                           ##" << endl;
	cout << "##                     #######   ######   ######    ##    #   ##   ##   ##    #     ##                           ##" << endl;
	cout << "##                                                                                                               ##" << endl;
	cout << "##                                                                                                               ##" << endl;
	cout << "##       ##    ##    #####    ##   ##    #####     #####    ######   ##    ##   ######   ##   ##   ######        ##" << endl;
	cout << "##       ###  ###   ##   ##   ###  ##   ##   ##   ##    #   ##       ###  ###   ##       ###  ##     ##          ##" << endl;
	cout << "##       ## ## ##   #######   #### ##   #######   ##        ######   ## ## ##   ######   #### ##     ##          ##" << endl;
	cout << "##       ##    ##   ##   ##   ## ####   ##   ##   ##  ###   ##       ##    ##   ##       ## ####     ##          ##" << endl;
	cout << "##       ##    ##   ##   ##   ##   ##   ##   ##   #######   ######   ##    ##   ######   ##   ##     ##          ##" << endl;
	cout << "##                                                                                                               ##" << endl;
	cout << "##                                                                                                               ##" << endl;
	cout << "##                          ######   ##  ##   ######   ######   ######   ##    ##                                ##" << endl;
	cout << "##                         #         ##  ##  #           ##     ##       ###  ###                                ##" << endl;
	cout << "##                          ######    ####    ######     ##     ######   ## ## ##                                ##" << endl;
	cout << "##                                #    ##           #    ##     ##       ##    ##                                ##" << endl;
	cout << "##                          ######     ##     ######     ##     ######   ##    ##                                ##" << endl;
	cout << "##                                                                                                               ##" << endl;
	cout << "###################################################################################################################" << endl;
	cout << endl;
	cout << endl;
}


void Header()
{
	cout << "###################################################################################################################" << endl;
	cout << "#                                              LIBRARY MANAGEMENT SYSTEM                                          #" << endl;
	cout << "###################################################################################################################" << endl;
	cout << endl;
	cout << endl;
}


int Menu()
{
	int option;
	cout << "Select one of the following options number: " << endl;
	cout << "1.\t Admin" << endl;
	cout << "2.\t Student" << endl;
	cout << "3.\t Not Registered" << endl;
	cout << "4.\t Exit." << endl;
	cout << "Your option: ";
	cin >> option;
	return option;
}


int adminLogin()
{
	string password;
	cout << "Enter admin password: ";
	cin >> password;
	if (password == "admin_pass123")
	{
		char key;
		system("cls");
		Header();
		cout << "Admin login successful." << endl;
		cout << "Press any key to display menu..";
		cin>>key;
		adminOptions();
	}
	else
	{
		cout << "Wrong password." << endl;
	}
	return 0;
}


int adminMenu()
{
	int option;
	cout << "Select one of the following options: " << endl;
	cout << "1. Add a book." << endl;
	cout << "2. Search for a book." << endl;
	cout << "3. Delete a book." << endl;
	cout << "4. Display all books." << endl;
	cout << "5. Issue a book." << endl;
	cout << "6. Exit." << endl;
	cout << "Your option: " << endl;
	cin >> option;
	return option;
}


int adminOptions()
{
	system("cls");
	Header();
	int option;
	option = adminMenu();
	system("cls");
	Header();
	if (option == 1)
	{
		cout << "You have entered option 1 (to add a book)" << endl;
		if (TotalBooks < maxBooks)
		{
			cout << "Enter the name of the book you want to add: ";
			cin >> books[TotalBooks];
			TotalBooks++;
			cout << "Book has been added successfully" << endl;
		}
		else
		{
			cout << "No more books can be added!!Delete some unnecesssary books to add new ones.." << endl;
		}
		adminEnd();
	}
	else if (option == 2)
	{
		string bookName;
		cout << "You have entered option 2 (to search for a book)" << endl;
		cout << "Enter the name of the book you want to search: ";
		cin >> bookName;
		bool result = false;
		for (int i = 0; i < TotalBooks; i++)
		{
			if (bookName == books[i])
			{
				result = true;
				break;
			}
		}
		if (result == true)
		{
			cout << "Yes!!! this book is avalable" << endl;
		}
		else
		{
			cout << "No!!! this book is not available" << endl;
		}
		adminEnd();
	}
	else if (option == 3)
	{
		string deleteBook;
		cout << "You have entered option 3 (to delete a book)" << endl;
		cout << "Enter the name of the book you want to delete: ";
		cin >> deleteBook;
		bool deleted = false;
		for (int i = 0; i < TotalBooks; i++)
		{
			if (deleteBook == books[i])
			{
				books[i] = "0";
				deleted = true;
				break;
			}
		}
		if (deleted == true)
		{
			cout << "Book has been deleted successfully" << endl;
		}
		else
		{
			cout << "Book not found.." << endl;
		}
		adminEnd();
	}
	else if (option == 4)
	{
		cout << "You have entered option 4 (to display all books)" << endl;
		cout << "All available books are: " << endl;
		for (int i = 0; i < TotalBooks; i++)
		{
			if (books[i] != "0")
			{
				cout << books[i] << endl;
			}
		}
		adminEnd();
	}
	else if (option == 5)
	{
		string issueBook;
		string issueStudent;
		cout << "You have entered option 5 (to issue a book)" << endl;
		cout << "Enter the name of the book you want to issue: ";
		cin >> issueBook;
		cout << "Enter the name of student to whom the book is being issued: ";
		cin >> issueStudent;
		bool issued = false;
		for (int i = 0; i < TotalBooks; i++)
		{
			if (issueBook == books[i])
			{
				for (int j = 0; j < TotalStudents; j++)
				{
					if (issueStudent == studentsID[j])
					{
						books[i] = "0";
						studentBooks[j] = issueBook;
						issued = true;
						break;
					}
				}
			}
		}
		if (issued == true)
		{
			cout << "Book has been issued successfully" << endl;
		}
		else
		{
			cout << "This book is not available.. Kindly check the available books.." << endl;
			cout<<endl;
			cout << "Or maybe the student is not registered.. Kindly ask him/her to register and then try again.." << endl;
		}
		adminEnd();
	}
	else if (option == 6)
	{
		return 0;
	}
	else
	{
		cout << "Wrong option" << endl;
	}
	return 0;
}


int adminEnd()
{
	int op;
	cout << endl
		 << endl;
	cout << "Choose an option: " << endl;
	cout << "1. Main Menu " << endl;
	cout << "2. Admin Menu " << endl;
	cout << "3. Exit " << endl;
	cout << "Your option: ";
	cin >> op;
	system("cls");
	Header();
	if (op == 1)
	{
		main();
	}
	else if (op == 2)
	{
		adminOptions();
	}
	else if (op == 3)
	{
		return 0;
	}
	else
	{
		cout << "Wrong option";
	}
	return 0;
}


int studentLogin()
{
	string ID;
	cout << "Enter Student ID: ";
	cin >> ID;
	string password;
	cout << "Enter password: ";
	cin >> password;
	bool successfulLogin = false;
	for (int i = 0; i < TotalStudents; i++)
	{
		if (ID == studentsID[i] && password == studentPass[i])
		{
			successfulLogin = true;
			studentIndex = i;
			break;
		}
	}
	if (successfulLogin == true)
	{
		char key;
		system("cls");
		Header();
		cout << ID << endl;
		cout << endl
			 << endl;
		cout << "Student login suuceessful." << endl;
		cout << "Press any key to display menu..";
		cin >> key;
		studentOptions();
	}
	else
	{
		system("cls");
		Header();
		int option;
		cout << "Incorrect password OR You are not registered.Kindly register yourself." << endl;
		cout << "Select one of the following options: " << endl;
		cout << "1. Register." << endl;
		cout << "2. Exit." << endl;
		cin >> option;
		system("cls");
		Header();
		if (option == 1)
		{
			Registeration();
		}
		else if (option == 2)
		{
			return 0;
		}
		else
		{
			cout << "Wrong option" << endl;
		}
	}
	return 0;
}


int studentMenu()
{
	int option;
	cout << "Select one of the following options: " << endl;
	cout << "1. Search for a book." << endl;
	cout << "2. Borrow a book." << endl;
	cout << "3. Display all books." << endl;
	cout << "4. Return a book." << endl;
	cout << "5. Display my borrowed books." << endl;
	cout << "6. Exit." << endl;
	cout << "Your option: " << endl;
	cin >> option;
	return option;
}


int studentOptions()
{
	system("cls");
	Header();
	int option;
	option = studentMenu();
	system("cls");
	Header();
	if (option == 1)
	{
		string bookName;
		cout << "You have entered option 1 (to search for a book)" << endl;
		cout << "Enter the name of the book you want to search: ";
		cin >> bookName;
		bool result = false;
		for (int i = 0; i < TotalBooks; i++)
		{
			if (bookName == books[i])
			{
				result = true;
				break;
			}
		}
		if (result == true)
		{
			cout << "Yes!!! this book is avalable" << endl;
		}
		else
		{
			cout << "No!!! this book is not available" << endl;
		}
		studentEnd();
	}
	else if (option == 2)
	{
		string borrowBook;
		cout << "You have entered option 2 (to borrow a book)" << endl;
		cout << "Enter the name of the book you want to borrow: ";
		cin >> borrowBook;
		bool borrowed = false;
		for (int i = 0; i < TotalBooks; i++)
		{
			if (borrowBook == books[i])
			{
				books[i] = "0";
				studentBooks[studentIndex] = borrowBook;
				borrowed = true;
				break;
			}
		}
		if (borrowed == true)
		{
			cout << "Book has been borrowed successfully.." << endl;
		}
		else
		{
			cout << "This book is not available." << endl;
		}
		studentEnd();
	}
	else if (option == 3)
	{
		cout << "You have entered option 3 (to display all books)" << endl;
		cout << "All available books are: " << endl;
		for (int i = 0; i < TotalBooks; i++)
		{
			if (books[i] != "0")
			{
				cout << books[i] << endl;
			}
		}
		studentEnd();
	}
	else if (option == 4)
	{
		string returnBook;
		cout << "You have entered option 4 (to return a book)" << endl;
		cout << "Enter the name of book you want to return: " << endl;
		cin >> returnBook;
		if (studentBooks[studentIndex] != "0")
		{
			books[TotalBooks] = studentBooks[studentIndex];
			studentBooks[studentIndex] == "0";
			cout << "Book has been returned successfully.." << endl;
		}
		else
		{
			cout << "You have not borrowed this book.." << endl;
			cout << "Kindly return the book you have borrowed.." << endl;
		}
		studentEnd();
	}
	else if (option == 5)
	{
		cout << "You have entered option 5 (to display your borrowed books)" << endl;
		cout << "Your borrowed books are: " << endl;
		if (studentBooks[studentIndex] != "0")
		{
			cout << studentBooks[studentIndex] << endl;
		}
		else
		{
			cout << "You have not borrowed any book.." << endl;
		}
		studentEnd();
	}
	else if (option == 6)
	{
		return 0;
	}
	else
	{
		cout << "Wrong option" << endl;
	}
}


int studentEnd()
{
	int op;
	cout << endl
		 << endl;
	cout << "Choose an option: " << endl;
	cout << "1. Main Menu " << endl;
	cout << "2. Student Menu " << endl;
	cout << "3. Exit " << endl;
	cout << "Your option: ";
	cin >> op;
	system("cls");
	Header();
	if (op == 1)
	{
		main();
	}
	else if (op == 2)
	{
		studentOptions();
	}
	else if (op == 3)
	{
		return 0;
	}
	else
	{
		cout << "Wrong option";
	}
	return 0;
}


int Registeration()
{
	if (TotalStudents < maxStudents)
	{
		cout << "Choose your ID: ";
		cin >> studentsID[TotalStudents];
		cout << "Choose your password: ";
		cin >> studentPass[TotalStudents];
		bool result = isRegistered(studentPass, TotalStudents);
		if (result == true)
		{
			system("cls");
			Header();
			cout << "Strong password!!!!Successfully registered." << endl;
			TotalStudents++;
			int option;
			cout << "Select one of the following options: " << endl;
			cout << "1.  Log in." << endl;
			cout << "2. Main menu." << endl;
			cout << "3.  Exit." << endl;
			cin >> option;
			system("cls");
			Header();
			if (option == 1)
			{
				studentLogin();
			}
			else if (option == 2)
			{
				main();
			}
			else if (option == 3)
			{
				return 0;
			}
			else
			{
				cout << "Wrong option";
			}
		}
		else
		{
			system("cls");
			Header();
			cout << "Password is not strong.Kindly try again.." << endl;
			Registeration();
		}
	}
	return 0;
}


bool isRegistered(string studentPass[], int TotalStudents)
{
	string StudentPass = studentPass[TotalStudents];
	bool hasDigit = false;
	bool hasAlphabet = false;
	bool hasCharacter = false;
	for (int x = 0; StudentPass[x] != '\0'; x++)
	{
		if (StudentPass[x] >= '0' && StudentPass[x] <= '9')
		{
			hasDigit = true;
		}
		if ((StudentPass[x] >= 'A' && StudentPass[x] <= 'Z') || (StudentPass[x] >= 'a' && StudentPass[x] <= 'z'))
		{
			hasAlphabet = true;
		}
		if (StudentPass[x] == '/' || StudentPass[x] == '_' || StudentPass[x] >= '.' || StudentPass[x] == '@' || StudentPass[x] == '*' || StudentPass[x] == '+' || StudentPass[x] == '-' || StudentPass[x] == '&' || StudentPass[x] == '^' || StudentPass[x] == '!' || StudentPass[x] == '%' || StudentPass[x] == '#' || StudentPass[x] == ';' || StudentPass[x] == '>' || StudentPass[x] == '<')
		{
			hasCharacter = true;
		}
	}

	return (hasDigit && hasAlphabet && hasCharacter);
}
