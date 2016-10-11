
//I used Aims Bootcamp sketches from her bouncing ball to create 
//some of the visual effects for the ellipse.
//Note I used Firmata 
/*
arduino_input

Demonstrates the reading of digital and analog pins of an Arduino board
running the StandardFirmata firmware.

To use:
* Using the Arduino software, upload the StandardFirmata example (located
  in Examples > Firmata > StandardFirmata) to your Arduino board.
* Run this sketch and look at the list of serial ports printed in the
  message area below. Note the index of the port corresponding to your
  Arduino board (the numbering starts at 0).  (Unless your Arduino board
  happens to be at index 0 in the list, the sketch probably won't work.
  Stop it and proceed with the instructions.)
* Modify the "arduino = new Arduino(...)" line below, changing the number
  in Arduino.list()[0] to the number corresponding to the serial port of
  your Arduino board.  Alternatively, you can replace Arduino.list()[0]
  with the name of the serial port, in double quotes, e.g. "COM5" on Windows
  or "/dev/tty.usbmodem621" on Mac.
* Run this sketch. The squares show the values of the digital inputs (HIGH
  pins are filled, LOW pins are not). The circles show the values of the
  analog inputs (the bigger the circle, the higher the reading on the
  corresponding analog input pin). The pins are laid out as if the Arduino
  were held with the logo upright (i.e. pin 13 is at the upper left). Note
  that the readings from unconnected pins will fluctuate randomly. 
  
For more information, see: http://playground.arduino.cc/Interfacing/Processing
*/

import processing.serial.*;

import cc.arduino.*;

Arduino arduino;

color off = color(4, 79, 111);
color on = color(84, 145, 158);
float e = 0;
float theta = 0;
PVector position;
PVector velocity; 
float r, g, b; 
int radius; 

void setup() {
  size (500, 500);
   frameRate(30);

  // Prints out the available serial ports.
  println(Arduino.list());
    position = new PVector(0, 0); 
  velocity = new PVector(5, 6); 
  
  smooth(); 
  
  
  radius = 100; 
  
  // Modify this line, by changing the "0" to the index of the serial
  // port corresponding to your Arduino board (as it appears in the list
  // printed by the line above).
  //arduino = new Arduino(this, Arduino.list()[0], 57600);
  
  // Alternatively, use the name of the serial port corresponding to your
  // Arduino (in double-quotes), as in the following line.
  arduino = new Arduino(this, "/dev/tty.usbmodem1411", 57600);
  
  //// Set the Arduino digital pins as inputs.
  //for (int i = 0; i <= 13; i++)
  //  arduino.pinMode(i, Arduino.INPUT);
}

void draw() {
  //background(off);
  //stroke(on);
    fill(0, 10); 
  rect(0, 0, width, height); 
    position.x = e*cos(frameCount);
  position.y = -e*sin(frameCount);
  
      position.x = e*cos(theta);
    position.y = -e*sin(theta);
    theta += .1;

position.add(velocity); 
  
  
  if( position.x >= (width- radius/2) || position.x <= radius/2){
    velocity.x = velocity.x *-1; 
  }
  if( position.y >= (height-radius/2) || position.y <= radius/2){
    velocity.y = velocity.y *-1 ; 
  }
  //I had used this code from Aims Bootcamp Class
  //Bouncing Ball Sketch
  //changes color if hits boundaries of screen 
  if( position.x== (width- radius/2) || position.x== radius/2 ){
    r = random(0,255); 
    g = random(0, 255); 
    b = random(0, 255); 
  }
  
  if( position.y>= (height- radius/2) || position.y<= radius/2 ){
     r = random(0,255); 
     g = random(0, 255); 
     b = random(0, 255); 
  }
  //This is code from the Firmata Plugin
  // Draw a circle whose size corresponds to the value of an analog input.
    noStroke();   
    fill(r, g, b); 
  for (int i = 0; i <= 13; i++) {
    //ellipse(150 + i * 50, 100, arduino.analogRead(i) / 2, arduino.analogRead(i) / 2);
      ellipse(250 , 250, arduino.analogRead(i) / 2, arduino.analogRead(i) / 2);
      //ellipse(position.x+arduino.analogRead(i) / 2, position.y+arduino.analogRead(i) / 2,20,20);

  //e+= .1;
  }
}