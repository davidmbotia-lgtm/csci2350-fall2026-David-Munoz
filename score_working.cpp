// CSCI 2350 - Assignment 2 - Task B
// Name: David Munoz Botia
// R number: Tuesday and Thursday 12:30-1:45
#include <iostream>

int maxScore(const int* scores, int count);
bool updateScore(int* scores, int count, int index, int replacement);


void printScores(const int* scores, int count) {
    for (int i = 0; i < count; ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << scores[i];
    }
    std::cout << '\n';
}


int main() {
    int count = 0;
    int* working = nullptr;

    std::cin >> count;
    
    if (count < 1 || count > 20) {
        std::cout << "Invalid score count\n";
        return 0;
    }

    working = new int[count];

    for (int i = 0; i < count; ++i) {
        std::cin >> working[i];
        
        if (working[i] < 0 || working[i] > 100) {
            std::cout << "Invalid score data\n";
            delete[] working;
            working = nullptr;
            return 0;
        }
    }

    int index, replacement;
if (!(std::cin >> index >> replacement)) {
    std::cout << "Invalid correction data\n";
    delete[] working;
    working = nullptr;
    return 0;
}

bool applied = updateScore(working, count, index, replacement);

    std::cout << "correction applied: " << (applied ? "true" : "false") << '\n';
    std::cout << "working scores: ";
    printScores(working, count);
    std::cout << "working max: " << maxScore(working, count) << '\n';

    delete[] working;
    working = nullptr;
    
    std::cout << "owner cleared: true\n";

    return 0;
}

