const fs = require("fs");

fs.rename("nombres.txt", "sample_one.txt", (err) => {
  if (err) throw err;
  console.log("File renamed!");
});
