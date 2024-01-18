#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

int maxProfit(vector<int>& harga) {
    int max_profit = 0;
    int min_price = harga[0];

    for (int i = 1; i < harga.size(); i++) {
        if (harga[i] > min_price) {
            max_profit = max(max_profit, harga[i] - min_price);
        } else {
            min_price = harga[i];
        }
    }

    return max_profit;
}


int main(){
    vector<int> harga_abc = {4, 3, 6, 5, 8, 7, 6};
    vector<int> harga_xyz = {5, 3, 6, 7, 10, 9, 8};

    int profit_abc = maxProfit(harga_abc);
    int profit_xyz = maxProfit(harga_xyz);

    if (profit_abc > profit_xyz) {
        cout << "Saham pilihan = harga_abc." << endl;
    } else if (profit_abc < profit_xyz) {

return 0;
}
