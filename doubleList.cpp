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

    if( temp == nullptr )
        return;

    temp = headptr->next;

    do
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
    if( temp == nullptr )
        return false;
    temp->theItem = item;

    if( headptr == nullptr && tailptr == nullptr )
    {
        headptr = temp;
        tailptr = temp;
        temp->next = tailptr;
        temp->prev = headptr;
        return true;
    }

    curr = headptr;
    prev = headptr;

    if (item <= headptr->theItem)
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