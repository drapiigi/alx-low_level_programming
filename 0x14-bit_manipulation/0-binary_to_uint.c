#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    int total = 0;
    int multiplier = 1;
    int index = strlen(b)-1;
    if(b == NULL)//if b is null
    {             
        return 0;
    }

    for (index;index >=0;index--)
    {
        if (b[index] !='1' || b[index]!='0')   //if b is neither 0 or 1 
        {
            return 0;
        }
       
       if ( b[index]=='1' )
        {
            total += multiplier;
           
        }
        multiplier *= 2;
    }
    return total;
}
