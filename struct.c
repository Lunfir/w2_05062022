#include <stdio.h>
#include <string.h>


#define SIZE 3

typedef struct // struct memory padding
{
    char id;            // 1 
    char title[50];     // 50
    int year;           // 4
    double price;       // 8
} Book;

void printBook(Book* book)
{
    printf("'%s' %c ----- %d: %g\n" , book->title
                                    , book->id
                                    , book->year
                                    , book->price);
}

void printAllBooks(Book lib[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printBook(&lib[i]);
    }
}

Book initBook(const char* title, char id, int year, double price)
{
    Book book;

    strcpy(book.title, title);
    book.id = id;
    book.year = year;
    book.price = price;

    return book;
}


int main()
{
    // Book bookA;
    // strcpy(bookA.title, "1984");
    // bookA.id = 'A';
    // bookA.year = 1999;
    // bookA.price = 12.23;

    Book library[SIZE];

    library[0] = initBook("1984", 'A', 1999, 12.23);
    library[1] = initBook("Tales", 'B', 2002, 1.23);
    library[2] = initBook("Dictionary", 'C', 2019, 125.23);

    printAllBooks(library, SIZE);

    printf("sizeof(Book): %d\n", sizeof(Book));

    return 0;
}
