
const courses = [
    {
        name: "Complete ReactJS course",
        price: "4.3"
    },
    {
        name: "Complete AngularJS course",
        price: "2.5"
    },
    {
        name: "Complete MERN course",
        price: "3.7"
    },
    {
        name: "Complete C++ course",
        price: "1.5"
    }
];
function generateList() {

    const ul = document.querySelector(".course-list");
    ul.innerHTML = "";
    courses.forEach(course => {

        const li = document.createElement("li");
        li.classList.add("course-list-item");

        const name = document.createTextNode(course.name);
        li.appendChild(name);

        const span = document.createElement("span");
        span.classList.add("float-right");
        const price = document.createTextNode("$" + course.price);
        span.appendChild(price);

        li.appendChild(span);
        ul.appendChild(li);
    })
}

window.addEventListener("load", generateList);

const button = document.querySelector(".sort-courses-btn");

button.addEventListener("click", () => {
    courses.sort((a, b) => a.price - b.price);
    generateList();
})
