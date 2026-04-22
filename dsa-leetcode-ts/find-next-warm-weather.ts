function findNextWarmWeather(arr: number[]) {
  let count = 0;
  let found = false;
  let i = 0;
  const newArray = [];

  // we need a two-loop system ---n 1,2,3,4,5,6 in the first loop and again in the other n iterations.

  // if firstOperation > j(select no of operations)

  while (i < arr.length) {
    for (let j = 0; j < arr.length; j++) {
      if (arr[i] >= arr[j]) {
        count++;
      } else {
        found = true;
        break;
      }
    }

    if (found !== true) {
      count = 0;
    }

    newArray.push(count);

    count = 0;
    found = false;

    arr.shift();
  }

  return newArray;
}

// better
function dailyTemperaturesTwo(temperatures: number[]): number[] {
  const t = temperatures;
  const answer = new Array(t.length).fill(0);

  const stack: number[] = [];

  if (t.length <= 1) return answer;

  for (let i = 0; i < t.length; i++) {
    while (t[stack[stack.length - 1]] < t[i]) {
      const top = stack.pop() as number;
      answer[top] = i - top;
    }
    stack.push(i);
  }
  return answer;
}
