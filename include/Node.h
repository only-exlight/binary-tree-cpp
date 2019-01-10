using namespace std;
#ifndef NODE_H
#define NODE_H
#include <string>

class Node
{
    public:
        Node *left, // Левый узел
            *right, // Правый узел
            *parent; // Родитель
        int value; // Значение узла
        // Конструктор / Деструктор
        Node(int, Node*);
        virtual ~Node();
        // Методы добавления в узлов
        void addChildToLeft();
        void addChildToRight();

    private:
        // Метод ввода значений
        int inputValue();
};

#endif // NODE_H
