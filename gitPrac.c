//trying to get git to work
#include <stdio.h>

int main(void) {
    int outstandingShares = 76500000;
    int csAccounts;
    int GMEaccounts;
    printf("How many ComputerShare accounts are there?\n");
    scanf("%d", &csAccounts);
    GMEaccounts = csAccounts - 30000;
    float allOutstandingShare = (float)outstandingShares / GMEaccounts;
    float aosMinusRC = ((float)outstandingShares - 9000000) / GMEaccounts;
    float aosMinusInstitutional = ((float)outstandingShares - 36400000) / GMEaccounts;
    printf("Hello apes,\n");
    printf("You can call me the average guy.\n");
    printf("With %d accounts at ComputerShare it will take:\n", csAccounts);
    printf("76.5M / 349,000 = %.3f Shares (All Outstanding Shares)\n", allOutstandingShare); 
    printf("67.5M / 349,000 = %.3f Shares (All Outstanding Shares - RC’s shares)\n", aosMinusRC);
    printf("40.1M / 349,000 = %.3f Shares (All Outstanding Shares - Institutional ownership) ", aosMinusInstitutional);
    printf("These numbers are estimates. Don’t forget to do your part and DRS your shares.\n\n");
    printf("New apes count calculated from today's high score - the first account number I saw when we first started counting CS accounts.\n\n");
    printf("%d - 30,000 = %d (New CS accounts - previous accounts)\n", csAccounts, GMEaccounts);

    return 0;
}