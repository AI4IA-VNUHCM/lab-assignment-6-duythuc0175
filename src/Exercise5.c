/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int size=strlen(str);
	char buf[size];
	int i=0;
   while(*str)
    {
        if(*str == '(' || *str == '[' || *str == '{')
        {
            buf[i] = *str;
            i++;
        }
        if(*str == ')')
        {
            if(buf[i - 1] == '(')
                i--;
            else
               i= 0;
        }
        if(*str == ']')
        {
            if(buf[i - 1] == '[')
                i--;
            else
                i= 0;
        }
        if(*str == '}')
        {
            if(buf[i - 1] == '{')
                i--;
            else
                i= 0;
        }
        str++;
    }
    if(i == 0)

        printf("Valid");
    else
       printf("Invalid");
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
