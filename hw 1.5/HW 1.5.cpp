// HW 1.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include "randword.h"

using namespace std;

const int attempts = 8;

void update(const string& hidden, int remainatt) {
    cout << "Word: " << hidden << endl;
    cout << "Attempts left: " << remainatt << endl;
}

bool updateprt2(char guess, const string& answer, string& hidden) {
    bool correct = false;
    for (int i = 0; i < answer.length(); ++i) {
        if (answer[i] == guess) {
            hidden[i] = guess;
            correct = true;
        }
    }
    return correct;
}

int main() {
    InitDictionary("TextFile1.txt");
    string answerWord = RandomWord();

    string hiddenword(answerWord.length(), '_');
    int remainatt = attempts;
    vector<char> letters; // storing letters inputted

    cout << "Let's Play Hangman" << endl;

    while (remainatt > 0 && hiddenword != answerWord) {
        update(hiddenword, remainatt);
        cout << "Guess a letter: ";
        char guess;
        cin >> guess;

        if (find(letters.begin(), letters.end(), guess) != letters.end()) {
            cout << "Been there done that" << endl;
            continue;
        }

        letters.push_back(guess); // adds character to end of vector

        if (updateprt2(guess, answerWord, hiddenword)) {
            cout << "Correct. " << guess << " Now it looks like this: " << hiddenword << endl;
        }
        else {
            cout << "Wrong. " << guess << " is not in this word." << endl;
            --remainatt;
        }
    }

    if (hiddenword == answerWord) {
        cout << "You guessed the word: " << answerWord << endl;
    }
    else {
        cout << "Game Over. The word was: " << answerWord << endl;
    }

    return 0;
}
