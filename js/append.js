const fs = require("fs");

fs.appendFile("sample.txt", "Appending content x1", (err, file) => {
  if (err) throw err;
  console.log("Completed!");
});
