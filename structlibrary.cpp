#include <cstdio>
#include <iostream>

struct id
{
    const char * title;
    const char * author;
    const char * publisher;
    const char * subject;
    long long int ISBN;
    float OCLC;
    float dewey;
    int pubyear;
    int acyear;
    int copies;
};

int main()
{
    struct id book = {"Sherlock Holmes", "Conan Doyle", "Penguin", "Mystery", 9788420739533,  823.91, 101.01, 1892, 1900, 18};
    printf("Book: %s\n",book.title);
    printf("Author: %s\n",book.author);
    printf("Publisher: %s\n",book.publisher);
    printf("Subject: %s\n",book.subject);
    printf("ISBN: %lld\n",book.ISBN);
    printf("OCLC: %f\n",book.OCLC);
    printf("Dewey: %f\n",book.dewey);
    printf("Year Published: %d\n",book.pubyear);
    printf("Year Acquired: %d\n",book.acyear);
    printf("Total Copies: %d\n",book.copies);
}
