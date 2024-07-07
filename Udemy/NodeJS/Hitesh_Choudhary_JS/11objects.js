var user = {
    //key value pairs
    firstName: "Devansh",
    lastName: "Soni",
    role: "Admin",
    loginCount: 7,
    courseList: [],
    addCourse: function (courseName){
        this.courseList.push(courseName);
    }
};

console.log(user.loginCount);
console.log(user["lastName"]);
user.loginCount = 56;
console.log(user.loginCount);
console.log(user); 
console.table(user);
console.log(user.courseList);
user.addCourse("DSA");
console.log(user.courseList);

