var maxProfit(prices){
let minimumStockPrice=prices[0];
let profit=0;

for(let i=1;i<=prices.length;i++){
if(price[i]>minimumStockPrice){
  minimumStockPrice=price[i];
}
  currentProfit= price[i]-minimumStockPrice;

  profit = Math.max(profit,currentProfit);
}

  return profit;
}
  
