#include <string>
#include <vector>

#include "Command.h"

#include "FileHelper.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    string path = "test.calc";
    vector<Command*> commands = ImportFromFile(path);

    for (Command* command : commands) {
        command->Execute();
    }

    for (Command* command : commands) {
        PrintCommand(command);
    }


    return 0;
}
