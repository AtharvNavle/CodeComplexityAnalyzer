#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;


bool isComment(const string& line) {
    return (line.find("//") != string::npos || line.find("/*") != string::npos);
}


bool isFunctionDefinition(const string& line) {
    
    regex functionPattern("^[a-zA-Z_][a-zA-Z0-9_]*\\s+[a-zA-Z_][a-zA-Z0-9_]*\\(.*\\)\\s*\\{?");
    return regex_search(line, functionPattern);
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
      
        if (isComment(line)) {
            continue;
        }

     
        if (line.find("/*") != string::npos) {
            insideCommentBlock = true;
        }

        if (insideCommentBlock) {
            if (line.find("*/") != string::npos) {
                insideCommentBlock = false;
            }
            continue; 
        }

       
        if (isFunctionDefinition(line)) {
            cout << "Function found: " << line << endl;
        }
    }

    file.close();
}

int main() {
    string filename = "your_source_file.cpp";  
    parseFile(filename);
    return 0;
}
