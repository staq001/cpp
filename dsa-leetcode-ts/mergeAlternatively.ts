function mergeAlternatively(word1: string, word2: string) {
  let str: string = "";

  const { maxlen, minlen, bool } = getMinAndMaxLen(word1, word2);

  for (let i = 0; i < maxlen; i++) {
    if (i <= minlen - 1) {
      str += word1[i];
      str += word2[i];
    } else {
      if (bool) str += word2[i];
      else str += word1[i];
    }
  }
  return str;
}

function getMinAndMaxLen(word1: string, word2: string) {
  const lenWord1 = word1.length;
  const lenWord2 = word2.length;

  const maxlen: number = Math.max(lenWord1, lenWord2);
  const minlen: number = Math.min(lenWord1, lenWord2);

  return { maxlen, minlen, bool: lenWord1 < lenWord2 };
}

// mergeAlternatively("abcq", "pq");
// // eats too much memory.

/** better solution, eats less memory; */
function mergeAlternatively2(word1: string, word2: string) {
  let str: string = "";

  let i = 0;
  let j = 0;

  while (i < word1.length || j < word2.length) {
    if (i < word1.length) str += word1[i];
    if (j < word2.length) str += word2[i];

    i++;
    j++;
  }
  return str;
}
