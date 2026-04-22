function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
  const result: boolean[] = [];
  const highestValue = findHighestNo(candies);

  let i = 0;
  while (i < candies.length) {
    if (candies[i] + extraCandies >= highestValue) {
      result.push(true);
    } else {
      result.push(false);
    }
    i++;
  }
  return result;
}

function findHighestNo(arr: number[]) {
  let i = 0;
  let highestValue = arr[0];

  while (i < arr.length) {
    if (highestValue < arr[i]) {
      highestValue = arr[i];
    }
    i++;
  }
  return highestValue;
}
