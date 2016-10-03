//these are referenced from Coding Rainbow 
//on Youtube
var spot = {
  x: 100,
  y: 50
};

var col = {
  r: 255,
  g: 0,
  b: 0
};



//This is code is from sound Jay.com
//for their rain03 track
// var sound;

//Looked up this code from P5.js.com
function preload() {
  //LOADING IMAG
  // img = loadImage("note.png");
  //This song belongs to Kotton Mouth Kings
  sound = loadSound("sound/kmk.mp3");
}

function setup() {
  
  
 createCanvas(600, 200);
 background(255)
}

function draw() {

// image(img, mouseX, mouseY);
  //displaying the image (img, x, y)


  // stroke(255);
  // strokeWeight(4);
  // noFill();

  // if (mouseX > 0 && mouseX < 800) {
  //   //This code belongs to P5.com. Mp3 track
  
  //   //these are referenced from Coding Rainbow 
  //   //on Youtube
  
  // stroke(255);
  // strokeWeight(4);
  // noFill();
  //   col.r = random(0);
  //   col.g = random(0);
  //   col.b = random(100, 255);
  //   spot.x = random(0, width);
  //   spot.y = random(0, height);
  //   fill(col.r, col.g, col.b, 100);
  //   ellipse(spot.x, spot.y, 24, 24);
  //   fill(0, 255, 0);
  // }
  // else if (mouseY > 150 && mouseY < 250) {
  //   fill(0, 255, 0);
  // }

  //rect in the center
  //fill(0, 255, 0);
  //rect(250, 150, 100, 100);
  // image(img, 0, 0);


stroke(255);
  strokeWeight(4);
  noFill();
    
    fill(col.r, col.g, col.b, 100);
    ellipse(mouseX, mouseY, 24, 24);
    fill(0, 255, 0);
}


function mousePressed() {
    
  //background(255);
    //this code belongs to coursescript.com
   // trigger sound
  sound.play();
  


}