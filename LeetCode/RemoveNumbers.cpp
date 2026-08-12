#include "RemoveNumbers.h"

vector<int> RemoveNumbers::removeNumbers(vector<int> repetidos) {

    vector<int> newNumbers;
    for (int i = 0; i < repetidos.size(); i++) {
        bool isEqual = false;
        for (int j = 0; j < newNumbers.size(); j++) {
            if (newNumbers[j] == repetidos[i]) {
                isEqual = true;
                break;
            }
        }
        if (!isEqual) {
            newNumbers.push_back(repetidos[i]);
        }
    }
    return newNumbers;
}
