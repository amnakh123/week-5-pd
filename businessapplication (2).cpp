#include <iostream>
#include <conio.h>
using namespace std;
void printHeader();
int menu();
float fine = 0.0;
int main()
{
    system("cls");
    string name1 = "", name2 = "", name3 = "";
    string student1 = "", student2 = "", student3 = "";
    int  daysforborrow1 = 0, daysforborrow2 = 0, daysforborrow3 = 0;
    float totalfine1 = 0.0, totalfine2 = 0.0, totalfine3 = 0.0;
    int bookNO;
    while (true)
    {
        printHeader();
        bookNO = menu();
	    if (bookNO == 1)
        {
            cout << "Enter New Fine Value(per Day)";
            cin >> fine; 
        }
        if (bookNO == 2)
        {
            cout << "Enter the Name of book: ";
            cin >> name1;
            cout << "Enter the name of student: ";
            cin >> student1;
            cout << "Enter the days for borrow: ";
            cin >> daysforborrow1;
        }
        if (bookNO == 3)
        {
            cout << "Enter the Name of book: ";
            cin >> name2;
            cout << "Enter the name of student: ";
            cin >> student2;
            cout << "Enter the days for borrow: ";
            cin >> daysforborrow2;
        }
        if (bookNO == 4)
        {
            cout << "Enter the Name of book: ";
            cin >> name3;
            cout << "Enter the name of student: ";
            cin >> student3;
            cout << "Enter the days for borrow: ";
            cin >> daysforborrow3;
        }
	
        if (bookNO == 5)
        {
            system("cls");
            printHeader();
            if(daysforborrow1 < 3)
	        {
	            cout << "The Total fine of " << student1 << " is 0.";
	        }
            else 
                totalfine1 = fine * daysforborrow1;
                cout << "The Total fine of " << student1 << " is Rs " << totalfine1<< endl;

	        if(daysforborrow2 < 3)
	        {
	            cout << "The Total fine of " << student2 << " is 0.";
	        }
            else
                totalfine2 = fine * daysforborrow2;
                cout << "The Total fine of " << student2 << " is Rs " << totalfine2<< endl;
	        if(daysforborrow3 < 3)
	            {
	            cout << "The Total fine of " << student3 << " is 0.";
	            }
            else
             totalfine3 = fine * daysforborrow3;
            cout << "The Total fine of " << student3 << " is Rs " << totalfine3<< endl;   
            
        }
        if (bookNO == 6)
        {
            system("cls");
            printHeader();
            cout << "                   ALL DATA TABLE" << endl <<endl;
            cout << "NAME"<< "\t"<< "STUDENT NAME"<< "\t"<< "DAYS FOR BORROW"<< "\t"<< "TOTAL FINE" << endl;
            cout << name1 << "\t" << student1 << "\t" << daysforborrow1 << "\t" << "\t"<< totalfine1 << endl;
            cout << name2 << "\t" << student2 << "\t" << daysforborrow2 << "\t" << "\t"<< totalfine2 << endl;
            cout << name3 << "\t" << student3 << "\t" << daysforborrow3 << "\t" << "\t"<< totalfine3 << endl;
            
        }
        if (bookNO == 7)
        {
            return 0;
        }
        cout << "Press any key to continue..";
        getch();
        system("cls");
    }
    
}

void printHeader()
{
    cout << "************************************************************" << endl;
    cout << "*                LIBRARY FINE COUNTER                      *" << endl;
    cout << "************************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
int menu()
{
    int bookNO;
    cout << "Select one of the following book number..." << endl;
    cout << "1. Update Fine amount" << endl;
    cout << "2. Add 1st Student Data" << endl;
    cout << "3. Add 2nd Student Data" << endl;
    cout << "4. Add 3rd Student Data" << endl;
    cout << "5. Calculate Total Fine of each Student" << endl;
    cout << "6. View All Data in Table" << endl;
    cout << "7. Exit" << endl;
    cout << "Your choice.. ";
    cin >> bookNO;
    return bookNO;
}
