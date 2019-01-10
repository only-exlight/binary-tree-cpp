using namespace std;
#include <iostream>
#include "BinarryTree.h"

int main()
{
    BinarryTree * tree = new BinarryTree();
    while (!tree -> stop) {
        string inputValue;
        cin >> inputValue;
        tree -> runComand(inputValue);
    }
    return 0;
};
