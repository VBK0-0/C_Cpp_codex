#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int ch;
    fp1 = fopen("C:/Users/VARJULA BALAKRISHNA/Documents/C_Cpp_codex/C_Basics_with_Examples/Test_file_1.txt","r");
    fp2 = fopen("C:/Users/VARJULA BALAKRISHNA/Documents/C_Cpp_codex/C_Basics_with_Examples/Test_file_2.txt","w");
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    printf("copied");
}