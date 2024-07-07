

var age=[13,42,63,12,64,32,85,43,29];
// age.forEach((n)=>(console.log(n))); 

for(const n of age){
    console.log(n);
}

const symbols={
    ig: "instagram",
    fb: "facebook",
    yt: "youtube"
}

for(const a in symbols){
    console.log(`key is ${a} and value is ${symbols[a]}`);
}