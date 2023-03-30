#pragma once

#include <fstream>
#include <string>
#include <vector>

#include "Command.h"
#include "CommandParser.h"

using namespace std;

vector<Command*> ImportFromFile(string path) {
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

    return commands;
}