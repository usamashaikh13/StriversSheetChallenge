#include <bits/stdc++.h>

using namespace std;

int maximumProfit(vector<int> &prices) {
    int n = prices.size();
    if (n <= 1)
        return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        maxProfit = max(maxProfit, prices[i] - minPrice);
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> prices(n);
        for (int i = 0; i < n; i++) {
            cin >> prices[i];
        }

        int result = maximumProfit(prices);
        cout << result << endl;
    }

    return 0;
}
