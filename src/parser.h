#pragma once
#include <iostream>
using namespace std;
enum CommandType
{
    SET_CELL,
    GET_CELL,
    EXIT,
    INVALID,
    SAVE,
    LOAD,
};
class Parser
{
public:
    Parser() {}
    ~Parser() {}
    CommandType getCommandType(string commandInput)
    {
        if (commandInput == "exit")
            return EXIT;
        else if (commandInput == "save")
            return SAVE;
        else if (commandInput.substr(0, 3) == "set")
            return SET_CELL;
        else if (commandInput.substr(0, 3) == "get")
            return GET_CELL;
        else if (commandInput.substr(0, 4) == "load")
            return LOAD;
        else
            return INVALID;
    }
};