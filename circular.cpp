#include "circular.h"

circularList::circularList()
{
    tailptr = nullptr;
}                                       //intitialize an empty list


circularList::~circularList()
{
    node* temp = tailptr;   
    node* curr = tailptr;

    if (temp != tailptr)                //since memory is dynamically allocated
    {
        temp = temp->next;              //traverse the list and delete the node
        curr = curr->next;              //found at each stage
        do
        {
            curr = curr->next;
            delete temp;
            temp = curr;
        } while (curr != nullptr);
    }

    delete curr;
    tailptr = nullptr;
    return;
}




int circularList::size()
{
    node* temp = tailptr;
    int count = 0;

    if( tailptr == nullptr )            //if the list is empty, there's no size
        return 0;

    do
    {
        temp = temp->next;              //else, traverse the list and increment
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

    if( tailptr == nullptr )                //if the list is empty, 
    {
        temp->next = temp;                  // set tail equal to temp and 
        tailptr = temp;                     //map temp to itself
        return true;
    }


    prev = tailptr;
    curr = tailptr->next;

    if( temp->theItem <= curr->theItem )            //beginning
    {                                   //set temp to the old first of the list                        
        temp->next = prev->next;                    //map the end of the list
        tailptr->next = temp;                       //to the new first node
        return true;            
    }
            

    do                              //loop a traversal until theItem is greater
    {                               //or the end of the list is reached
        prev = curr;
        curr = curr->next;
    }while( curr != tailptr->next && temp->theItem > curr->theItem );

    if( temp->theItem < curr->theItem && temp->theItem > prev->theItem ) //mid
    {
        temp->next = curr;             //if the item is between two nodes            
        prev->next = temp;             //store temp between the two
        return true;
    }

    prev->next = temp;                  //else, the list has reached the end
    temp->next = curr;                  //
    tailptr = temp;


    return true;
}



void circularList::print(ostream& out, string seperator )
{
    node * temp = tailptr->next;
    int count = 0;

    if( temp == nullptr )                   //if there is no list, do not print
    {
        return;
    }

    do
    {
        if( count != 0)                     //else, print each node out
            out << ", ";                    //pad with a space if needed
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

    if (temp != tailptr)                //since memory is dynamically allocated
    {
        temp = temp->next;              //traverse the list and delete the node
        curr = curr->next;              //found at each stage
        do
        {
            curr = curr->next;
            delete temp;
            temp = curr;
        } while (curr != nullptr);
    }

    delete curr;
    tailptr = nullptr;
    return;
}


bool circularList::find( int item )
{
    node * temp = tailptr;

    if ( temp == nullptr )       //if the list is empty, nothing will be found
        return false;

    temp = temp->next;

    do                          //else, traverse the list and check for theItem
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

    if ( find(item) == false )          //if the item is not found, return an
        return -1;                      //invalid position

    temp = temp->next;

    do
    {
        if (temp->theItem == item)         //else, traverse the list to find it
            return count;
        temp = temp->next;
        count ++;

    } while (temp != tailptr->next);
}