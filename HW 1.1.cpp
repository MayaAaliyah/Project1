// HW 1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//take in input of characters and change input to characters to the left 

#include <iostream>
#include <string>
using namespace std;



    string switchCharacters(const string & input) {
        string change;
        for (char ch : input) {
            switch (ch) {
             case 'w':
               change += 'q' ;
               break;
             case 'e':
                change += 'w';
                break;
             case 'r':
                change += 'e';
                break;
             case 't': 
                change += 'r';
                break;
             case 'y':
                   change += 't';
                   break;
             case 'u':
                    change += 'y';
                    break;
             case 'i':
                  change += 'u';
                  break;
             case 'o':
                     change += 'i';
                     break;
             case 'p':
                 change += 'o';
                 break;
             case 's':
                  change += 'a';
                  break;
             case 'd':
                  change += 's';
                  break;
             case 'f':
                 change += 'd';
                 break;
             case 'g':
                    change += 'f';
                    break;
             case 'h':
                    change += 'g';
                    break;
             case 'j':
                    change += 'h';
                    break;
             case 'k':
                   change += 'j';
                   break;
             case 'l':
                  change += 'k';
                  break;
             case 'x':
                  change += 'z';
                  break;
             case 'c':
                  change += 'x';
                  break;
             case 'v':
                  change += 'c';
                  break;
             case 'b':
                  change += 'v';
                  break;
             case 'n':
                  change += 'b';
                  break;
             case 'm':
                  change += 'n';
                  break;
             case 'W':
                 change += 'Q';
                 break;
             case 'E':
                 change += 'W';
                 break;
             case 'R':
                 change += 'E';
                 break;
             case 'T':
                 change += 'R';
                 break;
             case 'Y':
                 change += 'T';
                 break;
             case 'U':
                 change += 'Y';
                 break;
             case 'I':
                 change += 'U';
                 break;
             case 'O':
                 change += 'I';
                 break;
             case 'P':
                 change += 'O';
                 break;
             case 'S':
                 change += 'A';
                 break;
             case 'D':
                 change += 'S';
                 break;
             case 'F':
                 change += 'D';
                 break;
             case 'G':
                 change += 'F';
                 break;
             case 'H':
                 change += 'G';
                 break;
             case 'J':
                 change += 'H';
                 break;
             case 'K':
                 change += 'J';
                 break;
             case 'L':
                 change += 'K';
                 break;
             case 'X':
                 change += 'Z';
                 break;
             case 'C':
                 change += 'X';
                 break;
             case 'V':
                 change += 'C';
                 break;
             case 'B':
                 change += 'V';
                 break;
             case 'N':
                 change += 'B';
                 break;
             case 'M':
                 change += 'N';
                 break;
             case ',':
                     change += 'm';
                     break;
             case '2':
                     change += '1';
                     break;
             case'3':
                 change += '2';
                     break;
             case '4':
                 change += '3';
                 break;
             case '5':
                 change += '4';
                 break;
             case '6':
                 change += '5';
                 break;
             case '7':
                 change += '6';
                     break;
             case '8':
                 change += '7';
                 break;
             case '9':
                 change += '8';
                 break;
             case '0':
                     change += '9';
                     break; 
             case '.':
                 change += ',';
                 break;
             case '/':
                 change += '.';
                 break;
             case ' ':
                 change += ' ';
                 break;

 


               
             default:
                         change += ch;
                break;
            }
        }
        return change;
    }


int main()

{
	string input;
	cout << "Input a series of keyboard characters" << endl;
	getline(cin ,input); 

    string change = switchCharacters(input);
    cout << change; 
    {
        return 0;
    }
}


