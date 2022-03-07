const fs = require("fs");

let data = fs.readFileSync("data.txt", "utf-8").split("\r\n");
// console.log(data);
for (let i = 0; i < data.length; i++) {
  if (data[i].includes("Melania")) {
    data.splice(i, 1);
  }
}
// console.log(data);
let text = "";
for (let i = 0; i < data.length; i++) {
  text += data[i] + "\r\n";
}

// console.log(text);
fs.writeFile("data.txt", text, () => {
  console.log("Done");
});

// console.log(text);
