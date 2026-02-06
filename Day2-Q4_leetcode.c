#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // Update the minimum price seen so far
        if (prices[i] < min_price) {
            min_price = prices[i];
        } 
        // Calculate potential profit and update max_profit if it's higher
        else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }

    return max_profit;
}

int main() {
    // Example 1
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    printf("Example 1 Output: %d\n", maxProfit(prices1, n1)); // Expected: 5

    // Example 2
    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);
    printf("Example 2 Output: %d\n", maxProfit(prices2, n2)); // Expected: 0

    return 0;
}