#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *ptr;

ptr=(char*)malloc(20*sizeof(char));

if(ptr==NULL)
{
printf("Couldn't able to allloacate the requested memory\n:");

}
else
{
strcpy(ptr,"Tharim");
printf("Dynamically allocated memory content :%s\n",ptr);
}
free(ptr);
ptr=NULL;
}
