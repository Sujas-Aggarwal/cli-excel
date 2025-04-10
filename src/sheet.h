#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Sheet
{
    int rows = 5, cols = 8;

public:
    vector<vector<int>> data; //temporary public for testing
    Sheet() : data(rows, vector<int>(cols, 0)) {}
    Sheet(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}
    ~Sheet() {}
    void setCell(int row, int col, const int &value);
    int getCell(int row, int col);
    void displaySheet(int rS = 0, int rE = 5, int cS = 0, int cE = 10);
};