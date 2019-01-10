using namespace std;
#include "BinarryTree.h"
#include "Node.h"
#include "commands.h"
#include <cstddef>
#include <iostream>

/**
* Конструктор
**/
BinarryTree::BinarryTree()
{
    cout << "Бинарное дерево." << endl;
    this -> currentNode = new Node(0, NULL);
    this -> rootNode = currentNode;
    this -> numberSheets += 2;
    cout << "Создан корневой узел со значением 0" << endl;
    this -> showCommads();
}

BinarryTree::~BinarryTree()
{
    //dtor
}
/**
* Парсер команд
**/
commands BinarryTree::parseComand(string val)
 {
    if (val == "toUp") return commands::toUp;
    if (val == "toLeft") return commands::toLeft;
    if (val == "toRight") return commands::toRight;
    if (val == "addToLeft") return commands::addToLeft;
    if (val == "addToRight") return commands::addToRight;
    if (val == "copyTree") return commands::copyTree;
    if (val == "stopWork") return commands::stopWork;
    if (val == "showCurrent") return commands::showCurrent;
    if (val == "sheetsNumber") return commands::sheetsNumber;
    return commands::noAction;
}
/**
* Исполнитель команд
**/
void BinarryTree::runComand(string val)
{
    commands currentCommand = parseComand(val);
    switch (currentCommand) {
        case commands::toUp: {
            this -> toUp();
            break;
        };
        case commands::toLeft: {
            this -> toLeft();
            break;
        };
        case commands::toRight: {
            this -> toRight();
            break;
        };
        case commands::addToLeft: {
            this -> currentNode-> addChildToLeft();
            this -> numberSheets++;
            break;
        };
        case commands::addToRight: {
            this -> currentNode -> addChildToRight();
            this -> numberSheets++;
            break;
        };
        case commands::copyTree: {
            this -> copyThisTree();
            break;
        };
        case commands::showCurrent: {
            cout << "Значение текущего узла " << this -> currentNode -> value << endl;
            cout << "Введите команду:" << endl;
            break;
        };
        case commands::sheetsNumber: {
            cout << "Текущее колчиство листов в дереве " << this -> numberSheets << endl;
            cout << "Введите команду:" << endl;
            break;
        }
        case commands::stopWork: {
            this -> stop = true;
            cout << "Завершение." << endl;
            break;
        };
        case commands::noAction: {
            this -> badCommand();
            break;
        };
        default: {
            this -> badCommand();
        };
    };
}
/**
* Плохая команда
**/
void BinarryTree::badCommand()
{
    cout << "Команды не существует! Введите корректную команду:" << endl;
    this -> showCommads();
}
/**
* Вывод команд
**/
void BinarryTree::showCommads()
{
    cout << "Список команд:" << endl;
    cout << "toUp, toLeft, toLeft, addToLeft, addToRight, copyTree, stopWork, showCurrent, sheetsNumber" << endl;
    cout << "Введите команду:" << endl;
}
/**
* Наверх
**/
void BinarryTree::toUp()
{
    if (this -> currentNode -> parent == NULL) {
        cout << "Корневой узел! Выше узлов нет." << endl;
        cout << "Введите команду:" << endl;
    } else {
        this -> currentNode = currentNode -> parent;
        cout << "Наверх. Значение узла " << currentNode -> value << endl;
        cout << "Введите команду:" << endl;
    }
}
/**
* Налево
**/
void BinarryTree::toLeft()
{
    if (this -> currentNode -> left == NULL) {
        cout << "Нет узла слева. Вы можете создать его командой addToLeft" << endl;
        cout << "Введите команду:" << endl;
    } else {
        this -> currentNode = this-> currentNode -> left;
        cout << "Налево. Значение узла " << this -> currentNode -> value << endl;
        cout << "Введите команду:" << endl;
    }
}
/**
* Направо
**/
void BinarryTree::toRight()
{
    if (this -> currentNode -> right == NULL) {
        cout << "Нет узла справа. Вы можете создать его командой addToRight" << endl;
        cout << "Введите команду:" << endl;
    } else {
        this -> currentNode = this -> currentNode -> right;
        cout << "Направо. Значение узла " << this -> currentNode -> value << endl;
        cout << "Введите команду:" << endl;
    }
}

void BinarryTree::copyThisTree()
{
    BinarryTree * treeCopy = new BinarryTree();

}

bool BinarryTree::descent(BinarryTree *tree)
{
    Node *curr = NULL;
    if (toRight) {
        curr = this -> rootNode -> right;
    } else {
        curr = this -> rootNode -> left;
    };
    while (curr -> right || curr -> left)
    {
        tree -> currentNode
    }

    return true;
}

