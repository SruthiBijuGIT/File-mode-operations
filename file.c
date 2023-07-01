#include<stdio.h>
int main()
{
  char str[80];
  int c;
  FILE *fp;
  fp = fopen("samplefile.txt","w");
  if(fp)
  {
    fprintf(fp,"programming is a art.\n learn it,\n" );
    fclose(fp);
  } 
  else
  {
    printf("\nError:unable to open the file for for writing.");
  }
   fp = fopen("samplefile.txt","a");
   printf("enter ur message:");
   gets(str);
   fprintf(fp,"%s",str);
   printf("your message is appended in data.txt file.");
   fclose(fp);
   fp = fopen("samplefile.txt","r");
   printf("\n");
   if(fp)
 {
  printf("\nReading File...\n\n");
  while
  ((c = getc(fp)) !=EOF)
    putchar(c);
    fclose(fp);
   }
  
 else
 {
   printf("\nError:unable to open the file for reading.");
 }
 return 0;
 }
