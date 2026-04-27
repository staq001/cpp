function reverseWords(s: string) {
  const words = s.split(" ");
  const arr = [];

  for (let i = 0; i < words.length; i++) {
    if (words[i] === "") continue;

    arr.push(words[i]);
  }

  return arr.reverse().join(" ");
}

function reverseWordsTwo(s: string) {
  return s
    .split(" ")
    .filter((s) => s !== "")
    .reverse()
    .join(" ");
}
