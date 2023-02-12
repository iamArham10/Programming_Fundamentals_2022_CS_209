#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
string admin_username = "admin";
string admin_password = "123";
// user entered admin credentials are stored in the following strings;
string get_admin_username;
string get_admin_password;
// employee data arrays
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
// string medicine quantities
string medicines_quantities[1000];
// a function to evaluate options;

bool validate_option(int, char);
// convert string to integer
string integer_to_string(int quantity)
{
    char word[10];
    int idx = 0;
    int n = quantity;
    int digit = 1;

    while (n > 0)
    {   
        
        if (n > 0 && n < 10)
        {
            break;
        }
        n = n/10;
        digit = digit * 10;

    }

    while (quantity > 0)
    {
        word[idx] = quantity/digit + 48;
        quantity = quantity%digit;
        digit = digit/10;
        word[idx + 1] = '\0';
        idx++;
        

    }
    string name = word;
    return name;
}
// TO convert String to integer;
int string_to_integer(string quantity)
{

    int sum = 0;
    for (int idx = 0; quantity[idx] != '\0'; idx++)
    {
        int a = quantity[idx];
        sum = sum * 10 + (a - 48);
        ;
    }
    return sum;
}
// gotoxy function;
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
void remove_medicine(string name);
bool isMedicinePresent(string);
int get_option();
void header();
void main_menu();
void admin_header();
void admin_login_menu();
bool admin_login();
void get_admin_credentials();
void get_admin_login();
void admin_options_menu();
void Take_order_menu();
bool Take_Order(string, string);
void update_medicine_price_option();
bool add_medicine_data();
void admin_option_AddMedicine();
void admin_option_Show_inventory();
void admin_option_RemoveMedicine();
void remove_medicine();

// main
main()
{
    system("cls");
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
                                        bool Taking_order = true;
                                        while (Taking_order)
                                        {
                                            Take_order_menu();

                                            string name;
                                            string quantity;
                                            gotoxy(26,6);
                                            cin.ignore();
                                            getline(cin,name);
                                            gotoxy(21,7);
                                            cin >> quantity;
                                            if(Take_Order(name, quantity)){
                                                break;
                                            }
                                            else {
                                                
                                                
                                                char take_order_again = get_option();
                                                

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
                                                add_medicine_admin_option = false;
                                            }
                                        }
                                    }
                                    else if (get_admin_menu_option == '3')
                                    {
                                        while (true)
                                        {
                                            admin_option_RemoveMedicine();
                                          
                                            gotoxy(19, 8);
                                            string name;
                                        
                                            getline(cin, name);
                                            remove_medicine(name);
                                            break;
                                        }
                                    }
                                    
                                    else if (get_admin_menu_option == '4')
                                    {
                                        bool medicine_update_option_running = true;
                                        while (medicine_update_option_running)
                                        {
                                            update_medicine_price_option();
                                            gotoxy(26,5);
                                            string medicine_name_to_update;
                                            cin >> medicine_name_to_update;
                                            if (isMedicinePresent(medicine_name_to_update))
                                            {
                                                int index = medicine_index(medicine_name_to_update);
                                                cout<<"Price of medicine is "<<medicines_prices[index]<<endl;
                                                string price;
                                                cout<<"Enter new price: ";
                                                cin >> price;
                                                medicines_prices[index] = price;
                                                break;

                                            }
                                            else{
                                                cout<<"Medicine not present"<<endl;
                                                cout<<"Enter 0 to exit or anykey to try again";
                                                char option = get_option();
                                                if (option == '0')
                                                {
                                                    break;
                                                }

                                            }

                                            
                                            
                                        }
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

// TO Get Option from user
int get_option()
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
    cout << "*     4. Update Medicines price.                    *" << endl;
    cout << "*     5. Show Customer Records.                     *" << endl;
    cout << "*     6. Employee                                   *" << endl;
    cout << "*     7. Show inventory.                            *" << endl;
    cout << "*     0. Back                                       *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}

// TO Show Take order menu
void Take_order_menu()
{
    system("cls");
    admin_header();
    cout << "*                                                   *" << endl;
    cout << "*     Enter Medicine name:                          *" << endl;
    cout << "*     Enter Quantity:                               *" << endl;
    cout << "*                                                   *" << endl;
}

// TO update medicine price
void update_medicine_price_option()
{
    system("cls");
    admin_header();
    cout << "*     Enter Medicine name:                          *" << endl;
    cout << "*                                                   *" << endl;
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
            cout << "Required medicine only has " << intremainingmedicines << "quantities available Press any key to try again";
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
        cout << "Medicine not present Press any key to try again";
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
    cout << "*  Medicine name(weight)                             *" << endl;
    cout << "------------------------------------------------------" << endl;
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
    system("cls");
    admin_header();

    cout << "*                                                   *" << endl;
    cout << "*   <remove medicine>                               *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*    Medicine name:                                 *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
}
// TO remove medicines from medicines list.
void remove_medicine(string name)
{

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
                break;
            }
        }
    }
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
