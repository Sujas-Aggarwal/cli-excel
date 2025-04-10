#include "cell.h"

void Cell::addDependent(Cell *cell)
{
    dependents.push_back(cell);
}

void Cell::addDependency(Cell *cell)
{
    dependencies.push_back(cell);
}

void Cell::removeDependent(Cell *cell)
{
    // dependents.erase(remove(dependents.begin(), dependents.end(), cell), dependents.end());
};

void Cell::removeDependency(Cell *cell)
{
    // dependencies.erase(remove(dependencies.begin(), dependencies.end(), cell), dependencies.end());
}

void Cell::evaluate()
{
    if (!formula.empty())
    {
        // Parse and evaluate the formula here
        // For now, just set value to 0 for demonstration purposes
        value = 0;
    }
};