var test = {
    name: "DEvansh",
    age: 19
};

console.log(test.name);

var User = function (firstName, courseCount) {
    this.firstName = firstName;
    this.courseCount = courseCount;
    this.getCourseCount = function () {
        console.log(`Course count is ${this.courseCount}`);
    }

}

var devansh = new User("Devansh", 11);
console.log(devansh);

User.prototype.getFirstName = function () {
    console.log(`First name is ${this.firstName}`);
}
if (devansh.hasOwnProperty("firstName"))
    devansh.getFirstName();

console.log("Part 2");

var UserNew = {
    name: "",
    getUserName: function () {
        console.log(`Username is ${this.name}`);
    }
};

var onesine = Object.create(UserNew);
onesine.name = "devanshhhhh";
console.log(onesine);
onesine.getUserName();