#include "circular.h"

circularList::circularList()
{
    tailptr = nullptr;
}


circularList::~circularList()
{
    node* temp = tailptr;
    node* curr = tailptr;

    if( temp != tailptr )
    {
        temp = temp->next;
        curr = curr->next;
        do
        {
            curr = curr->next;
            delete temp;
            temp = curr;
        }while( curr != nullptr );
    }

    delete curr;
    tailptr = nullptr;
}

int circularList::size()
{
    node* temp = tailptr;
    int count = 0;

    if( tailptr == nullptr )
        return 0;

    do
    {
        temp = temp->next;
        count += 1;
    }while (temp != tailptr);

    return count;
}

bool circularList::empty()
{
    if( size() == 0 )
        return true;

    return false;
}

bool circularList::insert( int item )
{
    node *temp = nullptr;
    node *prev;
    node *curr;

    temp = new (nothrow) node;
    if( temp == nullptr )
        return false;

    temp->theItem = item;

    if( tailptr == nullptr )
    {
        temp->next = temp;
        tailptr = temp;
        return true;
    }


    prev = tailptr;
    curr = tailptr->next;

    if( temp->theItem <= curr->theItem )
    {                                           //beginning
        temp->next = prev->next;
        tailptr->next = temp;
        return true;
    }

    do
    {
        prev = curr;
        curr = curr->next;
    
    }while( curr != tailptr->next && temp->theItem > curr->theItem );

    if( temp->theItem < curr->theItem && temp->theItem > prev->theItem )
    {
        temp->next = curr;                  //mid
        prev->next = temp;
        return true;
    }

    prev->next = temp;
    temp->next = curr;                  //end
    tailptr = temp;


    return true;
}



void circularList::print(ostream& out, string seperator )
{
    node * temp = tailptr->next;
    int count = 0;

    if( temp == nullptr )
    {
        return;
    }

    do
    {
        if( count != 0)
            out << ", ";
        out << temp->theItem;
        temp = temp->next;
        count += 1;
    }while( temp != tailptr->next );

    return;
}



void circularList::clear()
{
    node* temp = tailptr;
    node* curr = tailptr;

    if (temp != tailptr)
    {
        temp = temp->next;
        curr = curr->next;
        do
        {
            curr = curr->next;
            delete temp;
            temp = curr;
        } while (curr != nullptr);
    }

    delete curr;
    tailptr = nullptr;
}


bool circularList::find( int item )
{
    node * temp = tailptr;

    if ( temp == nullptr )
        return false;

    temp = temp->next;

    do
    {
        if( temp->theItem == item )
            return true;
        temp = temp->next;
    
    }while( temp != tailptr->next );



    return false;
}



int circularList::retrievePosition(int item)
{
    node* temp = tailptr;
    int count = 1;

    if (temp == nullptr)
        return -1;

    temp = temp->next;

    do
    {
        if (temp->theItem == item)
            return count;
        temp = temp->next;
        count ++;

    } while (temp != tailptr->next);

    return -1;
}