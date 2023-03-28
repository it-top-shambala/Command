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

    void Execute() {
        if (operation == ADD) {
            result = number_1 + number_2;
        } else if (operation == SUB) {
            result = number_1 - number_2;
        } else if (operation == MUL) {
            result = number_1 * number_2;
        } else if (operation == DIV) {
            result = number_1 / number_2;
        }
    }

    string OperationToString() {
        if (operation == ADD) {
            return "+";
        } else if (operation == SUB) {
            return "-";
        } else if (operation == MUL) {
            return "*";
        } else if (operation == DIV) {
            return "/";
        }
    }

    string ToString() {
        if (operation == LOG_RESULTS) return "";

        return to_string(number_1) + " " + OperationToString() + " " + to_string(number_2) + " = " + to_string(result);
    }
};
