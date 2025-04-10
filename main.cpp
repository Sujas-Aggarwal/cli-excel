#include <iostream>
#include <parser.h>
#include <sheet.h>
using namespace std;
int main()
{
    Parser p;
    Sheet sheet;
    while (true)
    {
        sheet.displaySheet();
        string input;
        cout << "Enter a command: ";
        cin >> input;
        if (input=="connect"){
            sheet.data[0][0] = sheet.data[0][1];
            continue;
        }
        CommandType command = p.getCommandType(input);
        if (command == SET_CELL)
        {
            int row, col, value;
            cout << "Enter row, column and value: ";
            cin >> row >> col >> value;
            sheet.setCell(row-1, col-1, value);
        }
        else if (command == GET_CELL)
        {
            int row, col;
            cout << "Enter row and column: ";
            cin >> row >> col;
            int value = sheet.getCell(row-1, col-1);
            cout << "Value at (" << row << ", " << col << ") is: " << value << endl;
        }
        else if (command == EXIT)
        {
            cout << "Exiting..." << endl;
            break;
        }
        else if (command == SAVE)
        {
            cout << "Saving..." << endl;
        }
        else if (command == LOAD)
        {
            cout << "Loading..." << endl;
        }
        else
        {
            cout << "Invalid command." << endl;
        }
    }
    return 0;
}