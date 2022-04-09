#include <iostream>
#include <string>

using namespace std;

class circularList
{
    public:
        circularList( );
        ~circularList( );
        bool find( int item );
        int retrievePosition( int item );
        int size( );
        bool empty( );

        bool insert( int item );
        void print( ostream &out, string seperator = ", " );
        void clear( );


    private:

    struct node
    {
        int theItem;
        node *next;
    };
    node *tailptr;      
};
