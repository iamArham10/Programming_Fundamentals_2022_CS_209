#include <iostream>
#include <conio.h>
using namespace std;
void main_menu();
void add_matrix(int matrix_A[][3],int matrix_B[][3], int matrix_C[][3]);
void subtract_matrix(int matrix_A[][3],int matrix_B[][3], int matrix_C[][3]);
void divide_matrix(int matrix[][3],int n);
void multiply_matrix(int matrix_A[][3], int matrix_B[][3],int matrix_C[][3]);
void print_matrix(int matrix[][3]);
void take_matrix_input(int A[][3], int B[][3]);
main()
{
    system("cls");
    main_menu();
    char c = getch();
    if (c == '1')
    {
        system("cls");
        cout << "Add Matrices" << endl;
        int Matrix_A[3][3];
        int Matrix_B[3][3];
        int Matrix_C[3][3];
        take_matrix_input(Matrix_A,Matrix_B);
        add_matrix(Matrix_A,Matrix_B,Matrix_C);
        print_matrix(Matrix_C);
    }
    else if (c == '2')
    {
        system("cls");
        cout << "Substract Matrices" << endl;
        int Matrix_A[3][3];
        int Matrix_B[3][3];
        int Matrix_C[3][3];
        take_matrix_input(Matrix_A,Matrix_B);
        subtract_matrix(Matrix_A,Matrix_B,Matrix_C);
        print_matrix(Matrix_C);  
    }
    else if (c == '3')
    {
        system("cls");
        cout << "Divide Matrix" << endl;
        int Matrix_A[3][3];
        int num;
        for (int row = 0; row < 3; row++)
        {
            for (int column = 0; column < 3; column++)
            {
                cout << "Enter Matric Element number " << row+1<<','<<column+1 << " : ";
                cin >> Matrix_A[row][column];
            }
        }
        cout << "Enter Number by which you want to divide: ";
        cin >> num;
        divide_matrix(Matrix_A, num);
        print_matrix(Matrix_A);
    }
    else if (c == '4')
    {
        system("cls");
        cout << "multiply Matrixes: " << endl;
        int Matrix_A[3][3];
        int Matrix_B[3][3];
        int Matrix_C[3][3];
        take_matrix_input(Matrix_A,Matrix_B);
        multiply_matrix(Matrix_A,Matrix_B,Matrix_C);
        print_matrix(Matrix_C);
    }
}


void take_matrix_input(int A[][3], int B[][3])
{
    for (int row = 0; row < 3 ; row++)
    {
        for (int column = 0; column < 3 ; column++)
        {
            cout << "Enter Matrix one Element ("<< row+1 << ","<< column+1<<"): ";
            cin >> A[row][column];
        }
    }
    cout << endl;
    cout << endl;
    for (int row = 0; row < 3 ; row++)
    {
        for (int column = 0; column < 3 ; column++)
        {
            cout << "Enter Matrix two Element ("<< row+1 << ","<< column+1<<"): ";
            cin >> B[row][column];
        }
    }
}


void main_menu()
{
    cout << "*************Matrix Calculator***********" << endl;
    cout << "*                                       *" << endl;
    cout << "* Press the following Key:              *" << endl;
    cout << "*                                       *" << endl;
    cout << "*    1. Add two Matrix.                 *" << endl;
    cout << "*    2. Substract Two Matrix.           *" << endl;
    cout << "*    3. Divide Matrix.                  *" << endl;
    cout << "*    4. Multiply two Matrixes.          *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
}
void add_matrix(int A[][3],int B[][3],int C[][3])
{
    for (int row =0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            C[row][column] = A[row][column] + B[row][column];
        }
    }
}

void subtract_matrix(int A[][3],int B[][3],int C[][3])
{
    for (int row =0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            C[row][column] = A[row][column] - B[row][column];
        }
    }
}

void divide_matrix(int matrix[][3],int n)
{
    for (int row =0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            matrix[row][column] = matrix[row][column]/n;
        }
    }
}



void multiply_matrix(int A[][3], int B[][3],int C[][3])
{
    C[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0] + A[0][2]*B[2][0];
    C[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1] + A[0][2]*B[2][1];
    C[0][2] = A[0][0]*B[0][2] + A[0][1]*B[1][2] + A[0][2]*B[2][2];

    C[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0] + A[1][2]*B[2][0];
    C[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1] + A[1][2]*B[2][1];
    C[1][2] = A[1][0]*B[0][2] + A[1][1]*B[1][2] + A[1][2]*B[2][2];

    C[2][0] = A[2][0]*B[0][0] + A[2][1]*B[1][0] + A[2][2]*B[2][0];
    C[2][1] = A[2][0]*B[0][1] + A[2][1]*B[1][1] + A[2][2]*B[2][1];
    C[2][2] = A[2][0]*B[0][2] + A[2][1]*B[1][2] + A[2][2]*B[2][2];
}

void print_matrix(int matrix[][3])
{
    system("cls");
    cout << endl;
    cout << "Your Matrix is "<< endl;
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }
}