#include <iostream>
#include <windows.h>
using namespace std;
string admin_username = "admin";
string admin_password = "123";
// user entered admin credentials are stored in the following strings;
string get_admin_username;
string get_admin_password;

string employee_names[20];
string employee_passwords[20];
string employee_roles[20];
// medicine numbers
int medicine_number = 0;
// medicine names
string medicines_names[1000];
// medicine weights
string medicines_mass[1000];
// medicine prices
string medicines_prices[1000];
// a function to evaluate options.
bool validate_option(int, int);

// gotoxy function ykikyk
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
// program to remove medicine
void remove_medicine();
// to check if medicine is present
void isMedicinepresent();
// takes option from user;
int get_option();
// prints header;
void header();
// prints main menu;
void main_menu();
// prints admin header;
void admin_header();
// prints admin login menu;
void admin_login_menu();
// returns true if the user entered credentials matches admin credentials
bool admin_login();
// get admin credentials from user.
void get_admin_credentials();

void get_admin_login();

// prints admin options menu;
void admin_options_menu();
// gets medicine data from user;
void add_medicine_data();
// function to add medicine()
void admin_option_AddMedicine();
// function to remove medicine()
void admin_option_RemoveMedicine();
// get medicine name for removing medicine
void remove_medicine();

// main
main()
{
    system("cls");

    main_menu();
    bool running = true;
    int main_menu_option = get_option();

    while (true)
    {
        if (validate_option(2, main_menu_option))
        {
            system("cls");
            admin_login_menu();
            get_admin_credentials();

            if (admin_login() == true)
            {
                admin_options_menu();
                int admin_option = get_option();
                while (true)
                {
                    if (validate_option(5, admin_option))
                    {
                        if (admin_option == 1)
                        {
                        }
                        if (admin_option == 2)
                        {
                            admin_option_AddMedicine();
                            add_medicine_data();
                            return false;
                        }
                        if (admin_option == 3)
                        {
                            admin_option_RemoveMedicine();
                            return false;
                        }
                        if (admin_option == 4)
                        {
                        }
                    }
                }
            }

            else
            {
                cout << "Wrong admin Credentials type again: " << endl;
            }
        }
    }
}

bool validate_option(int option_numbers, int option)
{
    int valid_options[option_numbers];
    for (int idx = 0; idx < option_numbers; idx++)
    {
        valid_options[idx] = idx;
    }
    bool valid = false;
    for (int idx = 0; idx < option_numbers; idx++)
    {
        if (option == valid_options[idx])
        {
            valid = true;
            return valid;
        }
    }
    return valid;
}

int get_option()
{
    int Option;
    cout << "Enter option: ";
    cin >> Option;
    return Option;
}

void header()
{
    cout << "*****************************************************" << endl;
    cout << "*****************************************************" << endl;
    cout << "*************Pharmacy Management System**************" << endl;
    cout << "*                                                   *" << endl;
}

void main_menu()
{
    header();
    cout << "********************Main Menu************************" << endl;
    cout << "*                                                   *" << endl;
    cout << "* Press Requested Key                               *" << endl;
    cout << "*   1:Admin                                         *" << endl;
    cout << "*   2:Employee                                      *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

void admin_header()
{
    header();
    cout << "************************Admin************************" << endl;
}

void admin_login_menu()
{
    admin_header();
    cout << "*  <login>                                          *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*  Enter:                                           *" << endl;
    cout << "*    User name:                                     *" << endl;
    cout << "*    Password :                                     *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

void get_admin_credentials()
{
    gotoxy(15, 8);
    cin >> get_admin_username;
    gotoxy(15, 9);
    cin >> get_admin_password;
}

bool admin_login()
{

    if (get_admin_username == admin_username)
    {
        if (get_admin_password == admin_password)
        {
            return true;
        }
    }
    return false;
}

void admin_options_menu()
{
    system("cls");

    admin_header();
    cout << "*   user > " << admin_username << "                                    *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*   Press Requested Key:                            *" << endl;
    cout << "*     1. Take Order.                                *" << endl;
    cout << "*     2. Add Medicines.                             *" << endl;
    cout << "*     3. Remove Medicines.                          *" << endl;
    cout << "*     4. Update Medicines price.                    *" << endl;
    cout << "*     5. Show Customer Records.                     *" << endl;
    cout << "*     6. Employee                                   *" << endl;
    cout << "*     7. Show inventory.                            *" << endl;
    cout << "*     0. Back                                       *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

void admin_option_AddMedicine()
{
    system("cls");
    admin_header();
    cout << "*                                                   *" << endl;
    cout << "* <Add Medicines>                                   *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*  Medicine name:                                   *" << endl;
    cout << "*  Medicine weight:                                 *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

void add_medicine_data()
{
    gotoxy(17, 8);
    cin >> medicines_names[medicine_number];
    gotoxy(19, 9);
    cin >> medicines_mass[medicine_number];

    gotoxy(0, 16);
    medicine_number++;
}

void admin_option_RemoveMedicine()
{
    system("cls");
    admin_header();

    cout << "*                                                   *" << endl;
    cout << "*   <remove medicine>                               *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*    Medicine name:                                 *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

void remove_medicine()
{
    gotoxy(8, 19);
    string name;
    cin >> name;

    if (isMedicinePresent(name))
    {
        int temporary;
        for (int idx = 0; idx < medicine_number; idx++)
        {
            if (medicines_names[idx] == name)
            {   int next_medicine = 1;
                for (int itx = idx; itx < medicine_number; itx++)
                {
                    medicines_names[itx] = medicines_names[itx + next_medicine];
                }
                break;
            }
        }
    }
}

bool isMedicinePresent(string name)
{
    bool present = false;
    for (int idx = 0; idx < medicine_number; idx++)
    {
        if (medicines_names[idx] == name)
        {
            present = true;
            return present;
        }
    }
    return false;
}
