#include <iostream>
#include <vector>
#include <string>
#include "sheet.h"
#include "utils.h"
using namespace std;

void Sheet::setCell(int row, int col, const int &value)
{
    if (row >= 0 && row < data.size() && col >= 0 && col < data[0].size())
    {
        data[row][col] = value;
    }
    else
    {
        cout << "Invalid cell coordinates." << endl;
    }
}

int Sheet::getCell(int row, int col)
{
    if (row >= 0 && row < int(data.size()) && col >= 0 && col < int(data[0].size()))
    {
        return data[row][col];
    }
    else
    {
        cout << "Invalid cell coordinates." << endl;
        return 0;
    }
}

void Sheet::displaySheet(int rS, int rE, int cS, int cE)
{
    Utils::displayWarning("\n\nSujas' Sheet:\n\n");
    cout << Utils::paddedText("");
    // printing header
    for (int col = max(0, cS); col < min(cE, cols); col++)
    {
        Utils::displayInfo(Utils::paddedText(Utils::convertRowToString(col + 1)));
    }
    cout << endl;
    // printing table
    for (int row = max(rS, 0); row < min(rE, rows); row++)
    {
        Utils::displayInfo(Utils::paddedText(to_string(row + 1)));
        for (int col = max(0, cS); col < min(cE, cols); col++)
        {
            cout << Utils::paddedText(to_string(data[row][col]));
        }
        cout << endl;
    }
}
