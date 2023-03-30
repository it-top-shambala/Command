#pragma once

#include <string>

using namespace std;

struct Command {
    const string LOG_RESULTS = "LOG_RESULTS";
    const string ADD = "ADD";
    const string SUB = "SUB";
    const string DIV = "DIV";
    const string MUL = "MUL";

    string operation;
    double number_1;
    double number_2;
    double result;
    bool isError = false;

    void Execute() {
        if (operation == ADD) {
            result = number_1 + number_2;
        } else if (operation == SUB) {
            result = number_1 - number_2;
        } else if (operation == MUL) {
            result = number_1 * number_2;
        } else if (operation == DIV) {
            if (number_2 == 0) {
                isError = true;
                return;
            }
            result = number_1 / number_2;
        }
    }
};
