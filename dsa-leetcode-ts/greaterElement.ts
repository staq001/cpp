function nextGreaterElementSelf(heights: number[]) {
  const ans: number[] = [];
  const s: number[] = [];

  for (let i = heights.length - 1; i >= 0; --i) {
    while (s.length > 0 && s[s.length - 1] <= heights[i]) {
      s.pop();
    }

    if (s.length === 0) ans[i] = -1;
    else ans[i] = s[s.length - 1];

    s.push(heights[i]);
  }

  return ans;
}

function nextGreaterElement(heights: number[]): number[] {
  const ans: number[] = new Array(heights.length);
  const stack: number[] = [];

  for (let i = heights.length - 1; i >= 0; i--) {
    while (stack.length > 0 && stack[stack.length - 1] <= heights[i]) {
      stack.pop();
    }

    if (stack.length === 0) {
      ans[i] = -1;
    } else {
      ans[i] = stack[stack.length - 1];
    }

    stack.push(heights[i]);
  }

  return ans;
}

const ans = nextGreaterElement([1, 2, 3, 5, 4, 8, 9]);

console.log(ans);
