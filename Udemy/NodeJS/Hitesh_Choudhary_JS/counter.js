
var counter = document.querySelector(".counter");
var followers = document.querySelector(".followers");
console.log(counter.innerHTML);
let count = 0;
setInterval(() => {
    if (count < 500) {
        count += 10;
        counter.innerHTML = count;
    }
    else if (count < 920) {
        count += 5;
        counter.innerHTML = count;
    }
    else if (count < 950) {
        count += 3;
        counter.innerHTML = count;
    }
    else if (count < 1000) {
        count += 1;
        counter.innerHTML = count;
    }
    else if (count == 1000)
        followers.innerHTML = "1000 Followers on instagram";
}, 20);

setTimeout(() => {
    followers.innerText = "1000 on instagram";
}, 1000)


const red = document.querySelector(".red");
const cyan = document.querySelector(".cyan");
const violet = document.querySelector(".violet");
const orange = document.querySelector(".orange");
const pink = document.querySelector(".pink");

console.log(window.getComputedStyle(red).backgroundColor);

const getBGColor = (element) => {
    return window.getComputedStyle(element).backgroundColor;
}

var orangeElementColor = (getBGColor(orange));

const answer = document.querySelector(".answer");
const container = document.querySelector(".container");
console.log(orangeElementColor);

orange.addEventListener("mouseenter", () => {
    console.log("In Event listener");
    answer.style.background = orangeElementColor;
});

// orange.addEventListener("mouseleave", () => {
//     console.log("In");
//     answer.style.backgroundColor = "#000";
// });


const magicColorChanger = (element) => {
    return element.addEventListener("mouseover", () => {
        answer.style.background = getBGColor(element);
    });
};

magicColorChanger(red);
magicColorChanger(orange);
magicColorChanger(cyan);
magicColorChanger(pink);
magicColorChanger(violet);

container.addEventListener("mouseenter", () => {
    answer.style.backgroundColor = '#000';
}); 