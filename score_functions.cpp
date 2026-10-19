// CSCI 2350 - Assignment 2 - Task A
// Name: TODO
// R number: TODO
// Keep these function headers. Do not add main to this file.

int maxScore(const int* scores, int count) {
    if (scores == nullptr || count <= 0) {
        return -1;
    }
    
    int max = scores[0];
    for (int i = 1; i < count; ++i) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

bool updateScore(int* scores, int count, int index, int replacement) {
    if (scores == nullptr || count <= 0) {
        return false;
    }
    if (index < 0 || index >= count) {
        return false;
    }
    if (replacement < 0 || replacement > 100) {
        return false;
    }
    
    scores[index] = replacement;
    return true;
}