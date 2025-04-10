#include "utils.h"
#include <iostream>
#include <vector>
#include <string>
void Utils::clearScreen()
{
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
};

void Utils::pause()
{
    cout << "Press Enter to continue...";
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin.get();
};

void Utils::displayError(const string &message)
{
    cout << "\033[31mError: " << message << "\033[0m"; // ANSI escape code for red text
};

void Utils::displaySuccess(const string &message)
{
    cout << "\033[32mSuccess: " << message << "\033[0m"; // ANSI escape code for green text
};

void Utils::displayInfo(const string &message)
{
    cout << "\033[34m" << message << "\033[0m"; // ANSI escape code for blue text
};

void Utils::displayWarning(const string &message)
{
    cout << "\033[33m" << message << "\033[0m"; // ANSI escape code for yellow text
};

void Utils::displayDebug(const string &message)
{
    cout << "\033[35m" << message << "\033[0m"; // ANSI escape code for magenta text
};

string Utils::convertRowToString(int row)
{
    // 1 to A, 30 to Z, 31 to AA, 32 to AB, etc.
    string result = "";
    while (row > 0)
    {
        int remainder = (row - 1) % 26;
        result = char('A' + remainder) + result;
        row = (row - 1) / 26;
    }
    return result;
}
string Utils::paddedText(const string &text, int width, char fillChar)
{
    string sol = text;
    if (sol.length() >= width)
    {
        sol = sol.substr(0, width-3); // Truncate if longer than width
        sol += "..."; // Add ellipsis if truncated
        return sol;
    }
    sol += string(width - text.length(), fillChar);
    return sol.substr(0, width); // Ensure the text is not longer than the width
};