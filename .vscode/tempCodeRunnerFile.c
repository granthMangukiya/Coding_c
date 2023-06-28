int main( )
{
    int age;
    printf("enter your age");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("your age is 3");
        break;
    case 13:
        printf("your age is 13");
        break;
    case 23:
        printf("your age is 23");
        break;
    
    default:
        break;
    }
    return 0;
}
