#include <stdio.h>
int main()
{
    long long population = 1441981744;
    float womenPercent = 48.4;
    float literacyOverall = 85.95;
    float literacyMen = 80.95;
    float literacyWomen = 62.84;
    long long women = (population * womenPercent) / 100;
    long long men = population - women;
    long long literateMen = (men * literacyMen) / 100;
    long long literateWomen = (women * literacyWomen) / 100;
    long long illiterateMen = men - literateMen;
    long long illiterateWomen = women - literateWomen;
    printf("Population of Bharat in 2024: %lld\n", population);
    printf("Total Men: %lld\n", men);
    printf("Total Women: %lld\n\n", women);
    printf("Literate Men: %lld\n", literateMen);
    printf("Illiterate Men: %lld\n\n", illiterateMen);
    printf("Literate Women: %lld\n", literateWomen);
    printf("Illiterate Women: %lld\n", illiterateWomen);
    return 0;
}
