#include <stdio.h>
#include <string.h>
int main ()
{
	FILE *fp1, *fp2, *fp3;
	char ch;
	fp1=fopen ("C:\\File\\a.txt","r");
	fp2=fopen ("C:\\File\\b.txt","r");
	fp3=fopen ("C:\\File\\c.txt","w");
	if (fp1 && fp2 && fp3==NULL)
	{
		printf ("File does not exist");
	}
	else
	{
		while ((ch=fgetc(fp1))!=EOF)
		{
		    fputc (ch,fp3);	
		}
		while ((ch=fgetc(fp2))!=EOF)
		{
		    fputc (ch,fp3);	
		}
		fclose (fp1);
		fclose (fp2);
		fclose (fp3);
    }
    return 0;
}
