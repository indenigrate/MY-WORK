var canvas = document.querySelector("canvas");
var body = document.querySelector("body");

// styling
canvas.width = window.innerWidth;
canvas.height = window.innerHeight;
body.style.margin = '0';
canvas.style.backgroundColor = '#333';
// styling

var c = canvas.getContext('2d');
c.fillStyle = 'rgba(155,255,45,0.8)';
c.fillRect(100, 100, 100, 100);
c.fillStyle = 'rgba(55,205,45,0.8)';
c.fillRect(300, 200, 100, 100);
c.fillRect(500, 300, 100, 100);
c.fillText("Aadarsh Randi", 400, 400, 600);

//Line
c.beginPath();
c.moveTo(250, 200);
c.lineTo(100, 600);
c.lineTo(300, 400);
c.lineTo(0, 0);
c.strokeStyle = "blue";
c.stroke();
//Arc
for (var i = 0; i < 1000; i++) {
    var x = Math.random() * window.innerWidth;
    var y = Math.random() * window.innerHeight;
    const r = Math.floor(Math.random() * 256);
    const g = Math.floor(Math.random() * 256);
    const b = Math.floor(Math.random() * 256);

    c.strokeStyle = `rgb(${r}, ${g}, ${b})`;
    c.beginPath();
    c.arc(x, y, 80, 0, Math.PI * 2, true);
    c.stroke();
}
