using namespace std;
#include "Node.h"
#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <string>

Node::Node(int nodeValue, Node * parentNode)
{
    parent = parentNode;
    value = nodeValue;
    //ctor
}

Node::~Node()
{
    //dtor
}

void Node::addChildToLeft() {
    if (this -> left == NULL) {
        int value = this -> inputValue();
        this -> left = new Node(value, this);
        cout << "Узел успешно создан! Значение узла " << this -> left-> value << endl;
        cout << "Введите команду:" << endl;
    } else {
        cout << "Левый узел уже существует!" << endl;
        cout << "Введите команду:" << endl;
    }
}

void Node::addChildToRight() {
    if (this -> right == NULL) {
        int value = this -> inputValue();
        this -> right = new Node(value, this);
        cout << "Узел успешно создан! Значение узла " << this -> right-> value << endl;
        cout << "Введите команду:" << endl;
    } else {
        cout << "Правый узел уже существует!" << endl;
        cout << "Введите команду:" << endl;
    }
}

int Node::inputValue()
{
    bool isDigit = false;
    while (!isDigit) {
        string val;
        cout << "Введите значение узла:" << endl;
        cin >> val;
        try
        {
            int digit = stoi(val);
            isDigit = true;
            return digit;
        }
        catch (int err)
        {
            cout << "Введено не числовое значение. Повторите ввод:" << endl;
        };
    };
}

