/** 1071. Greatest Common Divisor of Strings */
function gcdOfStrings(str1: string, str2: string): string {
  let output = "";
  let i = 0;

  if (str1 + str2 !== str2 + str1) {
    output = "";
  } else {
    const likeTerms = getLikeTerms(str1, str2) as number;

    output = (str2 + str1).substring(0, likeTerms);
  }

  return output;
}

function getLikeTerms(str1: string, str2: string) {
  let i = 0;
  const arr = [];

  if (str1.length === str2.length) return str1.length;

  while (i < str1.length || i < str2.length) {
    if (str1.length % i === 0 && str2.length % i === 0) {
      arr.push(i);
    }
    i++;
  }

  return arr.pop() || 0;
}
