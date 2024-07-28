#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double use;

int Pyramid(void);
int Prime_Number(void);
int String_Length(void);
int Captcha_by_Math(void);
int Numbers_Type_Show(void);
int Password_Generator(void);
int Message_Repetition(void);
int Narcissistic_Number(void);
int Number_Guessing_Game(void);
int Mine_Guessing_Puzzle_Game(void);
int Uppercase_Lowercase_Converter(void);

int main() {
    int decision;

    printf("1. Pyramid. \n2. Prime Number. \n3. String Length. \n4. Captcha by Math. \n5. Numbers Type Show. \n6. Password Generator. \n");
    printf("7. Message Repetition. \n8. Narcissistic Number. \n9. Number Guessing Game. \n10. Mine Guessing Puzzle Game. \n");
    printf("11. Uppercase Lowercase Converter. \n\nWhat are You want to do: ");
    scanf("%d", &decision);

    clrscr();
    switch(decision) {
    case 1:
        Pyramid();
        break;

    case 2:
        Prime_Number();
        break;

    case 3:
        String_Length();
        break;

    case 4:
        Captcha_by_Math();
        break;

    case 5:
        Numbers_Type_Show();
        break;

    case 6:
        Password_Generator();
        break;

    case 7:
        Message_Repetition();
        break;

    case 8:
        Narcissistic_Number();
        break;

    case 9:
        Number_Guessing_Game();
        break;

    case 10:
        Mine_Guessing_Puzzle_Game();
        break;

    case 11:
        Uppercase_Lowercase_Converter();
        break;

    default:
        printf("\tPlease Choose Option 1~11. \n\n");
        printf("\a");
        main();
    }
}




int Pyramid() {
    int type, by, i, j, k, d=19, r, s;

    printf("1. Full Pyramid. \n2. Half Left Pyramid. \n3. Half Right Pyramid. \n4. Interval Full Pyramid. \n");
    printf("5. Interval Half Left Pyramid. \n6. Interval Half Right Pyramid. \n\nWhich type of Pyramid you want: ");
    scanf("%d", &type);

    switch(type) {
    case 1:
        printf("\n\n\t1. By * \n\t2. By Number \n\t3. By Latter \n\n\tpyramid by Which Character: ");
        scanf("%d", &by);

        clrscr();
        switch(by) {
        case 1:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=r; i>=1; --i) {
                for(s=i; s>=0; --s) {
                    printf(" ");
                }
                for(j=i; j<=r; ++j) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(s=r; s>=i; --s) {
                    printf(" ");
                }
                for(j=1; j<=i; ++j) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                char l='A';

                for(s=r; s>=i; --s) {
                    printf(" ");
                }
                for(j=1; j<=i; ++j) {
                    printf("%c ", l);
                    ++l;
                }
                printf("\n");
            }
            break;

        default:
            break;
        }
        break;

    case 2:
        printf("\n\n\t1. By * \n\t2. By Number \n\t3. By Latter \n\n\tpyramid by Which Character: ");
        scanf("%d", &by);

        clrscr();
        switch(by) {
        case 1:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=r; i>=1; --i) {
                for(j=i; j<=r; ++j) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(j=1; j<=i; ++j) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                char l='A';

                for(j=1; j<=i; ++j) {
                    printf("%c ", l);
                    ++l;
                }
                printf("\n");
            }
            break;

        default:
            break;
        }
        break;

    case 3:
        printf("\n\n\t1. By * \n\t2. By Number \n\t3. By Latter \n\n\tpyramid by Which Character: ");
        scanf("%d", &by);

        clrscr();
        switch(by) {
        case 1:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=r; i>=1; --i) {
                for(s=i-1; s>0; --s) {
                    printf("  ");
                }
                for(j=i; j<=r; ++j) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            k = r-1;
            for(i=1; i<=r; ++i) {
                for(s=k; s>0; --s) {
                    printf("  ");
                }
                for(j=1; j<=i; ++j) {
                    printf("%d ", j);
                }
                --k;
                printf("\n");
            }
            break;

        case 3:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            k = r-1;
            for(i=1; i<=r; ++i) {
                char l='A';

                for(s=k; s>0; --s) {
                    printf("  ");
                }
                for(j=1; j<=i; ++j) {
                    printf("%c ", l);
                    ++l;
                }
                --k;
                printf("\n");
            }
            break;

        default:
            break;
        }
        break;

    case 4:
        printf("\n\n\t1. By * \n\t2. By Number \n\t3. By Latter \n\n\tpyramid by Which Character: ");
        scanf("%d", &by);

        clrscr();
        switch(by) {
        case 1:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(s=i; s>1; --s) {
                    printf(" ");
                }
                for(j=r; j>=i; --j) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(s=1; s<=i; ++s) {
                    printf(" ");
                }
                for(j=i; j<=r; ++j) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                char l='A';
                for(s=1; s<=i; ++s) {
                    printf(" ");
                }
                for(j=i; j<=r; ++j) {
                    printf("%c ", l);
                    ++l;
                }
                printf("\n");
            }
            break;

        default:
            break;
        }
        break;

    case 5:
        printf("\n\n\t1. By * \n\t2. By Number \n\t3. By Latter \n\n\tpyramid by Which Character: ");
        scanf("%d", &by);

        clrscr();
        switch(by) {
        case 1:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(j=r; j>=i; --j) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(j=i; j<=r; ++j) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                char l='A';

                for(j=i; j<=r; ++j) {
                    printf("%c ", l);
                    ++l;
                }
                printf("\n");
            }
            break;

        default:
            break;
        }
        break;

    case 6:
        printf("\n\n\t1. By * \n\t2. By Number \n\t3. By Latter \n\n\tpyramid by Which Character: ");
        scanf("%d", &by);

        clrscr();
        switch(by) {
        case 1:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(s=i; s>1; --s) {
                    printf("  ");
                }
                for(j=r; j>=i; --j) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                for(s=0; s<i-1; ++s) {
                    printf("  ");
                }
                for(j=i; j<=r; ++j) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Enter the Number of Row: ");
            scanf("%d", &r);

            for(i=1; i<=r; ++i) {
                char l='A';
                for(s=0; s<i-1; ++s) {
                    printf("  ");
                }
                for(j=i; j<=r; ++j) {
                    printf("%c ", l);
                    ++l;
                }
                printf("\n");
            }
            break;

        default:
            break;
        }
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~6. \n\n");
        printf("\a");
        Pyramid();
    }

    if(by<1 || by>3) {
        for(k=20; k>=1; k=k-2) {
            for(s=k-2; s>=0; s=s-1) {
                printf(" ");
            }
            for(i=k-1; i<=d; ++i) {
                printf("• ");
            }
            printf("\n");
        }
        for(k=1; k<20; k=k+2) {
            for(s=-1; s<=k; s=s+1) {
                printf(" ");
            }
            for(i=d-1; i>k; i=i-1) {
                printf("• ");
            }
            printf("\n");
        }
        printf("\a");
    }


    //Back to Main Function or Stay in this Function
    printf("\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Pyramid();
    }
    else {
        clrscr();
        main();
    }
}




int Prime_Number() {
    int i, n, from, low, high, flag=0;

    printf("1. Check Prime Number. \n2. Prime Number from Start. \n3. Prime Number between Two Intervals. \n");
    printf("\n\tEnter Your Choice: ");
    scanf("%d", &from);

    clrscr();
    switch(from) {
    case 1:
        printf("Enter Number to Check: ");
        scanf("%d", &n);

        if(n==0 || n==1) {
            flag=1;
        }

        for(i=2; i<=n/2; ++i) {
            if(n%i==0) {
                flag = 1;
                break;
            }
        }

        if(flag==0) {
            printf("\n%d is A Prime Number. ", n);
        }
        else {
            printf("\n%d is not A Prime Number. ", n);
            printf("\a");
        }
        break;

    case 2:
        printf("Enter The Maximum Number: ");
        scanf("%d", &high);

        if(high != 0) {
            if(high<0) {
                high = high*(-1);
                printf("\a");
            }
            low = 1;
            printf("\nThe Prime Numbers under %d are: \n\t", high);

            while(low < high) {
                flag = 0;

                if(low<=1) {
                    ++low;
                    continue;
                }

                for(i=2; i<=low/2; ++i) {
                    if(low%i == 0) {
                        flag = 1;
                        break;
                    }
                }

                if(flag==0) {
                    printf("%d, ", low);
                }
                ++low;
            }
            printf("\b\b ");
        }
        else {
            printf("\n\tYou should be Enter without 0! \n\n");
            printf("\a");
        }
        break;

    case 3:
        printf("Enter Two Intervals (Low & High): \n");
        scanf("%d %d", &low, &high);

        if(low>high) {
            n = high;
            high = low;
            low = n;
            printf("\a");
        }
        n = 0;
        printf("\nThe Prime Numbers between %d and %d are: \n\t", low, high);

        while(low < high) {
            flag = 0;

            if(low<=1) {
                ++low;
                continue;
            }

            for(i=2; i<=low/2; ++i) {
                if(low%i == 0) {
                    flag = 1;
                    break;
                }
            }

            if(flag==0) {
                printf("%d, ", low);
                n = 1;
            }
            ++low;
        }

        if(n == 1) {
            printf("\b\b ");
        }
        else {
            printf("Not Found in this Range! \n\n");
            printf("\a");
        }
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~3. \n\n");
        printf("\a");
        Prime_Number();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Prime_Number();
    }
    else {
        clrscr();
        main();
    }
}




int String_Length() {
    int length;
    char*string[1000];

    printf("I can Calculate the Length of String. \n\nEnter String: \v");
    gets(string);

    length = strlen(string);

    if(length==0) {
        printf("\v");
        gets(string);

        length = strlen(string);
    }
    printf("\n\nYour String Length is: %d\n", length);


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        String_Length();
    }
    else {
        clrscr();
        main();
    }
}




int Captcha_by_Math() {
    int i, repeat, num1, num2, ans, op, input;

    printf("You will get Two Numbers between 1~50. \nAnd it will provide you to Plus or Minus or Multiply. \n\n");
    printf("How many Times you want to Repeat it: ");
    scanf("%d", &repeat);

    if(repeat < 1) {
        clrscr();
        printf("\tPlease Enter Posetive Number. \n\n");
        printf("\a");
        Captcha_by_Math();
    }

    srand(time(NULL));
    printf("\n\n");
    for(i=1; i<=repeat; ++i) {
        num1 = (rand()%50)+1;
        num2 = (rand()%50)+1;

        op = rand()%3;
        switch(op) {
        case 0:
            ans = num1+num2;

            printf("%d + %d = ", num1, num2);
            scanf("%d", &input);

            if(ans==input) {
                printf("\tIt's Correct. \n\n");
            }
            else {
                printf("\tSorry, It's wrong. \n\n");
            }
            break;

        case 1:
            ans = num1-num2;

            printf("%d - %d = ", num1, num2);
            scanf("%d", &input);

            if(ans==input) {
                printf("\tIt's Correct. \n\n");
            }
            else {
                printf("\tSorry, It's wrong. \n\n");
            }
            break;

        case 2:
            ans = num1*num2;

            printf("%d * %d = ", num1, num2);
            scanf("%d", &input);

            if(ans==input) {
                printf("\tIt's Correct. \n\n");
            }
            else {
                printf("\tSorry, It's wrong. \n\n");
            }
            break;
        }
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Captcha_by_Math();
    }
    else {
        clrscr();
        main();
    }
}




int Numbers_Type_Show() {
    int i, repeat, positive=0, negative=0, zero=0, even=0, odd=0;

    printf("How many Numbers you will Provide: ");
    scanf("%d", &repeat);
    if(repeat<1) {
        repeat = repeat*(-1);
        printf("\a");
    }

    int number[repeat];

    printf("\n\nYou can Separate every Numbers by Space for Input. \n\n\tInput Number: \n");
    for(i=1; i<=repeat; ++i) {
        scanf("%d", &number[i]);

        if(number[i]>0) {
            ++positive;
        }
        if(number[i]<0) {
            ++negative;
        }
        if(number[i]==0) {
            ++zero;
        }
        if(number[i]%2==0) {
            ++even;
        }
        if(number[i]%2!=0) {
            ++odd;
        }
    }

    printf("\n\nHere is the Summaries: \n\n");
    printf("\tPositive: %d \n", positive);
    printf("\tNegative: %d \n", negative);
    printf("\tZero: %d \n", zero);
    printf("\tEven: %d \n", even);
    printf("\tOdd: %d \n", odd);


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Numbers_Type_Show();
    }
    else {
        clrscr();
        main();
    }
}




int Password_Generator() {
    int i, number, length;
    char password;
    char*character="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.$=<\~-%&*:#;+!?@>/";

    printf("Enter the Length of Password: ");
    scanf("%d", &length);

    if(length < 1) {
        length = length*(-1);
        printf("\a");
    }

    printf("\nGenerated Password: ");
    srand(time(NULL));
    for(i=0; i<length; ++i) {
        number = rand()%(strlen(character)-1);
        password = character[number];
        printf("%c", password);
    }
    printf("\n\n");


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Password_Generator();
    }
    else {
        clrscr();
        main();
    }
}




int Message_Repetition() {
    int i, repeat;
    char*message[101];

    printf("Enter Your Message: \n\t");
    gets(message);

    if(strlen(message)==0) {
        gets(message);
    }
    printf("\nHow many times Repeat it: ");
    scanf("%d", &repeat);

    if(repeat < 1) {
        repeat = repeat*(-1);
        printf("\a");
    }

    printf("\n");
    for(i=1; i<=repeat; ++i) {
        printf("%d. %s\n", i, message);
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Message_Repetition();
    }
    else {
        clrscr();
        main();
    }
}




int Narcissistic_Number() {
    int i, number, choice, input, digit, low, high, length=0, pow_sum=0;

    printf("1. Check Narcissistic Number. \n2. Narcissistic Number from Start. \n3. Narcissistic Number between Range. \n");
    printf("\n\tEnter Your Choice: ");
    scanf("%d", &choice);

    clrscr();
    switch(choice) {
    case 1:
        printf("Enter Number to Check: ");
        scanf("%d", &input);

        if(input<1) {
            input = input*(-1);
        }
        number = input;

        while(input>0) {
            input/=10;
            ++length;
        }
        input = number;

        while(input>0) {
            digit = input%10;
            pow_sum += pow(digit, length);
            input /= 10;
        }

        if(number == pow_sum) {
            printf("\nYes, It is a Narcissistic Number. \n\n");
        }
        else {
            printf("\nNo, It is not a Narcissistic Number! \n\n");
            printf("\a");
        }
        break;

    case 2:
        printf("Enter The Maximum Number: ");
        scanf("%d", &high);

        if(high<1) {
            high = high*(-1);
            printf("\a");
        }
        low = 1;

        if(high != 0) {
            printf("\nNarcissistic Numbers under %d are: \n", high);

            for(i=low; i<=high; ++i) {
                length=0;
                pow_sum=0;
                number = i;

                while(number>0) {
                    number/=10;
                    ++length;
                }
                number = i;

                while(number>0) {
                    digit = number%10;
                    pow_sum += pow(digit, length);
                    number /= 10;
                }

                if(i == pow_sum) {
                    printf(" %d,", i);
                }
            }
            printf("\b \n\n");
        }
        else {
            printf("\n\tYou should be Enter without 0! \n\n");
            printf("\a");
        }
        break;

    case 3:
        printf("Enter Lowest & Highest Number: ");
        scanf("%d %d", &low, &high);

        if(low>high) {
            number = high;
            high = low;
            low = number;
            printf("\a");
        }
        printf("\nNarcissistic Number between %d and %d: \n", low, high);
        input = 0;

        for(i=low; i<=high; ++i) {
            length=0, pow_sum=0;
            number = i;

            while(number>0) {
                number/=10;
                ++length;
            }
            number = i;

            while(number>0) {
                digit = number%10;
                pow_sum += pow(digit, length);
                number /= 10;
            }

            if(i == pow_sum) {
                printf(" %d,", i);
                input = 1;
            }
        }

        if(input == 1) {
            printf("\b \n\n");
        }
        else {
            printf("\tNot Found in this Range! \n\n");
            printf("\a");
        }
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~3. \n\n");
        printf("\a");
        Narcissistic_Number();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Narcissistic_Number();
    }
    else {
        clrscr();
        main();
    }
}




int Number_Guessing_Game() {
    int number, difficulty, guess, attempt=0, score=100;

    printf("1. Easy: 1~50 and 10 Attempt. \n2. Medium: 1~100 and 8 Attempt. \n3. Hard: 1~200 and 6 Attempt. \n");
    printf("\nEnter your Decision: ");
    scanf("%d", &difficulty);

    clrscr();
    srand(time(NULL));
    switch(difficulty) {
    case 1:
        number = (rand()%50)+1;

        printf("I already Guess A Number between 1~50. \nYou Have only 10 Attempt. \n\n");
        while(1) {
            printf("Enter The Number: ");
            scanf("%d", &guess);
            ++attempt;

            if(guess < number) {
                printf("\tYour Number is Smaller. \n\n");
                score -= 10;
            }
            else if(guess == number) {
                printf("\nCongratulations, %d is Correct. \n", guess);
                printf("You guess the number in %d Attempt. \n\tSo, Your Score: %d\n\n", attempt, score);
                break;
            }
            else {
                printf("\tYour Number is Greater. \n\n");
                score -= 10;
            }

            if(attempt==10) {
                printf("\nSorry, Your 10 Attempt is over. \n\tThe Number was: %d", number);
                break;
            }
        }
        break;

    case 2:
        number = (rand()%100)+1;

        printf("I already Guess A Number between 1~100. \nYou Have only 8 Attempt. \n\n");
        while(1) {
            printf("Enter The Number: ");
            scanf("%d", &guess);
            ++attempt;

            if(guess < number) {
                printf("\tYour Number is Smaller. \n\n");
                score -= 12;
            }
            else if(guess == number) {
                printf("\n\tCongratulations, %d is Correct. ", guess);
                printf("You guess the number in %d Attempt. \n\tSo, Your Score: %d\n\n", attempt, score);
                break;
            }
            else {
                printf("\tYour Number is Greater. \n\n");
                score -= 12;
            }

            if(attempt==8) {
                printf("\nSorry, Your 8 Attempt is over. \n\tThe Number was: %d", number);
                break;
            }
        }
        break;

    case 3:
        number = (rand()%200)+1;

        printf("I already Guess A Number between 1~200. \nYou Have only 6 Attempt. \n\n");
        while(1) {
            printf("Enter The Number: ");
            scanf("%d", &guess);
            ++attempt;

            if(guess < number) {
                printf("\tYour Number is Smaller. \n\n");
                score -= 16;
            }
            else if(guess == number) {
                printf("\n\tCongratulations, %d is Correct. ", guess);
                printf("You guess the number in %d Attempt. \n\tSo, Your Score: %d\n\n", attempt, score);
                break;
            }
            else {
                printf("\tYour Number is Greater. \n\n");
                score -= 16;
            }

            if(attempt==6) {
                printf("\nSorry, Your 6 Attempt is over. \n\tThe Number was: %d", number);
                break;
            }
        }
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~3. \n\n");
        printf("\a");
        Number_Guessing_Game();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Number_Guessing_Game();
    }
    else {
        clrscr();
        main();
    }
}




int Mine_Guessing_Puzzle_Game() {
    int i, j, level, ud, lr, score=0, mine=0, max_mine;
    char*hide="0123456789*";
    char*dot="•";

    printf("1. Easy: 5 Matrix & 5 Mine (Max). \n2. Medium: 7 Matrix & 12 Mine (Max). \n3. Hard: 9 Matrix & 25 Mine (Max). \n\n\t Choose Level: ");
    scanf("%d", &level);

    switch(level) {
    case 1:
        ud = 5;
        lr = 5;
        max_mine = 5;
        break;

    case 2:
        ud = 7;
        lr = 7;
        max_mine = 12;
        break;

    case 3:
        ud = 9;
        lr = 9;
        max_mine = 25;
        break;

    default:
        clrscr();
        printf("\tPlease Chose 1~3: \n\n");
        printf("\a");
        Mine_Guessing_Puzzle_Game();
    }
    char num[ud][lr];
    printf("\n\n");

    srand(time(NULL));
    for(i=0; i<ud; ++i) {
        for(j=0; j<lr; ++j) {
            if(rand()%6 == 5) {
                if(mine<=max_mine) {
                    num[i][j] = '*';
                    ++mine;
                    continue;
                }
                else {
                    num[i][j] = hide[rand()%11];
                    if(num[i][j] == '*') {
                        num[i][j] = '0';
                        continue;
                    }
                }
            }
            else {
                num[i][j] = hide[rand()%11];
                if(num[i][j] == '*') {
                    if(mine<max_mine) {
                        ++mine;
                    }
                    else {
                        num[i][j] = '0';
                    }
                }
            }
        }
    }

    int input_ud=10, input_lr=10, show[ud][lr];

    while(1) {
        input_ud = input_ud-1;
        input_lr = input_lr-1;

        for(i=0; i<ud; ++i) {
            for(j=0; j<lr; ++j) {
                if(i==input_ud && j==input_lr) {
                    printf(" %c  ", num[i][j]);
                    show[i][j] = num[i][j];
                }
                else {
                    if(show[i][j] == num[i][j]) {
                        printf(" %c  ", num[i][j]);
                    }
                    else {
                        printf(" %s  ", dot);
                    }
                }
            }
            printf("\n\n");
        }

        if(num[input_ud][input_lr] == '*') {
            printf("\a");
            printf("\n\tGame over, It was a Mine. \n\t\t  Your Score: %d\n", score-1);

            for(i=0; i<ud; ++i) {
                printf("\n\n    ");
                for(j=0; j<lr; ++j) {
                    printf(" %c  ", num[i][j]);
                }
            }


            //Back to Main Function or Stay in this Function
            printf("\n\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
            scanf("%lf", &use);
            if(use != 0) {
                clrscr();
                Mine_Guessing_Puzzle_Game();
            }
            else {
                clrscr();
                main();
            }
        }
        else {
            printf("\n\nEnter up-down & left-right: ");
            scanf("%d %d", &input_ud, &input_lr);

            if(input_ud>ud || input_lr>lr) {
                continue;
            }
            ++score;
        }
    }
}




int Uppercase_Lowercase_Converter() {
    int i, type, length=1;
    char input[101];

    printf("1. Every Letter Lowercase. \n2. Every Letter Uppercase. \n\nWhich type of OUTPUT you want: ");
    scanf("%d", &type);

    clrscr();
    printf("\nNOTE: \vPlease, Complete your Typing text by using a DOT >.< \nOtherwise, the System will never Stop! \n\n\nEnter Message: ");
    switch(type) {
    case 1:
        for(i=0; i<length; ++i) {
            scanf("%c", &input[i]);
            if(input[i]>='A' && input[i]<='Z') {
                input[i] = input[i]+32;
            }
            if(input[i] == '.') {
                i += 9;
            }
            ++length;
        }

        printf("\n\n\tEvery Leatter Lowercase: \n");
        for(i=0; i<length-1; ++i) {
            printf("%c", input[i]);
        }
        printf("\n\n");
        break;

    case 2:
        for(i=0; i<length; ++i) {
            scanf("%c", &input[i]);
            if(input[i]>='a' && input[i]<='z') {
                input[i] = input[i]-32;
            }
            if(input[i] == '.') {
                i += 9;
            }
            ++length;
        }

        printf("\n\n\tEvery Leatter Uppercase: \n");
        for(i=0; i<length-1; ++i) {
            printf("%c", input[i]);
        }
        printf("\n\n");
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~2. \n\n");
        printf("\a");
        Uppercase_Lowercase_Converter();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter '0'... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use != 0) {
        clrscr();
        Uppercase_Lowercase_Converter();
    }
    else {
        clrscr();
        main();
    }
}