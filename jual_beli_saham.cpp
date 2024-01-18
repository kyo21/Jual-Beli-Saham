#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

int maxProfit(std::vector<int>& harga) {
    int max_profit = 0;
    int min_price = harga[0];

    for (int i = 1; i < harga.size(); i++) {
        if (harga[i] > min_price) {
            max_profit = std::max(max_profit, harga[i] - min_price);
        } else {
            min_price = harga[i];
        }
    }

    return max_profit;
}


int main(){


return 0;
}
