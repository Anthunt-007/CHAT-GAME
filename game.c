#include <stdio.h>

#include <string.h>
//#include <string.h> for string manipulation

int main() {
    // Setting up variables first
    char fullname [125];
    // ans = answer
    char ans1[125] ;
    char ans2[125] ;
    char ans3[125] ;
    char ans4[125] ;
    char ans5[125] ;
    int age ;
    char day;
    int year;
    char month[125];
    char ans6[125] ;

    // To stop people who don't know the month of the year ...

    // There starts the code for the dialogue.

    printf("\nWelcome to my house !\nWhat's your name ?\n");

    printf("\nEnter your fullname : ");
    fgets(fullname, 125, stdin);

    printf("\nOh hello %sYou have a sweet name.\n\nMy name is computer. Nice to meet you.\n", fullname);

    printf("\n(Enter 'Nice to meet you too'.\nHe is very sensible to this kind of attention.)\n");

    printf("\nPlease answer : ");
    fgets(ans1, sizeof(ans1), stdin);

    // Remove the newline character from fgets
    ans1[strcspn(ans1, "\n")] = 0;

    if (strcasecmp(ans1, "Nice to meet you too") == 0){
        // strcmp for string comparison; strcmp(var, "String to compare with") == 0 and it returns 0 if the strings are equals.
        printf("\nThanks🥹\n");
    }
    else {
        printf("\nYou are mean...\nAnyway..\n");
    }
    printf("\nSo what do you do for a living ?\n");

    printf("\nPlease answer : You're a/an ");

    fgets(ans2, sizeof(ans2), stdin);

    ans2[strcspn(ans2, "\n")] = 0;

    printf("\nOh %s, that's nice.\n", ans2);

    printf("\nDo you enjoy it ?\n");

    printf("\nPlease answer : ");
    fgets(ans3, sizeof(ans3), stdin);

    printf("\nOh okay, I hope it'll just get better for you !\n");

    printf("\nWhere do you live ?\n");

    printf("\nPlease answer : ");
    fgets(ans4, sizeof(ans4), stdin);

    printf("\nInteresting, I heard about it. Isn't it a nice place to live in ?\n");

    printf("\nPlease answer by Yes, No or Kinda : ");
    fgets(ans5, sizeof(ans5), stdin);

    ans5[strcspn (ans5, "\n")] = 0;

    if (strcasecmp(ans5, "Yes") == 0){
        printf("\nI'm glad for you then🥹!\n");
    }
    else if (strcasecmp(ans5, "Kinda"))
    {
        printf("\nI hope it'll be better for you\n");
    }
    else if (strcasecmp(ans5, "No"))
    {
        printf("\nIn this case, stay safe, I don't want to lose my friend 👉🏾👈🏾\n");
    }
    else
    {
        printf("\nAs long as you are safe and sound, it's good for me !🥹\n");
    }
    
    printf("\nBy the way, how old are you ?\n");

    printf("\nPlease answer : ");
    scanf("%d", &age);

    if (age <35)
     {
        printf("\nHehe🤭, I'm older than you since I was created before Tim Berners-Lee invented the internet in 1989🥹\n");
     }
    else if (age >35)
     {
        printf("\nMy respect, older friend🧘🏾\n");
     }
    else{
        printf("\nIncorrect input\n");
     }

    printf("\nThen, what is your birth date ?\n");

    printf("\nPlease answer\n");

    getchar();

    printf("\nEnter the day : ");
    scanf("%d", &day);
    while (day > 31){
        scanf("%d", &day);
    }

    // Consume the newline character left by scanf
    getchar();

    printf("\nEnter the month: ");
    fgets(month, sizeof(month), stdin); 
    month[ strcspn (month, "\n") ] = 0;

    printf("\nEnter the year : ");
    scanf("%i", &year);

    printf("\nOh, %d %s of %i, I can't wait to be at your birthday party🥹. Will I be invited ?\n", day, month, year );

    getchar();

    printf("\nPlease answer : ");
    fgets(ans6, sizeof(ans6), stdin);

    printf("\nAlright🥹\n");

    return 0;
}
