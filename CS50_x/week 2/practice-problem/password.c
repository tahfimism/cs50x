// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool lower = false;
    bool upper = false;
    bool num = false;
    bool sym = false;

    int n = strlen(password);
    for(int i = 0; i < n; i++)
    {
        if(islower(password[i])) lower = true;
        else if(isupper(password[i])) upper = true;
        else if(isdigit(password[i])) num = true;
        else if(ispunct(password[i])) sym = true;
    }

    if(lower == true && upper == true && num == true && sym == true) return true;
    else return false;
}
