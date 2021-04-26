// streams.cpp
// Solomon Himelbloom
// 2 February 2021
// Stream example for CS 202.

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::vector;
using std::sort;
using std::reverse;
using std::ofstream;
using std::ifstream;
using std::fstream;
using std::istringstream;

// Write a program that reads and writes from a text file. In this program, you should:
// - Open a text file and display the contents to the console.
// - Query the user for a number n, and a line of text, to be entered all on one line.
// - Append n copies of the line of text to the file.
// When demonstrating your program you will run it more than once,
// so that we may see that you actually append the text, instead of overwriting the old file.

void readFile() {
    ifstream input("../test.txt");
    string line;

    int characters = 0;
    int words = 0;
    int lines = 0;
    int paragraphs = 1;

    while(getline(input, line)) {
        cout << line << endl;

        if (line.empty()) {
            paragraphs++;
        } else {
            words += std::count(line.begin(), line.end(), ' ' ) + 1;
        }

        characters += line.length();
        lines++;
    }

    input.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    int times;
    string query;

    cout << "Number of times & input: ";
    getline(cin, query);

    istringstream stream(query);

    stream >> times;
    stream.get();
    getline(stream, query);

    ofstream output("../test.txt", std::ios::app);
    for (int number = 0; number < times; ++number) {
        output << query << '\n';
    }
}

int main() {
    cout << ">> Welcome to line-by-line output..." << endl;
    readFile();
    return 0;
}
