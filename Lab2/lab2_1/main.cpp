#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>

using namespace std;

unordered_set<string> keywords = {"int", "float", "char", "if", "else", "while", "for"};
unordered_set<string> operators = {"+", "-", "*", "/", "=", "==", "<", ">", "<=", ">=", "!="};

bool isKeyword(const string& word) {
    return keywords.count(word) > 0;
}

bool isOperator(const string& word) {
    return operators.count(word) > 0;
}

bool isIdentifier(const string& word) {
    if (!isalpha(word[0]) && word[0] != '_') {
        return false;
    }
    for (char c : word) {
        if (!isalnum(c) && c != '_') {
            return false;
        }
    }
    return true;
}

bool isConstant(const string& word) {
    for (char c : word) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string filename = "source_code.txt"; // Replace with the actual file name

    ifstream file(filename);


    string word;
    while (file >> word) {
        if (isKeyword(word)) {
            cout << "Keyword: " << word << endl;
        } else if (isOperator(word)) {
            cout << "Operator: " << word << endl;
        } else if (isIdentifier(word)) {
            cout << "Identifier: " << word << endl;
        } else if (isConstant(word)) {
            cout << "Constant: " << word << endl;
        }
    }

    file.close();

    return 0;
}
