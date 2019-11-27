//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>


using namespace std;

int t05_palindrom() {
    string s = {};
    getline(cin,s);
    int length = s.length();
    for (int i = 0; i <= length / 2; i++){
        if (s[i]!=s[length - i - 1]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;

}
