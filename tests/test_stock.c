#include <stdio.h>
#include "../src/stock.h"

void test_normal_case() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    printf("Test normal case: %s\n",
           maxProfit(prices, 6) == 5 ? "PASSED" : "FAILED");
}

void test_no_profit() {
    int prices[] = {7, 6, 4, 3, 1};
    printf("Test no profit: %s\n",
           maxProfit(prices, 5) == 0 ? "PASSED" : "FAILED");
}

void test_single_day() {
    int prices[] = {5};
    printf("Test single day: %s\n",
           maxProfit(prices, 1) == 0 ? "PASSED" : "FAILED");
}

void test_empty_array() {
    printf("Test empty array: %s\n",
           maxProfit(NULL, 0) == 0 ? "PASSED" : "FAILED");
}

int main() {
    test_normal_case();
    test_no_profit();
    test_single_day();
    test_empty_array();
    return 0;
}
