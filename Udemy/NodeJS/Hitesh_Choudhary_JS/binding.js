const user = {
    firstName: "One",
    lastName: "Sine",
    role: "Admin",
    courseCount: 3,
    getInfo: function () {
        console.log(`
        First Name = ${this.firstName}
        Last Name = ${this.lastName}
        role is ${this.role}
        number of course = ${this.courseCount}
        `);
    }
}

const user2 = {
    firstName: "abc",
    lastName: "def",
    role: "Mannager",
    courseCount: 5,

}

var user2Info = user.getInfo.bind(user2);
user2Info();

user.getInfo();