/* Stock spanner algorithm**/
class StockSpanner {
  arr: number[];

  constructor() {
    this.arr = [];
  }

  next(price: number): number {
    let count = 0;
    this.arr.push(price);

    let i = this.arr.length - 1;

    while (i >= 0) {
      if (this.arr[this.arr.length - 1] >= this.arr[i]) {
        count++;
      } else {
        break;
      }

      i--;
    }
    return count;
  }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * var obj = new StockSpanner()
 * var param_1 = obj.next(price)
 */
