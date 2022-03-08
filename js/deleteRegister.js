const fs = require("fs");

let data = fs.readFileSync("data.txt", "utf-8").split("\r\n");
for (let i = 0; i < data.length; i++) {
  if (data[i].includes("Melania")) {
    data.splice(i, 1);
  }
}
let text = "";
for (let i = 0; i < data.length; i++) {
  text += data[i] + "\r\n";
}

fs.writeFile("data.txt", text, () => {
  console.log("Done");
});
