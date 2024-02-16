#include <stdio.h>
#include <math.h>

// I need to write tests for this PRIOR to writing the code, remember that this takes in a character not a string
// I can be safe to assume that it will only take a char input, as user presses key (even still ensure valid ascii range), char is sent through
// Always think of edge cases
// I need to create the rotars, which will HAVE to be static, never mutate original arrays!

// SO I need a function to handle the creation of the rotars?

// ok, so now i somewhat remember that C is statically typed, and the syntax surrounding that,

// I CAN GET TO PLANNING THE APP NOT JUST THIS FUNCTION!!!!

// Can I write the whole thing in C? 
// C can handle graphics, with some manipulation and libraries, would be cool to attempt as well

/**
// so I need a program to visualise the macine
 * a program which handles the function
    a middleware program to pass the data between the files

    realistically I think that writing it all in C could be easiest or all in JS
    but I want to be able to write C as the back end code in future, so having a 
    middleware compiler to handle the i/o stream from TS to C would be the best way

    TS due to being statically typed can ensure that the data is of type char
    Node.JS to handle and pass the data? can Node run programs that aren't JS?
    C to handle the functionality of the input char being encrypted.

    I need to create the back end first
    then the middleware
    then the front end

    That way I can ensure that the functions work prior to creating the visual side of things. 
 * 
*/

int main (void)
{
    char rotar1[25];
    rotar1[0] = 'A';
    rotar1[1] = 'B';
    printf("Hello, World!\n%c, %c, should read A, B", rotar1[0], rotar1[1]);
    return 0;
}