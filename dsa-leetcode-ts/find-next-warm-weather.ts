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

// [1,4, 5,6,8]
// s= [0,0,0,0,0]

// t[4]
// top =0;
// ans =[0]

// s= [0,0,0,0,0]

function dailyTemperaturesTwo(temperatures: number[]): number[] {
  const t = temperatures;
  const answer = new Array(t.length).fill(0);

  const stack: number[] = [];

  if (t.length <= 1) return answer;

  for (let i = 0; i < t.length; i++) {
    console.log("i", i);
    console.log("t-stack", t[stack[stack.length - 1]]);
    while (stack.length > 0 && t[stack[stack.length - 1]] < t[i]) {
      const top = stack.pop() as number;
      console.log("top", top);

      answer[top] = i - top;
    }
    stack.push(i);
    console.log("stack", stack);
  }
  return answer;
}

const dt = dailyTemperaturesTwo([2, 3, 6, 1, 5, 8]);
// ans = [1,1,2,1,1,0]
console.log(dt);
