#include <stdio.h>

int getInput(int min, int max) {
    int input;
    while (1) {
        printf("Enter your answer: ");
        scanf("%d", &input);
        if (input >= min && input <= max)
            break;
        else
            printf("Invalid input. Please enter a number between %d and %d.\n", min, max);
    }
    return input;
}

int main() {
    int level, reply, totalScore = 0, playAgain = 1;

    printf("Welcome to the Quiz Game!\n");
    printf("Best of luck for the game!\n");

    while (playAgain == 1) {
        printf("\nChoose a level to play:\n");
        printf("1. Easy\n2. Medium\n3. Hard\n");
        level = getInput(1, 3);

        if (level == 1) {
            printf("\n--- Easy Level ---\n");

            printf("Q1: Which symbol is used to end a statement in C?\n");
            printf("1. ,\n2. :\n3. ;\n4. .\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q2: Which header file is used for printf and scanf?\n");
            printf("1. stdio.h\n2. conio.h\n3. string.h\n4. math.h\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q3: Which data type is used for whole numbers?\n");
            printf("1. float\n2. char\n3. int\n4. double\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q4: What does C use to define a block of code?\n");
            printf("1. []\n2. ()\n3. {}\n4. <>\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q5: Which format specifier is used for integers?\n");
            printf("1. %%c\n2. %%d\n3. %%f\n4. %%s\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q6: What is the value of 5 + 3 in C?\n");
            printf("1. 8\n2. 53\n3. 15\n4. 35\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q7: What does 'int' stand for?\n");
            printf("1. Integer\n2. Interval\n3. Inside\n4. Internal\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q8: Which operator is used for assignment?\n");
            printf("1. ==\n2. :=\n3. =\n4. =>\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q9: What is the output of: printf(\"%%d\", 10);\n");
            printf("1. %%d\n2. 10\n3. Error\n4. %%d\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q10: Which keyword is used to declare a variable?\n");
            printf("1. int\n2. main\n3. include\n4. return\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");
        }

        else if (level == 2) {
            printf("\n--- Medium Level ---\n");

            printf("Q1: Which loop runs at least once?\n");
            printf("1. for\n2. while\n3. do-while\n4. switch\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q2: What is the result of 10 %% 3?\n");
            printf("1. 3\n2. 1\n3. 0\n4. 10\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q3: Which header is used for string functions?\n");
            printf("1. stdlib.h\n2. math.h\n3. string.h\n4. stdio.h\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q4: Which keyword is used for decision making?\n");
            printf("1. case\n2. default\n3. if\n4. loop\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q5: How do you start a comment in C?\n");
            printf("1. ##\n2. //\n3. --\n4. **\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q6: What is the size of int (typically)?\n");
            printf("1. 2 bytes\n2. 4 bytes\n3. 8 bytes\n4. 1 byte\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q7: Which function is used to take input?\n");
            printf("1. input()\n2. gets()\n3. scanf()\n4. read()\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q8: What is the default return type of main()?\n");
            printf("1. void\n2. int\n3. float\n4. char\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q9: Which symbol is used for address-of?\n");
            printf("1. *\n2. &\n3. %%\n4. $\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q10: What will printf(\"%%c\", 65) print?\n");
            printf("1. A\n2. 65\n3. %%c\n4. Error\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");
        }

        else if (level == 3) {
            printf("\n--- Hard Level ---\n");

            printf("Q1: What is a pointer?\n");
            printf("1. A variable\n2. An address holder\n3. A function\n4. A loop\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q2: What does *ptr mean in C?\n");
            printf("1. Pointer to a pointer\n2. Address\n3. Value at address\n4. None\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q3: Which function allocates memory?\n");
            printf("1. malloc()\n2. int()\n3. alloc()\n4. mem()\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q4: What is NULL in C?\n");
            printf("1. 0\n2. Empty string\n3. Nothing\n4. Invalid\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q5: Which loop is best when number of iterations is known?\n");
            printf("1. for\n2. while\n3. do-while\n4. if\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q6: Which keyword is used to return a value?\n");
            printf("1. back\n2. return\n3. stop\n4. break\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q7: What does strlen() return?\n");
            printf("1. Size of array\n2. Number of characters\n3. String\n4. Nothing\n");
            reply = getInput(1, 4);
            if (reply == 2) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q8: What is the output of sizeof(char)?\n");
            printf("1. 4\n2. 2\n3. 1\n4. 8\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q9: Which function is used to copy strings?\n");
            printf("1. strcpy()\n2. copy()\n3. strcopy()\n4. strcat()\n");
            reply = getInput(1, 4);
            if (reply == 1) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");

            printf("Q10: Which symbol is used for dereferencing a pointer?\n");
            printf("1. &\n2. $\n3. *\n4. #\n");
            reply = getInput(1, 4);
            if (reply == 3) { printf("Correct Answer!\n"); totalScore++; } else printf("Wrong Answer!\n");
        }

        printf("\nDo you want to play another round? (1 = Yes, 0 = No): ");
        playAgain = getInput(0, 1);
    }

    printf("\nThanks for playing our quiz game!\n");
    printf("Your total score is: %d\n", totalScore);

    return 0;
}