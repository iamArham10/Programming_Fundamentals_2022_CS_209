#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;
const int sleepSpeed = 500;
string admin_username = "admin";
string admin_password = "12345678";
// user entered admin credentials are stored in the following strings;
string get_admin_username;
string get_admin_password;
// user entered employee credentials are storered in string
string current_employee_username;
string current_employee_password;
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
bool remove_medicine(string name);                                 // to removes medicine from inventory
bool check_digit_present(string, char);                            // To Check if a character is present in a string
bool isMedicinePresent(string);                                    // checks if a medicine is present or not
bool IsDigitRepeating(string);                                     // returns true if there are any repeated digits
bool IsCodeValid(string);                                          // checks if a employee code is valid
char get_option();                                                 // to get option from a user
string take_password(int);                                         // inputs password and prints * on its place // takes no of password digit a parameter
void header();                                                     // prints header of pharmacy management system
void invalid_output();                                             // prints invalid entry
bool validate_quantity(string);                                    // to validate quantities returns falls if user enterd number is 0 or negative
bool validate_numbers(string);                                     // returns true if user entered string has only digits in it
void main_menu();                                                  // prints main menu
void admin_header();                                               // prints admin header
bool exit_option();                                                // returns false if user has pressed 0 else falls
void admin_login_menu();                                           // Prints Admin Login Menu
bool admin_login();                                                // checks if user entered credentials are valid or not
void get_admin_credentials();                                      // Takes Admin Credentials
void wrong_option();                                               // prints selected wrong option
void admin_options_menu();                                         // Prints Admin Menu Options
bool Take_Order(string, string);                                   // take order function takes medicine name and quantity as a Parameter
void update_medicine_price_option();                               // Prints Update Medicine price Option
void AddMedicine_Menu();                                           // Shows Add medicine Menu to user
bool add_medicine_data();                                          // Used to Add medicine to inventory
void changemedicineprice(char);                                    // Change medicine price takes Medicine number as Parameter
void admin_option_Show_inventory();                                // To print Inventory
void admin_option_RemoveMedicine();                                // Prints Remove Medicine Menu
void admin_option_Show_Add_Employee_Option();                      // prints admin option add employee menu
void Employee_Login_menu();                                        // Prints Employee Login Menu
bool Check_Employee_credentials(string username, string password); // returns true if user entered employee credentials are matched with any employee
bool Add_Employee_Option();                                        // inputs Employee Username password and code from user
bool Add_Employee(string username, string password, string code);  // Adds Employee data in its respective arrays
void remove_Employe_menu();                                        // Shows Remove Employee Menu
bool remove_Employee(string name);                                 // To remove Employee from array
void Show_Employee_List();                                         // Prints Current Employee Lists
void savemedicinesdatainfile();                                    // To Save Medicine Data in a file
void readmedicinedata();                                           // To Read Medicine Data from file
bool changeEmployeeFeature();                                      // To change Employee Feature
int GetEmployeeIndex(string);                                      // retursn entered employee index
void Admin_option_Employee();                                      // Prints admin Options Employee Management Menu
bool get_employee_credentials();                                   // Gets employee username and password from user
bool isEmployeePresent(string);                                    // Returns true if Entered Employee name is already present in an array
void employee_options_menu();                                      // Prints Employee Option Menu
void save_employee_credentials();                                  // to save employee credentials in a file
void read_employee_credentials();                                  // To Read Employee Credentials
void read_sold_record_from_file();                                 // To read Sold data Record from a file
void save_sold_record_in_file();                                   // To save Sold record data in a file
void save_sold_record(string name, string quantity);               // Saves sold record in an array
void show_feature_not_available();
string getdata(string, int); // To get required data separated by commas in a sentence read from a file.
// All option functions
void To_Take_Order();
void To_Add_Medicine();
void To_Remove_Medicine();
void To_Change_Medicine_price();
void show_sales();
void To_Show_Inventory();
// main
main()
{
    system("cls");

    // Reads Medicine data from a file
    readmedicinedata();
    // Reads Sales record from file
    read_sold_record_from_file();
    // Reads Employee Credentials from a file
    read_employee_credentials();
    bool program_running = true;
    while (program_running)
    {

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
                                       
                                        To_Take_Order();
                                    }
                                    else if (get_admin_menu_option == '2')
                                    {
                                        
                                        To_Add_Medicine();
                                    }
                                    else if (get_admin_menu_option == '3')
                                    {
                                        To_Remove_Medicine();
                                    }

                                    else if (get_admin_menu_option == '4')
                                    {
                                        To_Change_Medicine_price();
                                    }
                                    else if (get_admin_menu_option == '5')
                                    {
                                        show_sales();
                                    }
                                    else if (get_admin_menu_option == '6')
                                    {

                                        bool admin_option_employee_running = true;
                                        while (admin_option_employee_running)
                                        {
                                            system("cls");
                                            Admin_option_Employee();
                                            char get_admin_option_employee = getch();
                                            if (get_admin_option_employee == '0')
                                            {
                                                admin_option_employee_running = false;
                                            }
                                            else if (get_admin_option_employee == '1')
                                            {
                                                bool addemployeerunning = true;
                                                while (addemployeerunning)
                                                    if (Add_Employee_Option())
                                                    {
                                                        save_employee_credentials();
                                                        addemployeerunning = false;
                                                    }
                                                    else
                                                    {
                                                        system("cls");
                                                        cout << endl
                                                             << "Enter 0 to exit or any other key to try again";
                                                        char c = getch();
                                                        if (c == '0')
                                                        {
                                                            addemployeerunning == false;
                                                        }
                                                    }
                                            }
                                            else if (get_admin_option_employee == '2')
                                            {
                                                system("cls");
                                                Show_Employee_List();
                                                cout << "Press Any key To Exit";
                                                getch();
                                            }
                                            else if (get_admin_option_employee == '3')
                                            {

                                                changeEmployeeFeature();
                                                save_employee_credentials();
                                            }
                                            else if (get_admin_option_employee == '4')
                                            {
                                                remove_Employe_menu();
                                                save_employee_credentials();
                                            }
                                        }
                                    }
                                    else if (get_admin_menu_option == '7')
                                    {    
                                        To_Show_Inventory();
                                    }
                                    else if (get_admin_menu_option == '0')
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            system("cls");
                            cout << "Wrong Admin Credentials";
                            Sleep(sleepSpeed);
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

                while (true)
                {
                    system("cls");
                    Employee_Login_menu();

                    char c = getch();
                    if (c == '0')
                    {
                        break;
                    }
                    else if (c == '1')
                    {
                        get_employee_credentials();
                        if (Check_Employee_credentials(current_employee_username, current_employee_password))
                        {
                            bool Employee_Menu_running = true;
                            while (Employee_Menu_running)
                            {
                                employee_options_menu();
                                char Employee_Menu_Option = getch();
                                if (Employee_Menu_Option == '1')
                                {
                                    if (check_digit_present(employee_code[GetEmployeeIndex(current_employee_username)], Employee_Menu_Option))
                                    {
                                        To_Take_Order();
                                    }
                                    else
                                    {
                                        system("cls");
                                        cout << "Feature is not allowed";
                                        getch();
                                    }
                                }
                                if (Employee_Menu_Option == '2')
                                {
                                    if (check_digit_present(employee_code[GetEmployeeIndex(current_employee_username)], Employee_Menu_Option))
                                    {
                                        To_Add_Medicine();
                                    }
                                    else
                                    {
                                        system("cls");
                                        cout << "Feature is not allowed";
                                        getch();
                                    }
                                }
                                if (Employee_Menu_Option == '3')
                                {
                                    if (check_digit_present(employee_code[GetEmployeeIndex(current_employee_username)], Employee_Menu_Option))
                                    {
                                        To_Remove_Medicine();
                                    }
                                    else
                                    {
                                        system("cls");
                                        cout << "Feature is not allowed";
                                        getch();
                                    }
                                }
                                if (Employee_Menu_Option == '4')
                                {
                                    if (check_digit_present(employee_code[GetEmployeeIndex(current_employee_username)], Employee_Menu_Option))
                                    {
                                        To_Change_Medicine_price();
                                    }
                                }
                                if (Employee_Menu_Option == '5')
                                {
                                    show_sales();
                                }
                                if (Employee_Menu_Option == '6')
                                {
                                    To_Show_Inventory();
                                }
                                if (Employee_Menu_Option == '0')
                                {
                                    Employee_Menu_running = false;
                                }
                            }
                        }
                    }
                }
            }
            else if (main_menu_option == '0')
            {
                break;
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
}
void To_Take_Order()
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
            if (validate_numbers(quantity) && validate_quantity(quantity))
            {
                if (Take_Order(name, quantity))
                {
                    system("cls");
                    cout << "Medicine Purchased" << endl;
                    save_sold_record(name, quantity);
                    savemedicinesdatainfile();
                    save_sold_record_in_file();
                    Taking_order = false;
                    Sleep(sleepSpeed);
                }
                else
                {

                    Taking_order = exit_option();
                }
            }
            else
            {
                invalid_output();
                Taking_order = exit_option();
                Sleep(sleepSpeed);
            }
        }
        else
        {
            system("cls");
            cout << "Medicine not Available" << endl;

            Taking_order = exit_option();
        }
    }
}
void To_Add_Medicine()
{
    bool Add_Medicine = true;
    while (Add_Medicine)
    {
        AddMedicine_Menu();
        if (add_medicine_data())
        {
            savemedicinesdatainfile();
            system("cls");
            cout << "Medicine is added Successfully";
            Add_Medicine = false;
        }
        else
        {
            system("cls");
            cout << "Medicine is already present" << endl;
            Sleep(sleepSpeed);
            Add_Medicine = exit_option();
        }
    }
}
void To_Remove_Medicine()
{
    bool Removing_Medicine = true;
    while (Removing_Medicine)
    {
        system("cls");
        admin_header();
        admin_option_Show_inventory();
        admin_option_RemoveMedicine();
        string name;
        getline(cin >> ws, name);
        if (remove_medicine(name))
        {
            savemedicinesdatainfile();
            system("cls");
            cout << "Medicine is Removed";
            Sleep(sleepSpeed);
        }
        else
        {
            system("cls");
            cout << "Medicine you entered is not present in inventory";
            Sleep(sleepSpeed);
        }

        Removing_Medicine = false;
    }
}
void To_Change_Medicine_price()
{
    bool Changing_Price = true;
    while (Changing_Price)
    {
        system("cls");
        admin_option_Show_inventory();
        update_medicine_price_option();
        char selectmedicinenumber = get_option();

        if (validate_option(medicine_number + 1, selectmedicinenumber))
        {
            changemedicineprice(selectmedicinenumber);
            savemedicinesdatainfile();
            Changing_Price = false;
        }
        else
        {
            wrong_option();
            char option = get_option();
            if (option == '0')
            {
                Changing_Price = false;
                ;
            }
        }
    }
}
void show_sales()
{
    system("cls");
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
    cout << "Press Any key to Exit";
    getch();
}
void To_Show_Inventory()
{
    bool Showing_Inventory = true;
    while (Showing_Inventory)
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
bool exit_option()
{
    cout << "Enter any key to try again or 0 to exit";
    char c = getch();
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
        getline(file >> ws, sentence);
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
         << "Price of medicine is " << medicines_prices[selectednumber - 1] << "Pkr" << endl;
    string price;
    cout << "Enter new price: ";
    cin >> price;
    while ((!validate_numbers(price)) || (!validate_quantity(price)))
    {
        cout << "Invalid Entry Try Again" << endl;
        cout << "Enter new price: ";
        cin >> price;
    }

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
    bool valid = true;
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        character = sentence[idx];
        int b = int(character);

        if ((b < 48 || b > 57))
        {
            valid = false;
            break;
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

void employee_header()
{
    header();
    cout << "***********************Employee**********************" << endl;
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
    get_admin_password = take_password(8);
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
    cout << " Select Medicine Number : ";
}
// To take order of medicine from user
bool Take_Order(string name, string quantity)
{

    if (isMedicinePresent(name))
    {
        int intquantity = string_to_integer(quantity);
        int intremainingmedicines = string_to_integer(medicines_quantities[medicine_index(name)]);
        int intmedicineprice = string_to_integer(medicines_prices[medicine_index(name)]);

        if (intquantity > intremainingmedicines)
        {
            system("cls");
            cout << "Required medicine only has " << intremainingmedicines << " quantities available" << endl;
            return false;
        }
        else if (intquantity < intremainingmedicines)
        {
            intremainingmedicines = intremainingmedicines - intquantity;
            cout << endl
                 << "Your Total is " << intquantity * intmedicineprice << endl;
            cout << "Press Any key To continue";
            getch();
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
        cout << endl
             << "Medicine is not available" << endl;
        return false;
    }
}
// TO Show Admin Option add medicine
void AddMedicine_Menu()
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
        while (!validate_quantity(medicines_mass[medicine_number]))
        {
            gotoxy(19, 9);
            cin >> medicines_mass[medicine_number];
        }

        gotoxy(18, 10);
        cin >> medicines_prices[medicine_number];
        while (!validate_quantity(medicines_prices[medicine_number]))
        {
            gotoxy(18, 10);
            cin >> medicines_prices[medicine_number];
        }

        gotoxy(23, 11);
        cin >> medicines_quantities[medicine_number];
        while (!validate_quantity(medicines_quantities[medicine_number]))
        {
            gotoxy(23, 11);
            cin >> medicines_quantities[medicine_number];
        }
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
// shows remove Employee Menu;
void remove_Employe_menu()
{
    system("cls");
    Show_Employee_List();
    cout << endl;
    cout << "Enter Employee Name: ";
    string name;
    getline(cin >> ws, name);
    if (remove_Employee(name))
    {
        save_employee_credentials();
        system("cls");
        cout << "Employee Is Removed";
        Sleep(sleepSpeed);
    }
    else
    {
        system("cls");
        cout << "Employee you entered is not present" << endl;
        Sleep(sleepSpeed);
    }
}
// TO remove Employee
bool remove_Employee(string name)
{
    bool employee_removed = false;
    if (isEmployeePresent(name))
    {
        for (int idx = 0; idx < noofemployee; idx++)
        {
            if (employee_names[idx] == name)
            {
                for (int itx = idx; itx < noofemployee; itx++)
                {
                    if (itx == noofemployee - 1)
                    {
                        employee_names[itx] = '\0';
                        employee_passwords[itx] = '\0';
                        employee_code[itx] = '\0';
                        noofemployee = noofemployee - 1;
                    }
                    employee_names[itx] = employee_names[itx + 1];
                    employee_passwords[itx] = employee_passwords[itx + 1];
                    employee_code[itx] = employee_code[itx + 1];
                }
                employee_removed = true;
                break;
            }
        }
    }
    return employee_removed;
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
        getline(file >> ws, sentence);
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
// To show admin option Employee Management
void Admin_option_Employee()

{
    admin_header();
    cout << "*                                                   *" << endl;
    cout << "* Employee Management                               *" << endl;
    cout << "*  Press the following keys                         *" << endl;
    cout << "*    1. Create Employee List                        *" << endl;
    cout << "*    2. See Employee List                           *" << endl;
    cout << "*    3. Change Employee Features                    *" << endl;
    cout << "*    4. Delete Employee                             *" << endl;
    cout << "*    0. Exit                                        *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}
// shows Admin Option Add Employee
void admin_option_Show_Add_Employee_Option()
{
    admin_header();
    cout << "* Add Employee                                      *" << endl;
    cout << endl;
}
// to add Employee in an Employee array
bool Add_Employee(string username, string password, string code)
{
    bool is_employee_added = true;
    if (isEmployeePresent(username))
    {
        cout << "Name is already Present";
        is_employee_added = false;
    }
    else if (!IsCodeValid(code))
    {
        cout << "Invalid Code";
        is_employee_added = false;
    }
    else
    {
        employee_names[noofemployee] = username;
        employee_passwords[noofemployee] = password;
        employee_code[noofemployee] = code;
        noofemployee++;
        is_employee_added = true;
    }
    Sleep(sleepSpeed);
    return is_employee_added;
}
// to check if new entered employee name is already registered
bool isEmployeePresent(string username)
{
    bool EmployeeisPresent = false;
    for (int idx = 0; idx < noofemployee; idx++)
    {
        if (employee_names[idx] == username)
        {
            EmployeeisPresent = true;
            break;
        }
    }
    return EmployeeisPresent;
}
// add Employee function
bool Add_Employee_Option()
{
    bool Add_Employee_Option_Running = true;
    while (Add_Employee_Option_Running)
    {
        system("cls");
        admin_option_Show_Add_Employee_Option();
        cout << "Enter Employee User name: ";
        string username;
        cin >> username;
        cout << "Enter Employee Password: ";
        string userpassword;
        userpassword = take_password(8);
        cout << endl
             << "Enter Employee features code: ";
        string code;
        cin >> code;
        if (Add_Employee(username, admin_password, code))
        {
            cout << "Employee Added Successfully";
            Add_Employee_Option_Running = true;
            break;
            Sleep(sleepSpeed);
        }
    }
    return Add_Employee_Option_Running;
}

// saves Employee credentials in a file
void save_employee_credentials()
{
    fstream file;
    file.open("EmployeeCredentials.txt", ios::out);
    for (int idx = 0; idx < noofemployee; idx++)
    {
        file << employee_names[idx] << "," << employee_passwords[idx] << "," << employee_code[idx] << endl;
    }
    file.close();
}

void read_employee_credentials()
{
    fstream file;
    file.open("EmployeeCredentials.txt", ios::in);
    string sentence = "";
    while (!file.eof())
    {
        getline(file >> ws, sentence);
        if (getdata(sentence, 1) == "")
        {
            break;
        }
        employee_names[noofemployee] = getdata(sentence, 1);
        employee_passwords[noofemployee] = getdata(sentence, 2);
        employee_code[noofemployee] = getdata(sentence, 3);
        noofemployee++;
    }
    file.close();
}
// To check if employees code is valid
bool IsCodeValid(string code)
{
    bool IsValid = true;

    if (validate_numbers(code) == false)
    {
        IsValid = false;
    }
    if (IsDigitRepeating(code) == true)
    {
        IsValid = false;
    }
    return IsValid;
}
// Returnrs false if a digit is number in a number;
bool IsDigitRepeating(string code)
{
    bool IsRepeating = false;
    int firstdigit;
    int seconddigit;
    for (int idx = 0; code[idx] != '\0'; idx++)
    {
        firstdigit = code[idx];
        for (int itx = idx + 1; code[itx] != '\0'; itx++)
        {
            if (idx == itx)
            {
                continue;
            }
            seconddigit = code[itx];
            if (seconddigit == firstdigit)
            {
                IsRepeating = true;
                return IsRepeating;
            }
        }
    }
    return IsRepeating;
}
// admin option Employee Management see employee list;
void Show_Employee_List()
{
    for (int idx = 0; idx < noofemployee; idx++)
    {
        cout << "Employee no: " << idx + 1 << endl;
        cout << endl;
        cout << "Name: " << employee_names[idx] << endl;
        cout << "Code: " << employee_code[idx] << endl;
        cout << "------------------------------------" << endl;
    }
}
// to take password valid password from user.
string take_password(int no_of_characters)
{
    string password;
    char c;
    for (int idx = 0; idx < no_of_characters; idx++)
    {
        c = getch();
        cout << "*";
        password = password + c;
    }

    while (true)
    {
        char Enter = getch();
        if (Enter == 13)
        {
            break;
        }
    }

    return password;
}
// to validate number of amount
bool validate_quantity(string quantity)
{
    int Quantity = stoi(quantity);

    bool IsValid = true;
    if (Quantity < 0 || Quantity == 0)
    {
        IsValid = false;
    }
    return IsValid;
}
// prints that Employee doesn't have that feature available
void show_feature_not_available()
{
    system("cls");
    cout << "Feature is not allowed";
    getch();
}
// prints that user has entered an invalid entry
void invalid_output()
{
    system("cls");
    cout << "InValid Entry" << endl;
}
// returns Employee index
int GetEmployeeIndex(string name)
{
    for (int idx = 0; idx < noofemployee; idx++)
    {
        if (employee_names[idx] == name)
        {
            return idx;
        }
    }
}
bool changeEmployeeFeature()
{
    while (true)
    {
        system("cls");
        Show_Employee_List();
        cout << "Enter Employee Name: ";
        string name;
        getline(cin >> ws, name);
        if (isEmployeePresent(name))
        {
            cout << "Current Employee Code is " << employee_code[GetEmployeeIndex(name)] << endl;
            cout << "Enter new code: ";
            string code;
            getline(cin >> ws, code);
            while (!IsCodeValid(code))
            {
                cout << "Invalid input" << endl;
                cout << "Type Again: ";
                getline(cin >> ws, code);
            }
            employee_code[GetEmployeeIndex(name)] = code;
            system("cls");
            cout << "Emplyee feature changed successfully" << endl;
            return exit_option();
            Sleep(sleepSpeed);
        }
        else
        {
            invalid_output();
            cout << "Enter any key to try again or 0 to exit";
            char c = getch();
            if (c == '0')
            {
                return false;
            }
            Sleep(sleepSpeed);
            return false;
        }
    }
}

void Employee_Login_menu()
{
    employee_header();
    cout << "*  <login>                                          *" << endl;
    cout << "*  1 to login or 0 to get back                      *" << endl;
    cout << "*  Enter:                                           *" << endl;
    cout << "*    User name:                                     *" << endl;
    cout << "*    Password :                                     *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

bool get_employee_credentials()
{
    gotoxy(15, 8);
    cin >> current_employee_username;
    gotoxy(15, 9);
    current_employee_password = take_password(8);
}

bool Check_Employee_credentials(string username, string password)
{
    bool EmployeeLogin;
    for (int idx = 0; idx < noofemployee; idx++)
    {
        if (username == employee_names[idx])
        {
            if (password == employee_passwords[idx])
            {
                system("cls");
                cout << "Employee Logged in successfully" << endl;
                EmployeeLogin = true;
                break;
            }
            else
            {
                system("cls");
                cout << "Wrong Password" << endl;
                EmployeeLogin = false;
                break;
            }
        }
        else
        {
            system("cls");
            cout << "Employee Not Present";
            EmployeeLogin = false;
            break;
        }
    }
    Sleep(sleepSpeed);
    return EmployeeLogin;
}
// prints Employee Options Menu
void employee_options_menu()
{
    system("cls");
    employee_header();
    cout << "   <" << current_employee_username << ">" << endl;
    cout << "*                                                   *" << endl;
    cout << "*   Press Requested Key:                            *" << endl;
    cout << "*     1. Take Order.                                *" << endl;
    cout << "*     2. Add Medicines.                             *" << endl;
    cout << "*     3. Remove Medicines.                          *" << endl;
    cout << "*     4. Update Medicines Price.                    *" << endl;
    cout << "*     5. Show Sales Record.                         *" << endl;
    cout << "*     6. Show inventory.                            *" << endl;
    cout << "*     0. Back                                       *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

// checks if a digit is present or not
bool check_digit_present(string code, char c)
{
    bool isPresent = false;
    for (int idx = 0; code[idx] != '\0'; idx++)
    {
        if (code[idx] == c)
        {
            isPresent = true;
        }
    }
    return isPresent;
}