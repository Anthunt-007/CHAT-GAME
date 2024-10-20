#include <stdio.h>

#include <string.h>
//#include <string.h> for string manipulation

int is_a_month( char *month )
{
    // Create an integer i to iterate through the array in order to check if the month given is a month.
    int i = 0;

    // This is an array containing the month of the year

    // To stop people who don't know the month of the year ...

    const char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    while (i < 11 )
    {
        if (strcasecmp( month, months[i])== 0)
        {
            return 0;
        }     
        else
        {
            i++;
        }
    }

}
