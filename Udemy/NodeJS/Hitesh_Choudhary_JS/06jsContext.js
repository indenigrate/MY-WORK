
sayHello();
console.log(a);

//can call function before definition
//as function get scored in global context
//function declarations are scanned and made available

function sayHello(){
    console.log("Hello");
}

var a=10;
console.log(a);

//cannot call a function before definition when declared as a variable
//variable declarations are scanned and made undefined
//global context does not know about tipper

// tipper("20");
var tipper = function (a){
    var bill=parseInt(a);
    //converts it to int
    console.log(bill+5);
}
console.log("After tipper");

console.log(namee);
//this prints as undefined as global context knows that it is being declared somewhere else
//and it is not an error
var namee="Devansh"
//old execution context continues
function sayName(){
    var namee="Mr. X";
    console.log(namee);
}
//new execution context gets made for function call above the old execution context
//it knows name as MR X inside the function
sayName();
//function call ends and the execution context with name as MR X is perished and old execution
//context remembers name as Devansh
console.log(namee);


