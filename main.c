#include<stdio.h>

int main()
{
    FILE *fptr;
    int input;
    printf("Enter how much further: ");
    scanf("%d", &input); // ! My compiler can't handle over 5954, do your thinking
    if (input>=1)
    { 
        fptr = fopen("useless.py", "w");
        if (!fptr)
        {
            puts("Don't open this in a read only directory you fucking idiot");
            return 1;
        }
        fprintf(fptr, "inp = int(input(\"Enter the number: \"))\n");
        fprintf(fptr, "if inp == 1:\n\tprint(\"Odd\")\n");
        for (int i = 1; i < input; i++)
        {
            const char *res = ((i+1)%2==0)?"Even":"Odd";
            fprintf(fptr, "elif inp == %d:\n\tprint(\"%s\")\n", i+1, res);
        }
        fprintf(fptr, "else:\n\tprint(\"Please enter under or equal to %d\")", input);
        fclose(fptr);
    }
    return 0;
}
