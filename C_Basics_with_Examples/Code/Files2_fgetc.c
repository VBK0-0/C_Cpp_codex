#include<stdio.h>
int main()
{
    //int fgetc(FILE* stream);
    FILE* fp = fopen("C:/Users/VARJULA BALAKRISHNA/Documents/C_Cpp_codex/C_Basics_with_Examples/Test_file.txt","r");
    int ch;
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch); //Hi
    }
    return 0;
}