const fs = require("fs");

const data = fs.readFileSync("data.txt", "utf-8").split("\r\n");
let consulted = [];

for (let i = 0; i < data.length; i++) {
  if (data[i].includes("Jackeline")) {
    consulted.push(data[i].split(","));
  }
}
console.log(consulted);
