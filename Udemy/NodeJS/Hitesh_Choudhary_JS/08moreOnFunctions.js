var isEven = (element) => {
    return element % 2 === 0;
};

console.log(isEven(3));

// passing a referencce to is even and not calling it
var result = [4, 6, 8].every(isEven);
console.log(result);
//true because every element is even

//callback function without any name
result = [4, 6, 8].every((e) => {
    return e % 2 === 0;
});
console.log(result);

//without curly braces; no return keyword;
result = [4, 6, 8].every((e) => (e % 2 === 0));
console.log(result);

// you have to always return something with an arrow function but if you dont 
// return somethin you remove the curly braces and put normal braces