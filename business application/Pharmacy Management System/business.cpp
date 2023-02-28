#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;
string admin_username = "admin";
string admin_password = "123";
// user entered admin credentials are stored in the following strings;
string get_admin_username;
string get_admin_password;
// employee data arrays
string employee_names[20];
string employee_passwords[20];
string employee_code[20];
// current employee numbers;
int noofemployee = 0;
// medicine numbers
int medicine_number = 0;
// sold medicines number
int no_of_sold_medicines = 0;

//  Medicine Sales Records
// sold medicines record;
string sold_medicines_names[1000];
// sold medicines quantity;
string sold_medicine_quantities[1000];
// amount received;
string amount_received[1000];

// medicine names
string medicines_names[1000];
// medicine weights
string medicines_mass[1000];
// medicine prices
string medicines_prices[1000];
// string medicine quantities
string medicines_quantities[1000];
// a function to validate options;
bool validate_option(int, char);
// convert string to integer
string integer_to_string(int quantity)
{
    string word = to_string(quantity);
    return word;
}
// TO convert String to integer;
int string_to_integer(string quantity)
{

    int integer = stoi(quantity);
    return integer;
}
// gotoxy function
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
// Returns required medicine index;
int medicine_index(string name)
{
    for (int idx = 0; idx < medicine_number; idx++)
    {
        if (medicines_names[idx] == name)
        {
            return idx;
        }
    }
    return 0;
}
bool remove_medicine(string name);
bool isMedicinePresent(string);
char get_option();
void header();
bool validate_numbers(string);
void main_menu();
void admin_header();
bool exit_option(char);
void admin_login_menu();
bool admin_login();
void get_admin_credentials();
void get_admin_login();
void wrong_option();
void show_sales();
void admin_options_menu();
bool Take_Order(string, string);
void update_medicine_price_option();
bool add_medicine_data();
void changemedicineprice(char);
void admin_option_AddMedicine();
void admin_option_Show_inventory();
void admin_option_RemoveMedicine();
void savemedicinesdatainfile();
void readmedicinedata();
void Admin_option_Employee();
bool validate_employee_code();
void read_sold_record_from_file();
void save_sold_record_in_file();
void save_sold_record(string name, string quantity);
string getdata(string, int);

// main
main()
{
    system("cls");

    bool program_running = true;
    while (program_running)
    {
        // Reads Medicine data from a file
        readmedicinedata();
        // Reads Sales record from file
        read_sold_record_from_file();
        system("cls");
        main_menu();
        // To take main Menu Options from user
        char main_menu_option = get_option();
        // if options are valid program will run.
        if (validate_option(3, main_menu_option))
        {
            if (main_menu_option == '1')
            {

                bool admin_running = true;
                while (admin_running)
                {

                    admin_login_menu();
                    char get_admin_option = get_option();

                    if (get_admin_option == '1')
                    {

                        get_admin_credentials();

                        if (admin_login())
                        {
                            bool admin_option_running = true;

                            while (admin_header)
                            {
                                admin_options_menu();
                                char get_admin_menu_option = get_option();
                                if (validate_option(7, get_admin_menu_option))
                                {
                                    if (get_admin_menu_option == '1')
                                    {
                                        bool Taking_order = true;
                                        while (Taking_order)
                                        {
                                            admin_option_Show_inventory();

                                            string name;
                                            string quantity;

                                            cout << "Enter Medicine name:";
                                            cin >> name;

                                            if (isMedicinePresent(name))
                                            {
                                                cout << "Enter Quantity: ";
                                                cin >> quantity;
                                                if (validate_numbers(quantity))
                                                {
                                                    getch();
                                                }
                                                if (Take_Order(name, quantity))
                                                {
                                                    save_sold_record(name, quantity);
                                                    savemedicinesdatainfile();
                                                    save_sold_record_in_file();
                                                    Taking_order = false;
                                                }
                                                else
                                                {

                                                    cout << endl
                                                         << "press 0 to exit or any other key to try again";
                                                    char take_order_again = get_option();
                                                    Taking_order = exit_option(take_order_again);
                                                }
                                            }
                                            else
                                            {
                                                system("cls");
                                                cout << "Medicine not Available" << endl;
                                                cout << "Enter any key to try again or 0 to exit";
                                                Taking_order = exit_option(get_option());
                                            }
                                        }
                                    }
                                    else if (get_admin_menu_option == '2')
                                    {
                                        bool add_medicine_admin_option = true;
                                        while (add_medicine_admin_option)
                                        {
                                            admin_option_AddMedicine();
                                            if (add_medicine_data())
                                            {
                                                savemedicinesdatainfile();
                                                system("cls");
                                                cout << "Medicine is added Successfully";
                                                add_medicine_admin_option = false;
                                            }
                                            else
                                            {
                                                system("cls");
                                                cout << "Medicine is already present";

                                                Sleep(1000);
                                                add_medicine_admin_option = exit_option(get_option());
                                            }
                                        }
                                    }
                                    else if (get_admin_menu_option == '3')
                                    {
                                        while (true)
                                        {
                                            system("cls");
                                            admin_header();
                                            admin_option_Show_inventory();
                                            admin_option_RemoveMedicine();
                                            string name;
                                            getline(cin, name);
                                            if (remove_medicine(name))
                                            {
                                                savemedicinesdatainfile();
                                                system("cls");
                                                cout << "Medicine is Removed";
                                                Sleep(1000);
                                            }
                                            else
                                            {
                                                system("cls");
                                                cout << "Medicine you entered is not present in inventory";
                                                Sleep(1000);
                                            }

                                            break;
                                        }
                                    }

                                    else if (get_admin_menu_option == '4')
                                    {
                                        bool medicine_update_option_running = true;
                                        while (medicine_update_option_running)
                                        {
                                            system("cls");
                                            admin_option_Show_inventory();
                                            update_medicine_price_option();
                                            char selectmedicinenumber = get_option();

                                            if (validate_option(medicine_number + 1, selectmedicinenumber))
                                            {
                                                changemedicineprice(selectmedicinenumber);
                                                savemedicinesdatainfile();
                                                break;
                                            }
                                            else
                                            {
                                                wrong_option();
                                                char option = get_option();
                                                if (option == '0')
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else if (get_admin_menu_option == '5')
                                    {
                                        show_sales();
                                        getch();
                                    }
                                    else if (get_admin_menu_option == '6')
                                    {
                                        system("cls");
                                        Admin_option_Employee();
                                        getch();
                                    }
                                    else if (get_admin_menu_option == '7')
                                    {
                                        bool showing_inventory = true;
                                        while (showing_inventory)
                                        {

                                            admin_option_Show_inventory();
                                            cout << "Press 0 to exit";
                                            char get_inventory_exit = get_option();
                                            if (get_inventory_exit == '0')
                                            {
                                                break;
                                            }
                                        }
                                    }
                                    else if (get_admin_menu_option == '0')
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if (get_admin_option == '0')
                    {
                        break;
                    }
                }
            }
            else if (main_menu_option == '2')
            {
                continue;
            }
            else if (main_menu_option == '0')
            {
                break;
            }
        }

        else
        {
            system("cls");
            gotoxy(0, 18);
            cout << "Wrong Option try again";
            continue;
        }
    }
}
// to get required data from a sentence
string getdata(string sentence, int count)
{
    string word = "";
    int current_count = 1;
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        if (sentence[idx] == ',')
        {
            current_count++;
        }
        else if (current_count == count)
        {
            word = word + sentence[idx];
        }
    }
    return word;
}
// exits if user has pressed 0 else tries again;
bool exit_option(char c)
{
    bool Exit = true;
    if (c == '0')
    {
        Exit = false;
    }

    return Exit;
}
// to read medicine data from medicine file
void readmedicinedata()
{
    fstream file;
    file.open("medicines.txt", ios::in);
    string sentence;

    while (!file.eof())
    {
        string sentence;

        getline(file, sentence);
        if (getdata(sentence, 1) == "")
        {
            break;
        }
        medicines_names[medicine_number] = getdata(sentence, 1);

        medicines_mass[medicine_number] = getdata(sentence, 2);
        medicines_prices[medicine_number] = getdata(sentence, 3);
        medicines_quantities[medicine_number] = getdata(sentence, 4);
        medicine_number++;
    }
    file.close();
}
// save medicines data in file
void savemedicinesdatainfile()
{
    fstream file;
    file.open("medicines.txt", ios::out);
    for (int idx = 0; idx < medicine_number; idx++)
    {
        file << medicines_names[idx] << "," << medicines_mass[idx] << "," << medicines_prices[idx] << "," << medicines_quantities[idx] << endl;
    }
    file.close();
}
// to change medicine price
void changemedicineprice(char selectmedicinenumber)
{
    int selectednumber = selectmedicinenumber;
    selectednumber = selectednumber - 48;
    cout << endl
         << "Price of medicine is " << medicines_prices[selectednumber - 1] << endl;
    string price;
    cout << "Enter new price: ";
    cin >> price;
    medicines_prices[selectednumber - 1] = price;
}
// to check if option is correct.
bool validate_option(int option_numbers, char option)
{

    for (int idx = 48; idx <= option_numbers + 48; idx++)
    {
        if (idx == int(option))
        {
            return true;
        }
    }
    return false;
}
// To validate numbers
bool validate_numbers(string sentence)
{
    char character;
    bool valid;
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        character = sentence[idx];
        int b = character;

        if (b >= 48 && b <= 57)
        {
            valid = true;
        }
        else
        {
            valid = false;
        }
    }
    return valid;
}
// displays if user presses wrong option
void wrong_option()
{
    cout << endl
         << "Selected Wrong option" << endl;
    cout << "Enter 0 to exit or anykey to try again";
}
// TO Get Option from user
char get_option()
{
    char Option = getch();
    // cout << "Enter option: ";

    return Option;
}
// PMS Header
void header()
{
    cout << "*****************************************************" << endl;
    cout << "*****************************************************" << endl;
    cout << "*************Pharmacy Management System**************" << endl;
    cout << "*                                                   *" << endl;
}
// TO show main menu
void main_menu()
{
    header();
    cout << "********************Main Menu************************" << endl;
    cout << "* Enter valid option only                           *" << endl;
    cout << "* Press Requested Key                               *" << endl;
    cout << "*   1:Admin                                         *" << endl;
    cout << "*   2:Employee                                      *" << endl;
    cout << "*   0:Exit                                          *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}
// TO show admin header
void admin_header()
{
    header();
    cout << "************************Admin************************" << endl;
}
// TO show Admin login menu
void admin_login_menu()
{
    system("cls");
    admin_header();
    cout << "*  <login>                                          *" << endl;
    cout << "*  1 to login or 0 to get back                      *" << endl;
    cout << "*  Enter:                                           *" << endl;
    cout << "*    User name:                                     *" << endl;
    cout << "*    Password :                                     *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}
// TO get admin login id and password from user
void get_admin_credentials()
{
    gotoxy(15, 8);
    cin >> get_admin_username;
    gotoxy(15, 9);
    cin >> get_admin_password;
}
// TO check if admin entered password and id is correct
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
// TO Show Admin option menu
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
    cout << "*     4. Update Medicines Price.                    *" << endl;
    cout << "*     5. Show Sales Record.                         *" << endl;
    cout << "*     6. Employee                                   *" << endl;
    cout << "*     7. Show inventory.                            *" << endl;
    cout << "*     0. Back                                       *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}
// TO update medicine price
void update_medicine_price_option()
{

    cout << "*                                                   *" << endl;
    cout << " Enter medicine number:";
}
// To take order of medicine from user
bool Take_Order(string name, string quantity)
{

    if (isMedicinePresent(name))
    {
        int intquantity = string_to_integer(quantity);
        int intremainingmedicines = string_to_integer(medicines_quantities[medicine_index(name)]);

        if (intquantity > intremainingmedicines)
        {
            system("cls");
            cout << "Required medicine only has " << intremainingmedicines << " quantities available" << endl;
            return false;
        }
        else if (intquantity < intremainingmedicines)
        {
            intremainingmedicines = intremainingmedicines - intquantity;
            //
            medicines_quantities[medicine_index(name)] = integer_to_string(intremainingmedicines);
            return true;
        }
        else if (intquantity == intremainingmedicines)
        {
            remove_medicine(name);
            return true;
        }
    }
    else
    {
        cout << endl<< "Medicine is not available" << endl;
        return false;
    }
}
// TO Show Admin Option add medicine
void admin_option_AddMedicine()
{
    system("cls");
    admin_header();
    cout << "*                                                   *" << endl;
    cout << "* <Add Medicines>                                   *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*  Medicine name:                                   *" << endl;
    cout << "*  Medicine weight:                                 *" << endl;
    cout << "*  Medicine Price:                                  *" << endl;
    cout << "*  Medicine quantities:                             *" << endl;
    cout << "*****************************************************" << endl;
}
// TO Add medicines to inventory
bool add_medicine_data()
{
    string medicine;
    gotoxy(17, 8);
    cin >> medicine;
    if (!isMedicinePresent(medicine))
    {
        medicines_names[medicine_number] = medicine;
        gotoxy(19, 9);
        cin >> medicines_mass[medicine_number];
        gotoxy(18, 10);
        cin >> medicines_prices[medicine_number];
        gotoxy(23, 11);
        cin >> medicines_quantities[medicine_number];

        gotoxy(0, 0);
        medicine_number++;
        return true;
    }
    else
    {
        return false;
    }
}
// TO show remaining medicines.
void admin_option_Show_inventory()
{
    system("cls");
    admin_header();
    cout << "*  Medicine name(weight)                            *" << endl;
    cout << "-----------------------------------------------------" << endl;
    for (int idx = 0; idx < medicine_number; idx++)
    {
        cout << "   Medicine no: " << idx + 1 << endl;
        cout << "   Name: " << medicines_names[idx] << endl;
        cout << "   Weight: " << medicines_mass[idx] << "mg" << endl;
        cout << "   Price: " << medicines_prices[idx] << "Pkr" << endl;
        cout << "   Quantities: " << medicines_quantities[idx] << endl;
        cout << "----------------------------------------------------";
        cout << endl;
    }
}
// To show admin options to user
void admin_option_RemoveMedicine()
{

    cout << "*                                                   *" << endl;
    cout << "*   <Enter Medicine name to remove>                 *" << endl;
    cout << "*                                                   *" << endl;
    cout << "    Medicine name:";
}
// TO remove medicines from medicines list.
bool remove_medicine(string name)
{
    bool medicine_removed = false;
    if (isMedicinePresent(name))
    {
        for (int idx = 0; idx < medicine_number; idx++)
        {
            if (medicines_names[idx] == name)
            {
                for (int itx = idx; itx < medicine_number; itx++)
                {
                    if (itx == medicine_number - 1)
                    {
                        medicines_names[itx] = '\0';
                        medicines_mass[itx] = '\0';
                        medicines_prices[itx] = '\0';
                        medicines_quantities[itx] = '\0';
                        medicine_number = medicine_number - 1;
                    }
                    medicines_names[itx] = medicines_names[itx + 1];
                    medicines_mass[itx] = medicines_mass[itx + 1];
                    medicines_prices[itx] = medicines_prices[itx + 1];
                    medicines_quantities[itx] = medicines_quantities[itx + 1];
                }
                medicine_removed = true;
                break;
            }
        }
    }
    return medicine_removed;
}
// check if medicine is already present
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
    return present;
}
// used to show sales record
void show_sales()
{
    for (int idx = 0; idx < no_of_sold_medicines; idx++)
    {
        cout << "Order no : " << idx + 1 << endl;
        cout << "Medicine name: ";
        cout << sold_medicines_names[idx] << endl;
        cout << "Quantities sold: ";
        cout << sold_medicine_quantities[idx] << endl;
        cout << "Payment Received: ";
        cout << amount_received[idx] << endl
             << endl;
        cout << "-------------------------------------" << endl;
    }
}
// to store sales in an array
void save_sold_record(string name, string quantity)
{
    sold_medicines_names[no_of_sold_medicines] = name;
    sold_medicine_quantities[no_of_sold_medicines] = quantity;
    int quantities = string_to_integer(quantity);
    string strprice = medicines_prices[medicine_index(name)];
    int price = string_to_integer(strprice);
    amount_received[no_of_sold_medicines] = integer_to_string(price * quantities);
    no_of_sold_medicines++;
}
// to Store sales in a file
void save_sold_record_in_file()
{
    fstream file;
    file.open("sales.txt", ios::out);
    for (int idx = 0; idx < no_of_sold_medicines; idx++)
    {
        file << sold_medicines_names[idx] << "," << sold_medicine_quantities[idx] << "," << amount_received[idx] << endl;
    }
    file.close();
}
// To read sales record from file
void read_sold_record_from_file()
{
    fstream file;
    file.open("sales.txt", ios::in);
    while (!file.eof())
    {
        string sentence;
        getline(file, sentence);
        if (getdata(sentence, 1) == "")
        {
            break;
        }
        sold_medicines_names[no_of_sold_medicines] = getdata(sentence, 1);
        sold_medicine_quantities[no_of_sold_medicines] = getdata(sentence, 2);
        amount_received[no_of_sold_medicines] = getdata(sentence, 3);
        no_of_sold_medicines++;
    }
}

void Admin_option_Employee() 
{
    admin_header();
    cout << "*                                                   *" << endl;
    cout << "* Employee Management                               *" << endl;
    cout << "*      Press the following keys                     *" << endl;
    cout << "*          1. Create Employee List                  *" << endl;
    cout << "*          2. See Employee List                     *" << endl;
    cout << "*          3. Change Employee Features              *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}