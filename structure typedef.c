#include <stdio.h>
#include <string.h>
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;
void printBook(Book b) {
    printf("\nBook Title : %s\n", b.title);
    printf("Author     : %s\n", b.author);
    printf("Year       : %d\n", b.year);
}
int main() {
    Book book1;
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Brian W. Kernighan and Dennis M. Ritchie");
    book1.year = 1978;
    printBook(book1);
    return 0;
}
