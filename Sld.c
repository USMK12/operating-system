
Lohitha192110507
/
operating-systems
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
operating-systems/11. Single Level Directory.c
@Lohitha192110507
Lohitha192110507 Create 11. Single Level Directory.c
 1 contributor
37 lines (35 sloc)  658 Bytes
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	
int nf=0,i=0,j=0,ch;
char mdname[10],fname[10][10],name[10];
printf("Enter the directory name:");
scanf("%s",mdname);
printf("Enter the number of files:");
scanf("%d",&nf);
do
{
printf("Enter file name to be created:");
scanf("%s",name);
for(i=0;i<nf;i++)
{
if(!strcmp(name,fname[i]))
break;
}
if(i==nf)
{
strcpy(fname[j++],name);
}
else
printf("There is already %s\n",name);
printf("Do you want to enter another file(yes - 1 or no - 0):");
scanf("%d",&ch);
}
while(ch==1);
printf("Directory name is:%s\n",mdname);
printf("Files names are:");
for(i=0;i<j;i++)
printf("\n%s",fname[i]);

}
