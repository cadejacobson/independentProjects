#include "initial.h"

string getInitials(string name, string style)
{
    string initials;
    string init1;
    string init2;
    int init1Pos, init2Pos;
    
    if(name.empty() == true) //if empty, then disregard
        return "Invalid";
        
    if(countSpace(name) == 0)
    {
        init1 = name[0];
        return init1;
    }
    
    if(countSpace(name) == 1)
    {
        init1 = name[0];
        init2Pos = name.find_first_of(" ");
        init2 = name[init2Pos + 1];
        initials = init1 + init2;
        return initials;
    }
    
    else if(name.size() <= 3)   //using string.size()
        return name;
    else{
        init1Pos = name.find_first_of(" ");
        init1 = name[init1Pos + 1];
        
        init2Pos = name.find_last_of(" ");
        init2 = name[init2Pos + 1];
        initials += name.at(0) + init1 + init2;
    }
    
    return initials;
}

int countSpace(string name)
{
    int count = 0;
    int i;
    char pos;
    
    for(i = 0; i < name.length(); i += 1)
    {
        pos = name[i];
        if(pos == ' ')
            count += 1;
    }
    
    return count;
}