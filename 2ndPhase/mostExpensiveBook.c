
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[100];
    char author[100];
    float price;
    char genre[50];
} Book;
int main()
{
    // Write C code here
    int n;
    printf("Enter the number of books that you want to list:");
    scanf("%d", &n);
    Book booklist[55];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the book name: ");
        scanf("%s", &booklist[i].name);
        printf("Enter the author name: ");
        scanf("%s", &booklist[i].author);
        printf("Enter the price of the book: ");
        scanf("%f", &booklist[i].price);
        printf("Enter the genre of book: ");
        scanf("%s", &booklist[i].genre);
    }
    int expensiveIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (booklist[i].price > booklist[expensiveIndex].price)
        {
            expensiveIndex = i;
        }
    }
    printf("\nList of Books:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("  Name: %s\n", booklist[i].name);
        printf("  Author: %s\n", booklist[i].author);
        printf("  Price: %.2f\n", booklist[i].price);
        printf("  Genre: %s\n", booklist[i].genre);
    }
    printf("\nMost Expensive Book:\n");
    printf("  Name: %s\n", booklist[expensiveIndex].name);
    printf("  Author: %s\n", booklist[expensiveIndex].author);
    printf("  Price: %.2f\n", booklist[expensiveIndex].price);
    printf("  Genre: %s\n", booklist[expensiveIndex].genre);

    return 0;
}