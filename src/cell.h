#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Cell
{
public:
    int value = 0;
    string formula;
    vector<Cell *> dependents;
    vector<Cell *> dependencies;

    Cell(int val = 0, string form = "") : value(val), formula(form) {}
    ~Cell() {}

    void addDependent(Cell *cell);
    void addDependency(Cell *cell);
    void removeDependent(Cell *cell);
    void removeDependency(Cell *cell);
    void evaluate();
    // overrite cout operator to print cell value and formula
    friend ostream &operator<<(ostream &os, const Cell &cell)
    {
        cout << cell.value;
        return os;
    }
};