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

    temp = headptr;

    if( temp == tailptr )
    {
        out << temp->theItem;
        return;
    }

    while( temp != tailptr )                   //traverse the list and output each item
    {
        if (count != 0)
            out << ", ";
        out << temp->theItem;
        count += 1;
        temp = temp->next;
    }
    temp = temp->next;

    out << seperator << temp->theItem;

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
        temp->next = curr;
        curr->prev = temp;
        headptr = temp;
        temp->prev = headptr;
        return true;
    }

    while( curr != tailptr && item >= curr->theItem )
    {
        prev = curr;
        curr = curr->next;
    }

    if( item <= curr->theItem )                 //middle
    {
        temp->next = curr;
        prev->next = temp;
        temp->prev = prev;
        curr->prev = temp;
        return true;
    }

    tailptr = temp;                             //end
    temp->next = tailptr;
    curr->next = temp;
    temp->prev = curr;

    return true;
}



void doubleList::clear()
{
    node* temp;
    node* curr;
    temp = headptr;
    curr = headptr;

    while( temp != tailptr )
    {
        curr = curr->next;
        delete temp;
        temp = curr;
    }

    headptr = nullptr;
    tailptr = nullptr;

    return;
}



bool doubleList::find( int item )
{
    node *temp = headptr;
    
    if( size() == 0 )
    {
        return false;
    }

    while( temp != tailptr )                    //beginning and middle
    {
        if( temp->theItem == item )
            return true;
        temp = temp->next;
    }

    if( temp->theItem == item )
        return true;                            //last node

    return false;
}


int doubleList::retrievePosition( int item )
{
    int count = 1;
    node* temp = headptr;

    if( find( item ) == false )      //this guarantees the item is in the list
        return -1;

    while( temp != tailptr )
    {                                           //traverse the list
        if( temp->theItem == item )
            return count;
        temp = temp->next;
        count += 1;                         //increment a counter if not found
    }

    if( temp->theItem == item )         //it must be in the last position
    {                                   //verify this to be safe
        return count++;
    }

    return -1;
}
