#include <iostream>
#include <fstream>
using namespace std;
string readData();
string read_word(string, int);
bool IsEven(int num);
string declare_Character(int age);
void storedata(string, string);
string makeBanner(int);


main()
{
    string word = readData();
    string name = read_word(word, 1);
    string age = read_word(word, 2);
    storedata(name, age);
}

string readData()
{
    fstream file;
    file.open("users.txt", ios::in);
    string sentence;
    getline(file, sentence);
    file.close();
    return sentence;
}
string read_word(string sentence, int count)
{
    string word = "";
    int current_count = 1;
    for (int idx = 0; sentence[idx] != '\0'; idx++)
    {
        if (sentence[idx] == ',')
        {
            current_count++;
        }
        else if (current_count > count)
        {
            break;
        }
        else if (current_count == count)
        {
            word = word + sentence[idx];
        }
    }
    return word;
}
bool IsEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void storedata(string name, string age)
{
    
    int Age = stoi(age);
    string character = declare_Character(Age);
    fstream file;
    string firstline = makeBanner(Age);
    string second_line = character + " " + age + " " + "HB" + " " + name + "!" + age + " " + character;
    string lastline = makeBanner(Age);
    file.open("message.txt", ios::out);
    file << firstline << endl;
    file << second_line << endl;
    file << lastline;
    file.close();
}

string declare_Character(int age)
{
    string character;

    if (IsEven(age))
    {
        character = "#";
    }
    else
    {
        character = "*";
    }
    return character;
}

string makeBanner(int age)
{
    string line = "";
    string character = declare_Character(age);
    for (int idx = 0; idx < 15; idx++)
    {
        line = line + character;
    }
    return line;
}