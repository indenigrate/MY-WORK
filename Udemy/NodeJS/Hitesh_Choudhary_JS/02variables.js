const { log } = require("console");

const uid="qwerty";
//cannot change const value
// uid="abce" is wrong

var fullName="Devansh Soni";
var email="devansh@email.com";
var pass="1234rewwq";
var confirmPass="1234rewwq";
var isLoggedInFromGoogle=false;

// fullName=prompt("Enter your name");
//prompt opens a dialogue box in the webpage to take input from user

console.log("UID is :"+uid);
console.log("Name is :",fullName);
console.log(email);
//or use the one below
//use ` and not ' (use the one below escape and on tilde)
//this is called interpolation
console.log(`
      UID: ${uid}
     NAME: ${fullName}
    email: ${email}
`)

