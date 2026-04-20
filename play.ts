// function mergeAlternatively(word1: string, word2: string) {
//   let str: string = "";

//   const { maxlen, minlen, bool } = getMinAndMaxLen(word1, word2);

//   for (let i = 0; i < maxlen; i++) {
//     if (i <= minlen - 1) {
//       str += word1[i];
//       str += word2[i];
//     } else {
//       if (bool) str += word2[i];
//       else str += word1[i];
//     }
//   }
//   console.log(str);
// }

// function getMinAndMaxLen(word1: string, word2: string) {
//   const lenWord1 = word1.length;
//   const lenWord2 = word2.length;

//   const maxlen: number = Math.max(lenWord1, lenWord2);
//   const minlen: number = Math.min(lenWord1, lenWord2);

//   return { maxlen, minlen, bool: lenWord1 < lenWord2 };
// }

// mergeAlternatively("abcq", "pq");

// // eats too much memory.

/** better solution, eats less memory; */
// function mergeAlternatively2(word1: string, word2: string) {
//   let str: string = "";

//   let i = 0;
//   let j = 0;

//   while (i < word1.length || j < word2.length) {
//     if (i < word1.length) str += word1[i];
//     if (j < word2.length) str += word2[i];

//     i++;
//     j++;
//   }
//   return str;
// }

/* Stock spanner algorithm**/
// class StockSpanner {
//   arr: number[];

//   constructor() {
//     this.arr = [];
//   }

//   next(price: number): number {
//     let count = 0;
//     this.arr.push(price);

//     let i = this.arr.length - 1;

//     while (i >= 0) {
//       if (this.arr[this.arr.length - 1] >= this.arr[i]) {
//         count++;
//       } else {
//         break;
//       }

//       i--;
//     }
//     return count;
//   }
// }

/**
 * Your StockSpanner object will be instantiated and called as such:
 * var obj = new StockSpanner()
 * var param_1 = obj.next(price)
 */

/** cant remember dfkm! --- solved tho */
// const arr = [73, 74, 75, 71, 69, 72, 76, 73];
// let count = 0;
// let found = false;
// let i = 0;
// const newArray = [];

// // we need a two-loop system ---n 1,2,3,4,5,6 in the first loop and again in the other n iterations.

// // if firstOperation > j(select no of operations)

// while (i < arr.length) {
//   for (let j = 0; j < arr.length; j++) {
//     if (arr[i] >= arr[j]) {
//       count++;
//     } else {
//       found = true;
//       break;
//     }
//   }

//   if (found !== true) {
//     count = 0;
//   }

//   newArray.push(count);

//   count = 0;
//   found = false;

//   arr.shift();
// }

// console.log(newArray);

/** 1071. Greatest Common Divisor of Strings */
