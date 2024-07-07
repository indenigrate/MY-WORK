//run this code on browser for better result
console.log("Outside everything ",this);

var user = {
    name: "Devansh",
    courseCount: 7,
    age: 43,
    returnCourseCount: function () {
        console.log("return course count ",this);
        //this here points to the object it is in 
        //so if we wanted to call user.name here we would replace user with this
        //keyword inside the definition of user itself

        function regular2(){
            console.log("regular 2 ",this);
            console.log("HEllO");
        }

        regular2();
        return this.courseCount;
    }
}

user.returnCourseCount();
//for all regular function call this poinst to window object

function regular1(){
    console.log("regular 1 ",this);
    console.log("HEllO");
}
regular1();