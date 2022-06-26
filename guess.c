#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("        ________               \n"); 
    printf("    _jgN########Ngg_           \n"); 
    printf("  _N##N@@""  ""9NN##Np_        \n"); 
    printf(" d###P            N####p       \n");     
    printf(" '^^'              T####       \n");     
    printf("                   d###P       \n");     
    printf("                _g###@F        \n"); 
    printf("             _gN##@P           \n");     
    printf("           gN###F'             \n"); 
    printf("          d###F                \n");     
    printf("         0###F                 \n"); 
    printf("         0###F                 \n"); 
    printf("         0###F                 \n"); 
    printf("         'NN@'                 \n"); 
    printf("                               \n"); 
    printf("          ___                  \n"); 
    printf("         q###r                 \n");                         
    printf("          ""                   \n\n");
    printf("****************************\n");
    printf("Welcome to the guessing game\n");
    printf("  Guess the Secret Number!\n     Try your luck!\n");
    printf("****************************\n\n\n");

    int seconds = time(0);
    srand(seconds);

    int bignumber = rand();

    int secretnumber = bignumber % 100;
    int attempt;
    int guess = 1;
    double score = 1000;

    int gotit = 0;

    int level;
    printf("level!\n");
    printf("(1) - Easy (15 attempts)\n(2) - Medium (10 attempts)\n(3) - Hard (6 attempts)\n");
    printf("Choose: ");
    scanf("%d", &level);
    while (level > 3) {
           printf("level!\n");
           printf("(1) - Easy (15 attempts)\n(2) - Medium (10 attempts)\n(3) - Hard (6 attempts)\n");
           printf("Choose: ");
           scanf("%d", &level);
    }

    int numberattempts;

    switch(level) {
        case 1:
            numberattempts = 15;
        case 2:
            numberattempts = 10;
        default:
            numberattempts = 6;
    }

         for (int i = 1; i <= numberattempts; i++)
    {
        printf("Atempts %d\n", guess);
        printf("Type your guess here: ");
        scanf("%d", &attempt);
        printf("Your guess was %d\n\n", attempt);

        if (attempt < 0)
        {
            printf("Please, don't use negative numbers\n");
            continue;
        }

        gotit = (attempt == secretnumber);
        int higher = attempt > secretnumber;

        if (gotit)
        {
            break;
        }
        else if (higher)
        {
            printf("Your guess was higher than the secret number\n");
        }
        else
        {
            printf("Your guessing was lower than the secret number\n\n");
        }
        guess++;

        double wronganswer = abs(attempt - secretnumber) / 2.0;
        score = score - wronganswer;
    }
    printf("Game Over!\n\n");

    if (gotit)
    {
        printf("\nYou got it right in %d attempts\n", guess);
        printf("You score: %.1f \n", score);
        printf("      ___________    \n");
        printf("     '._==_==_=_.'   \n");
        printf("     .-\\:      /-.   \n");
        printf("    | (|:.     |) |  \n");
        printf("     '-|:.     |-'   \n");
        printf("       \\::.    /     \n");
        printf("        '::. .'      \n");
        printf("          ) (        \n");
        printf("        _.' '.      _\n");
        printf("       """"""""`     \n");
    }
    else
    {
        printf("You lost, try again!\n");


        printf("                 uuuuuuu                   \n");
        printf("             uu$$$$$$$$$$$uu               \n");
        printf("          uu$$$$$$$$$$$$$$$$$uu            \n");
        printf("         u$$$$$$$$$$$$$$$$$$$$$u           \n");
        printf("        u$$$$$$$$$$$$$$$$$$$$$$$u          \n");
        printf("       u$$$$$$$$$$$$$$$$$$$$$$$$$u         \n");
        printf("       u$$$$$$$$$$$$$$$$$$$$$$$$$u         \n");
        printf("       u$$$$$$'   '$$$'   '$$$$$$u         \n");
        printf("       '$$$$'      u$u       $$$$'         \n");
        printf("        $$$u       u$u       u$$$          \n");
        printf("        $$$u      u$$$u      u$$$          \n");
        printf("         '$$$$uu$$$   $$$uu$$$$'           \n");
        printf("          '$$$$$$$'   '$$$$$$$'            \n");
        printf("            u$$$$$$$u$$$$$$$u              \n");
        printf("             u$'$'$'$'$'$'$u               \n");
        printf("  uuu        $$u$ $ $ $ $u$$       uuu     \n"); 
        printf(" u$$$$        $$$$$u$u$u$$$       u$$$$    \n");
        printf("  $$$$$uu      '$$$$$$$$$'     uu$$$$$$    \n");
        printf("u$$$$$$$$$$$uu    ''''''    uuuu$$$$$$$$$$  \n");
        printf("$$$$""'$$$$$$$$$$uuu   uu$$$$$$$$$'""$$$''  \n");
        printf(" """      "'$$$$$$$$$$$uu ''$'''''           \n");
        printf("           uuuu   $$$$$$$$$$uuu            \n");
        printf("  u$$$uuu$$$$$$$$$uu ""$$$$$$$$$$$uuu$$$   \n");
        printf("  $$$$$$$$$$""""           ""$$$$$$$$$$$'  \n");
        printf("   '$$$$$"                      "'$$$$""   \n");
        printf("     $$$'                         $$$$'    \n");
            }
}