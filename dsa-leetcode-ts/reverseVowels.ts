// function reverseVowels(s: string) {
//   let str: string = "";

//   const vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"];

//   const arr = [];

//   for (let i = 0; i < s.length; i++) {
//     if (vowels.includes(s[i])) {
//       arr.push(s[i]);
//     }
//   }

//   let i = 0;
//   while (i < s.length) {
//     if (vowels.includes(s[i])) {
//       str += arr.pop() as string;
//     } else {
//       str += s[i];
//     }

//     i++;
//   }
//   return str;
// }

// better solution.

function reverseVowels(s: string) {
  let start = 0;
  let end = s.length - 1;

  const vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"];

  const ans = [...s];

  while (start < end) {
    if (!vowels.includes(ans[start])) {
      start++;
    }

    if (!vowels.includes(ans[end])) {
      end--;
    }

    if (vowels.includes(ans[start]) && vowels.includes(ans[end])) {
      const temp = ans[start];
      ans[start] = ans[end];
      ans[end] = temp;

      start++;
      end--;
    }
  }
  return ans.join("");
}
