#include <stdio.h>


int estpalindrome1(char ch[])
{
int i=0;
	int taille=0;

	 while(ch[i++]!='\0');
	taille=i-1;
	for (i=0;i<taille-i-1;i++)
	{
	      if (ch[i]!=ch[taille-i-1])
			return 0;
	}
	return 1;
}

/*int estpalindrome2(char *ch)
{
char *i,*j;
	int taille;
	i=ch;

	while (*i++!='\0');
	taille=i-ch-1;
	for (i=ch,j=ch+taille-1;i<j;i++,j--)
	{
	if(*i!=*j)
			return 0;
	}
	return 1;
}
*/

int main (void)

{

char ch[50];

printf ("donner une chaine");
scanf("%s",ch);


if (estpalindrome1(ch)==1)
{
	puts("palindrome");
}
	else
	{
	puts ("non palindrome");
	}

return 0;
}


		

