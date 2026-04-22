// first solution;
function canPlaceFlowers(flowerbed: number[], n: number): boolean {
  let prev, next;
  let count = 0;

  if (flowerbed.length === 1 && flowerbed[0] === 0) {
    return true;
  }

  if (flowerbed[0] === 0 && flowerbed[1] === 0) {
    count++;
    flowerbed[0] = 1;
  }
  if (flowerbed.at(-1) === 0 && flowerbed.at(-2) === 0) {
    count++;
    flowerbed[flowerbed.length - 1] = 1;
  }

  for (let i = 1; i <= flowerbed.length; i++) {
    prev = flowerbed.at(i - 1);
    next = flowerbed.at(i + 1);

    if (flowerbed[i] === 0 && prev === 0 && next === 0) {
      count++;
      flowerbed[i] = 1;
    } else {
      // do nothing
    }
  }

  if (n <= count) {
    return true;
  }

  return false;
}

// better solution;
function canPlaceFlowersTwo(flowerbed: number[], n: number): boolean {
  let emptyPlotleft: boolean, emptyPlotright: boolean;
  let count = 0;

  for (let i = 0; i < flowerbed.length; i++) {
    if (flowerbed[i] === 0) {
      emptyPlotleft = i == 0 || flowerbed[i - 1] === 0;
      emptyPlotright = i === flowerbed.length - 1 || flowerbed[i + 1] === 0;

      if (emptyPlotleft && emptyPlotright) {
        flowerbed[i] = 1;
        count++;
      }
    }
  }

  if (n <= count) {
    return true;
  }

  return false;
}
