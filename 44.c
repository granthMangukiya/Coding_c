#include <stdio.h>
struct drivers
{
    char name[35];
    char dl[35];
    char Route[70];
    int Kms;
};

int main()
{
    struct drivers d1, d2, d3;
    printf("Enter the details of the drivers\n");

    printf("Enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dl of the first driver\n");
    scanf("%s", &d1.dl);

    printf("Enter the Route of the first driver\n");
    scanf("%s", &d1.Route);

    printf("Enter the Kms of the first driver\n");
    scanf("%s", &d1.Kms);

    printf("Enter the details of second driver\n");
    printf("Enter the name of the second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dl of the second driver\n");
    scanf("%s", &d2.dl);

    printf("Enter the Route of the second driver\n");
    scanf("%s", &d2.Route);

    printf("Enter the Kms of the second driver\n");
    scanf("%s", &d2.Kms);

    printf("Enter the details of third driver\n");
    printf("Enter the name of the third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dl of the third driver\n");
    scanf("%s", &d3.dl);

    printf("Enter the Route of the third driver\n");
    scanf("%s", &d3.Route);

    printf("Enter the Kms of the third driver\n");
    scanf("%s", &d3.Kms);

    printf("*****Printing information of the drivers*****\n");
    printf("For Driver number 1:\nName is %s\nDL number is %s\nRoute is %s\nKms is %d\n ", d1.name, d1.dl, d1.Route, d1.Kms); 
    printf("For Driver number 2:\nName is %s\nDL number is %s\nRoute is %s\nKms is %d\n ", d2.name, d2.dl, d2.Route, d2.Kms);
    printf("For Driver number 3:\nName is %s\nDL number is %s\nRoute is %s\nKms is %d\n ", d3.name, d3.dl, d3.Route, d3.Kms);
    

    return 0;
}