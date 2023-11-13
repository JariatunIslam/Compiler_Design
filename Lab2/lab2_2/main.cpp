#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool isValidIdentifier(const string& word) {
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

int main() {
    string filename = "source_code.txt";

    ifstream file(filename);

    string word;
    while (file >> word) {
    if (isValidIdentifier(word)) {
         cout << word << ":Valid " << endl;
    }
    else {
        cout << word << ":Invalid" << endl;
    }
}


    return 0;
}
