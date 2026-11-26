// CSCI 2350 - Assignment 3 - Task C
// Name: David Munoz Botia
// Alex missed the Lab 3 deadline. Is it still worth submitting Lab 3 late?
// Write main so it prints the three reports in expected/gradebook.txt.
#include <iostream>
#include <string>
#include "grade_item.h"

void printReport(const std::string& title, const GradeItem* items[], int count);

int main()
{
    // Alex's seven grade items, created as local objects (no new).
    GradeItem homework1("Homework 1", 9, 10);
    Lab lab1("Lab 1", 20, 20, 0);
    Lab lab2("Lab 2", 18, 20, 2);
    Quiz quiz1("Quiz 1", 6, 8, 10);
    Exam midterm("Midterm", 78, 100, 5);
    GradeItem lab3Skipped("Lab 3", 0, 20);
    Lab lab3Late("Lab 3", 19, 20, 4);

    // Three arrays of const GradeItem* for the three reports.
    const GradeItem* current[] = {&homework1, &lab1, &lab2, &quiz1, &midterm};
    const GradeItem* plan1[] = {&homework1, &lab1, &lab2, &quiz1, &midterm, &lab3Skipped};
    const GradeItem* plan2[] = {&homework1, &lab1, &lab2, &quiz1, &midterm, &lab3Late};

    printReport("Current grades", current, 5);
    std::cout << '\n';
    printReport("Plan 1: skip Lab 3", plan1, 6);
    std::cout << '\n';
    printReport("Plan 2: submit Lab 3 four days late", plan2, 6);
    return 0;
}
