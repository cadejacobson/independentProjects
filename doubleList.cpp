#include "doubleList.h"


doubleList::doubleList()
{
    headptr = nullptr;
    tailptr = nullptr;                      //set up an empty list
}


doubleList::~doubleList()
{
    headptr = nullptr;                      //return to an empty list
    tailptr = nullptr;                      //call delete later
}   


bool doubleList::empty()                    //check if the function is empty
{
    if( headptr == nullptr && tailptr == nullptr )
        return true;

    return false;
}

    
int doubleList::size()                 //return the amount of nodes in the list
{
    node* temp = headptr;
    int count = 1;

    if( headptr == nullptr && tailptr == nullptr )
        return 0;

    while (temp != tailptr)
    {
        count++;
        temp = temp->next;
    }


    return count;
}



void doubleList::print( ostream& out, string seperator )
{
    node* temp;
    int count = 0;
    temp = headptr;

    if( temp == nullptr )     //if the list is empty, there's nothing to print
        return;

    temp = headptr->next;

    do                          //traverse the list and output each item
    {
        if (count != 0)
            out << ", ";
        out << temp->theItem;
        count += 1;
    }while( temp != tailptr );

    return;
}



bool doubleList::insert( int item )
{
    node* temp, *curr, *prev;
    temp = new (nothrow) node;
    if( temp == nullptr )                   //if dynamic allocation fails
        return false;                       //exit
    temp->theItem = item;

    if( headptr == nullptr && tailptr == nullptr )              //empty
    {
        headptr = temp;                     //if the list is empty, do headptr
        tailptr = temp;                     //and tailptr assignments
        temp->next = tailptr;
        temp->prev = headptr;
        return true;
    }

    curr = headptr;
    prev = headptr;

    if (item <= headptr->theItem)    //else, traverse the list and check items
    {
        curr = headptr->next;
        temp->next = curr;
        curr->prev = temp;
        temp->prev = headptr;
        headptr = temp;
        return true;
    }

    return true;
}