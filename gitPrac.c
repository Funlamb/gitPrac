#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define atoa(x) #x

char* intBeautify(int a);

int main(void) {
    setlocale(LC_ALL, "");

    const struct lconv * const currentlocale = localeconv();

    printf("In the current locale, the default currency symbol is: %s\n",
        currentlocale->currency_symbol);

    int outstandingShares = 76500000;
    int csAccounts;
    int GMEaccounts;
    printf("How many ComputerShare accounts are there?\n");
    scanf("%d", &csAccounts);
    GMEaccounts = csAccounts - 30000;
    float allOutstandingShare = (float)outstandingShares / GMEaccounts;
    float aosMinusRC = ((float)outstandingShares - 9000000) / GMEaccounts;
    float aosMinusInstitutional = ((float)outstandingShares - 36400000) / GMEaccounts;
    printf("Average positions in DRS to cover the float\n");
    printf("Hello apes,\n");
    printf("You can call me the average guy.\n");
    printf("With %d accounts at ComputerShare it will take:\n", csAccounts);
    printf("76.5M / %d = %.3f Shares (All Outstanding Shares)\n", GMEaccounts, allOutstandingShare); 
    printf("67.5M / %d = %.3f Shares (All Outstanding Shares - RC’s shares)\n", GMEaccounts, aosMinusRC);
    printf("40.1M / %d = %.3f Shares (All Outstanding Shares - Institutional ownership) ",GMEaccounts, aosMinusInstitutional);
    printf("These numbers are estimates. Don’t forget to do your part and DRS your shares.\n\n");
    printf("New apes count calculated from today's high score - the first account number I saw when we first started counting CS accounts.\n\n");
    printf("%d - 30,000 = %d (New CS accounts - previous accounts)\n", csAccounts, GMEaccounts);
    printf("%s\n", intBeautify(GMEaccounts));
    return 0;
//Need to beautify the numbers
}

char* intBeautify(int a){
    //find the number of digits in the int
    int ENOUGH = 10;
    char* string;//[ENOUGH];
    sprintf(string, "%i", a);
    // int tempNum = a;
    // int intCount = 0;
    // while (a>0){
    //     tempNum = tempNum % 10;
    //     printf("%i", tempNum);
    //     intCount++;
    // }

    // printf("%d", intCount);
    //create a char* of length + ,s
    //formate the char*

    // setlocale(LC_ALL, "");
    // const struct lconv * const currentlocale = localeconv();
    // printf("In the current locale, the default currency symbol is: %s\n",
    //     currentlocale->currency_symbol);
    // std::cout.imbue(std::locale(""));
    // std::cout << 123456789 << "\n";
    // char *string = atoa(a);
    // char* intToString;
    // sprintf(string, "%i", a);
    return string;
}