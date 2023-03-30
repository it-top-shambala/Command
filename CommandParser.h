#pragma once

#include <string>

#include "Command.h"

using namespace std;

bool CommandValidator(string operation) {
    Command* command = new Command();
    return operation == command->LOG_RESULTS || operation == command->ADD || operation == command->SUB || operation == command->MUL || operation == command->DIV;
}

Command* CommandParser(string str) {
    Command* command = new Command();

    if (str == command->LOG_RESULTS) { // str == "LOG_RESULTS"
        command->operation = "LOG_RESULTS";

        return command;
    }

    int position = str.find(' ');
    string operation = str.substr(0, position);
    if (CommandValidator(operation)) {
        command->operation = operation;
        str = str.substr(position + 1);
        position = str.find(' ');
        command->number_1 = stod(str.substr(0, position)); //TODO добавить валидацию дробных чисел (перехват исключения)
        command->number_2 = stod(str.substr(position + 1)); //TODO добавить валидацию дробных чисел (перехват исключения)
        return command;
    }
    return nullptr; // Возврат пустого(null) значения
}