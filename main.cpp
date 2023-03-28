#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Command.h"
#include "CommandParser.h"

using namespace std;

int main() {
    const string path = "J:\\Temp\\untitled3\\test.calc";
    ifstream file;
    file.open(path);
    string str;
    vector<Command*> commands;

    while (getline(file, str)) {
        Command* command = CommandParser(str);
        if (command != nullptr) {
            commands.push_back(command);
        }
    }

    for (Command* command : commands) {
        command->Execute();
    }

    for (Command* command : commands) {
        cout << command->ToString() << endl;
    }


    return 0;
}
