#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
struct student Harry, Ravi, Shubham;

void print()
{
    printf("%s", Harry.name);
}
int main()
{
    struct student Harry, Ravi, Shubham;
    Harry.id = 1;
    Ravi.id = 2;
    Shubham.id = 3;
    Harry.marks = 66;
    Ravi.marks = 446;
    Shubham.marks = 446;
    Harry.fav_char = 'p';
    Ravi.fav_char = 'p';
    Shubham.fav_char = 'p';
    strcpy(Harry.name, "Harry Potter Student of the year");

    printf("Harry got %d maks\n", Harry.marks);
    printf("harry's name is: %s", Harry.name);
    print();
    return 0;
}