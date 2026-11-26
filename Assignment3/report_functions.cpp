// CSCI 2350 - Assignment 3 - Task C
// Name: David Munoz Botia
// Report functions. Keep these function headers. Do not add main to this file.
#include <iomanip>
#include <iostream>
#include <string>
#include "grade_item.h"

double totalPoints(const GradeItem* items[], int count)
{
    if (items == nullptr || count <= 0)
    {
        return 0;
    }
    double total = 0;
    for (int i = 0; i < count; ++i)
    {
        total += items[i]->finalPoints();
    }
    return total;
}

int totalPossible(const GradeItem* items[], int count)
{
    if (items == nullptr || count <= 0)
    {
        return 0;
    }
    int total = 0;
    for (int i = 0; i < count; ++i)
    {
        total += items[i]->getPossible();
    }
    return total;
}

char letterGrade(double percent)
{
    if (percent < 0)
    {
        return '?';
    }
    else if (percent >= 90)
    {
        return 'A';
    }
    else if (percent >= 80)
    {
        return 'B';
    }
    else if (percent >= 70)
    {
        return 'C';
    }
    else if (percent >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

void printReport(const std::string& title, const GradeItem* items[], int count)
{
    std::cout << title << '\n';
    if (items == nullptr || count <= 0)
    {
        std::cout << "No grade items\n";
        return;
    }
    for (int i = 0; i < count; ++i)
    {
        items[i]->print();
    }
    double points = totalPoints(items, count);
    int possible = totalPossible(items, count);
    double percent = 100 * points / possible;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Total: " << points << " / " << possible << '\n';
    std::cout << "Percent: " << percent << '\n';
    std::cout << "Letter: " << letterGrade(percent) << '\n';
}
