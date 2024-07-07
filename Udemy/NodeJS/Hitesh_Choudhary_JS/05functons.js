function test(name){
    console.log(`Hello ${name}`);
}

function helloInHindi(){
    return "namastey";
}
test("Devansh");
console.log(helloInHindi());

var returnAge =function (age){
    return age;
}

var years=returnAge(11);
console.log(years);
console.log(returnAge);
