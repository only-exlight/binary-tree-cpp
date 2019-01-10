using namespace std;
#ifndef BINARRYTREE_H
#define BINARRYTREE_H
#include "Node.h"
#include "commands.h"
#include <cstddef>
#include <string>

class BinarryTree
{
    public:
        int numberSheets = 0;
        Node * currentNode = NULL,// Текущий узел
            *rootNode = NULL;
        bool stop = false; // Флаг звершения
        // Констркукор / Деструктор
        BinarryTree();
        virtual ~BinarryTree();
        // Выполнить команду
        void runComand(std::string);

    private:
        // Парсер команд и обработчики
        commands parseComand(std::string);
        void toRight();
        void toLeft();
        void toUp();
        void copyThisTree();
        void addElemtntToLeft();
        void addElemtntToRight();
        void showCommads();
        void badCommand();
};

#endif // BINARRYTREE_H
