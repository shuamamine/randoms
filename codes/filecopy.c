#include <stdio.h>
#include <string.h>
int main ()
{
	FILE *fp1, *fp2;
	char ch;
	fp1=fopen ("C:\\File\\a.txt","r");
	fp2=fopen ("C:\\File\\b.txt","w");
	if (fp1 && fp2==NULL)
	{
		printf ("File does not exist");
	}
	else
	{
		while ((ch=fgetc(fp1))!=EOF)
		{
		    fputc (ch,fp2);	
		}
		fclose (fp1);
		fclose (fp2);
    }
    return 0;
}
