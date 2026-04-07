#include <iostream>
using namespace std;

void MaxProfit(int *prices, int n){

    int BestBuy[10000];
    BestBuy[0] = INT_MAX;
    cout << "BEST BUY'S : " <<  BestBuy[0] << " ";

      for(int i=1; i<n; i++){
        BestBuy[i] = min(BestBuy[i-1], prices[i-1]);
        cout << BestBuy[i] << " ";
      }
        cout << endl;
        
      int Maxprofit;
      for(int i=0; i<n; i++){
        int currprofit = prices[i] - BestBuy[i];
        Maxprofit = max(Maxprofit , currprofit);
      }
        cout << "Max Profit : " << Maxprofit << endl;
}

int main() {
    int prices[6] = {7,1,5,3,6,4};
    int n = 6;

    MaxProfit(prices, n);

return 0;
}