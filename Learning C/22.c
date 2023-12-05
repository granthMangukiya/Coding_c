#include <stdio.h>

int main()
{

    char input;
    float KmsToMiles = 0.621371;
    float InchesToFoot = 0.0833333;
    float CmsToInches = 0.393701;
    float PoundToKgs = 0.453592;
    float InchesToMeters = 0.0254;
    float first, second;
    
    while (1)
    {
        printf("Enter the character. q to quit\n        1. kms to miles\n        2. inches to foot\n        3. cms to inches\n        4. pound to kgs\n        5. inches to meter\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        case '1':
            printf("Enter quantity in first unit:\n");
            scanf("%f", &first);
            second = first * KmsToMiles;
            printf("%f kms is equal to %f miles\n\n\n", first, second);
            break;

        case '2':
            printf("Enter quantity in first unit:\n");
            scanf("%f", &first);
            second = first * InchesToFoot;
            printf("%f inches is equal to %f foot\n\n\n", first, second);
            break;

        case '3':
            printf("Enter quantity in first unit:\n");
            scanf("%f", &first);
            second = first * CmsToInches;
            printf("%f cms is equal to %f inches\n\n\n", first, second);
            break;

        case '4':
            printf("Enter quantity in first unit:\n");
            scanf("%f", &first);
            second = first * PoundToKgs;
            printf("%f pounds is equal to %f kgs\n\n\n", first, second);
            break;

        case '5':
            printf("Enter quantity in first unit:\n");
            scanf("%f", &first);
            second = first * InchesToMeters;
            printf("%f inches is equal to %f meters\n\n\n", first, second);
            break;

        default:
            break;
        }
    }
end:
    return 0;
}
