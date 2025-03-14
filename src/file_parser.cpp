#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

// Function to check if a line is a comment (single-line or multi-line)
bool isComment(const string& line) {
    return (line.find("//") != string::npos || line.find("/*") != string::npos);
}

// Function to check if a line contains a function definition
bool isFunctionDefinition(const string& line) {
    // Regex to match function definition patterns (e.g., int main(), void myFunction(int a, double b))
    regex functionPattern("^[\\w\\s<>*&]+\\s+[a-zA-Z_][a-zA-Z0-9_]*\\s*\\(.*\\)\\s*(\\{)?");
    
    // Ignore lines that contain control structures like if/for/while
    if (line.find("if") != string::npos || line.find("for") != string::npos || line.find("while") != string::npos) {
        return false;
    }

    return regex_search(line, functionPattern);
}

// Function to check if a line contains an 'if' statement
bool isIfStatement(const string& line) {
    regex ifPattern("^[\\s]*if\\s*\\(.*\\)\\s*\\{?");
    return regex_search(line, ifPattern);
}

// Function to check if a line contains a 'for' loop
bool isForLoop(const string& line) {
    regex forPattern("^[\\s]*for\\s*\\(.*\\)\\s*\\{?");
    return regex_search(line, forPattern);
}

// Function to check if a line contains a 'while' loop
bool isWhileLoop(const string& line) {
    regex whilePattern("^[\\s]*while\\s*\\(.*\\)\\s*\\{?");
    return regex_search(line, whilePattern);
}

void parseFile(const string& filename) {
    ifstream file(filename);
    string line;
    if (!file.is_open()) {
        cerr << "Failed to open file: " << filename << endl;
        return;
    }

    bool insideCommentBlock = false;

    while (getline(file, line)) {
        // Skip comments
        if (isComment(line)) {
            continue;
        }

        // Check for multi-line comment block
        if (line.find("/*") != string::npos) {
            insideCommentBlock = true;
        }

        if (insideCommentBlock) {
            if (line.find("*/") != string::npos) {
                insideCommentBlock = false;
            }
            continue; // Skip lines inside comment blocks
        }

        // Check for function definitions
        if (isFunctionDefinition(line)) {
            cout << "Function found: " << line << endl;
        }

        // Check for control flow structures
        if (isIfStatement(line)) {
            cout << "If statement found: " << line << endl;
        }

        if (isForLoop(line)) {
            cout << "For loop found: " << line << endl;
        }

        if (isWhileLoop(line)) {
            cout << "While loop found: " << line << endl;
        }
    }

    file.close();
}

int main() {
    string filename = "test_file.cpp";  // Replace with your C++ file
    parseFile(filename);
    return 0;
}
