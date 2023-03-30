#pragma once

#include <iostream>
#include <string>

#include "Command.h"

using namespace std;

string OperationToString(string operation) {
    Command command;
    if (operation == command.ADD) {
        return "+";
    } else if (operation == command.SUB) {
        return "-";
    } else if (operation == command.MUL) {
        return "*";
    } else if (operation == command.DIV) {
        return "/";
    }
}

void PrintCommand(Command* command) {
    if (command->operation == command->LOG_RESULTS) return;

    string message;
    if (command->isError) {
        message = "Error";
    } else {
        message = to_string(command->number_1) + " " + OperationToString(command->operation) + " " + to_string(command->number_2) + " = " + to_string(command->result);
    }

    cout << message << endl;
}