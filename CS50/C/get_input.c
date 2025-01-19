#include<cs50.h>
#include<stdio.h>

int main(voide)
{
    string first_name = get_string("What is your first name?\n");
    string last_name = get_string("What is your last name?\n");
    printf("Hello, %s %s\n", first_name, last_name);
}