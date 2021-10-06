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
    printf("How many ComputerShare accounts are there in thousands?\n");
    scanf("%d", &csAccounts);
    GMEaccounts = csAccounts * 1000 - 30000;
    int GMEaccountsInK = GMEaccounts / 1000;
    printf("%d\n", GMEaccountsInK);
    printf("%d\n", GMEaccounts);

    float allOutstandingShare = (float)outstandingShares / GMEaccounts;
    float aosMinusRC = ((float)outstandingShares - 9000000) / GMEaccounts;
    float aosMinusInstitutional = ((float)outstandingShares - 36400000) / GMEaccounts;
    printf("Average positions in DRS to cover the float\n");
    printf("Hello apes,\n");
    printf("You can call me the average guy.\n");
    printf("With %d,000 accounts at ComputerShare it will take:\n", csAccounts);
    printf("76.5M / %d,000 = %.3f Shares (All Outstanding Shares)\n", GMEaccountsInK, allOutstandingShare); 
    printf("67.5M / %d,000 = %.3f Shares (All Outstanding Shares - RC’s shares)\n", GMEaccountsInK, aosMinusRC);
    printf("40.1M / %d,000 = %.3f Shares (All Outstanding Shares - Institutional ownership) ",GMEaccountsInK, aosMinusInstitutional);
    printf("These numbers are estimates. Don’t forget to do your part and DRS your shares.\n\n");
    printf("New apes count calculated from today's high score - the first account number I saw when we first started counting CS accounts.\n\n");
    printf("%d,000 - 30,000 = %d,000 (New CS accounts - previous accounts)\n", csAccounts, GMEaccountsInK);
    return 0;
//Need to beautify the numbers
}
