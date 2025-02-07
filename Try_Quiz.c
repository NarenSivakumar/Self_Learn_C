#include<stdio.h>
#include<ctype.h>

int main()
{
    char Questions[][100] = { "A. What is your name?", "B. How old are you?", "C. Where do you live?\n" };

    char Options[][100] = { "A. Aravind", "B. Lekshmi", "C. David", "D. Thomas",
                             "A. 12", "B. 21", "C. 30", "D. 35", 
                             "A.Hyderabad", "B.Mumbai", "C.Kochi", "D.Chennai\n" };
    
    char Answers[3] = {'A', 'B', 'D'};
    
    int numberofQuestions = sizeof(Questions)/sizeof(Questions[0]);
    char Guess;
    int Score = 0;

    printf("QUIZ GAME\n");

    for(int i = 0; i <numberofQuestions; i++)
    {
        printf("*****************\n");
        printf("%s\n", Questions[i]);
        printf("****************\n");
        for(int j = 0; j < 4; j ++)
        {
            printf("%s\n", Options[i * 4 + j]);
        }

        scanf(" %c", &Guess);
        Guess = toupper(Guess);

        if(Guess == Answers[i])
        {
            printf("You're Correct!\n");
            Score++;
        }
        else{
            printf("OOPS, You're Wrong!\n");
        }
    }    
    printf("**************\n");
    printf("Final score : %d/%d \n", Score, numberofQuestions);
    printf("***************\n");
    if(Score == 3)
    {
        printf("Well Done you got 3 out of 3\n");
        return 0;
    }
    else if(Score == 2) {
        printf("Ooh! You've missed only one\n");
        return 0;
    }
    else{
        printf("Oh Oh, you SHIT!, Better luck next time\n");
        return 0;
    }
    }