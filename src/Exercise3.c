/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	char words[100][100],small[100],large[100];
   
	int i=0,j=0,k,len;
	for(k=0;str[k]!='\0';k++)
	{
		if(str[k]!=' '&& str[k]!='\0')
		{
           words[i][j++]=str[k];
		}
		else{
			words[i][j]='\0';
			i++;j=0;
		}
	}
	len=i+1;
	strcpy(small,words[0]);
	strcpy(large,words[0]);
	for(k=0;k<len;k++)
	{
		if(strlen(small)>strlen(words[k]))
		{
			strcpy(small,words[k]);
		}
		if(strlen(large)<strlen(words[k]))
		{
			strcpy(large,words[k]);
		}
	}
	printf("Shotest word: %s",small);
	printf("\nLongest word: %s",large);


}
	


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
