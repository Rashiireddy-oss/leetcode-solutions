#include <stdio.h>
#include <string.h>

int isValid(char s[])
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            top++;
            stack[top] = ch;
        }
        else
        {
            if (top == -1)
            {
                return 0;
            }

            char topChar = stack[top];
            top--;

            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '['))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1
    char s1[] = "()[]{}";

    printf("Test Case 1: ");

    if (isValid(s1))
        printf("true\n");
    else
        printf("false\n");

    // Test Case 2
    char s2[] = "(]";

    printf("Test Case 2: ");

    if (isValid(s2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}