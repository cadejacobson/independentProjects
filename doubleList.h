#include <iostream>
#include <string>

using namespace std;

class doubleList
{
public:
    doubleList();
    ~doubleList();
    bool find(int item);
    int retrievePosition(int item);
    int size();
    bool empty();

    bool insert(int item);
    void print(ostream& out, string seperator = ", ");
    void clear();


private:

    struct node
    {
        int theItem;
        node* next;
        node* prev;
    };
    node* tailptr;
    node* headptr;
};
#pragma once
