function whatever(tight) {

  this.arg = tight;
  this.frame = "something"
  // console.log(this)
}

whatever.prototype.insert = function () {
  const sumn = [];

  sumn.push(this.arg);
  sumn.push(this.frame);
  return sumn;
}

const myThing = new whatever("commands");
const list = myThing.insert();

console.log(list);