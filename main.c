#include <stdio.h>
#include <stdlib.h>

int main()
{
    char yesno;
    char name[20];
    char answer;
    int x;
    int pts = 0;
    printf("Welcome to my game... \n");
    printf("Start game??(Y or N): ");
    scanf(" %c", &yesno);
    switch(yesno)
    {
    case 'Y' :
    case 'y' :
        printf("Enter name: ");
        scanf("%s", name);
        do{
            printf("Welcome %s !! :D \n",name);
            printf("1) What is the capital of Nepal? \n");
            printf("a)Kathmandu \t b)Bhaktapur \n");
            printf("c)Patan \t d)Pokhara \n");
            printf("Answer: ");
            scanf(" %c", &answer);
            if(answer == 'a')
            {
                printf("Correct answer!!! \n");
                pts = pts + 1;
            }else{
                printf("Wrong answer!! \n");
                pts = pts - 1;
               /* printf("You got %d points. \n",pts);*/
            }

            printf("2) What is the national animal of China? \n");
            printf("a)Lion \t b)Elephant \n");
            printf("c)Giant Panda \t d)Red Panda \n");
            printf("Answer: ");
            scanf(" %c", &answer);
            if(answer == 'c')
            {
                printf("Correct answer!!! \n");
                pts = pts + 1;
            }else{
                printf("Wrong answer!! \n");
                pts = pts - 1;
               // printf("You got %d points. \n",pts);
            }

            printf("3) How many continents are there? \n");
            printf("a)10 \t b)7 \n");
            printf("c)5 \t d)6 \n");
            printf("Answer: ");
            scanf(" %c", &answer);
            if(answer == 'b')
            {
                printf("Correct answer!!! \n");
                pts = pts + 1;
            }else{
                printf("Wrong answer!! \n");
                pts = pts - 1;
               // printf("You got %d points. \n",pts);
            }

            printf("4) Which is the largest desert? \n");
            printf("a)Sahara \t b)Arabian \n");
            printf("c)Indian \t d)Kalahari \n");
            printf("Answer: ");
            scanf(" %c", &answer);
            if(answer == 'a')
            {
                printf("Correct answer!!! \n");
                pts = pts + 1;
            }else{
                printf("Wrong answer!! \n");
                pts = pts - 1;
               // printf("You got %d points. \n",pts);
            }

            printf("5) Which device is used to look at the stars? \n");
            printf("a)Eyes \t b)Stethoscope \n");
            printf("c)Telescope \t d)Binoculars \n");
            printf("Answer: ");
            scanf(" %c", &answer);
            if(answer == 'c')
            {
                printf("Correct answer!!! \n");
                pts = pts + 1;
                printf("Game Over!! \n");
                printf("Your Points are %d. \n",pts);
            }else{
                printf("Wrong answer!! \n");
                pts = pts - 1;
                printf("Game Over!! \n");
                printf("You got %d points. \n",pts);
            }
            printf("Play Again??(Y or N): ");
            scanf(" %c", &yesno);
            system("cls");
            switch(yesno)
            {
            case 'Y' :
            case 'y' :
                x = 0;
                break;
            case 'N' :
            case 'n' :
                x = 1;
                break;
            default  :
                printf("Invalid.. \n");
            }

          } while(x == 0);
          break;
    case 'N' :
    case 'n' :
        printf("Game Over.. \n");
        break;
    default :
        printf("Invalid \n");
    }
    printf("Thank You!");

    return 0;
}
