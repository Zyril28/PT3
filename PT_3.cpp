//Name: Zyril Venedict C. Zamonte
//Activity: PT3
//Date: March 31, 2022
//Year and Section: BSIE 1-1

#include <iostream>
#include <fstream>

using namespace std;

int main (){
    string name;
    int number, range;
    ifstream fin;
    ofstream fout;
    char choices;
    fin.open("Performance Task 3.txt");
    fout.open("Performance Task 3.txt");

    do{
        cout << "Enter the range of numbers: ";
        fout << "Enter the range of numbers: ";
        cin >> range;
        fin >> range;
        for (int number, count = 1; count <= range; count++){
            cout << "Enter the number that you want to know. " << "[" << count << "]: ";
            fout << "Enter the number that you want to know. " << "[" << count << "]: ";
            cin >> number;
            fin >> number;
            if (number % 2 == 0){
            cout << number << " is a number that is EVEN." << endl;
            fout << number << " is a number that is EVEN." << endl;
            } else {
            cout << number << " is a number that is ODD." << endl;
            fout << number << " is a number that is ODD." << endl;
            }
        }
            cout << "Do you want to try again? [y/n]: ";
            fout << "Do you want to try again? [y/n]: ";
            cin >> choices;
            fin >> choices;
            cout << endl;
    } while (choices == 'y');

    fin.close();
    fout.close();
    return 0;
}