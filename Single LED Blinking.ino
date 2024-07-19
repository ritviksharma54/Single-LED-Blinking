// With the help of analogue pins

// Initialize the setup function
void setup(){
  // Begin serial communication at a baud rate of 9600 bits per second
  Serial.begin(9600);
  // Set digital pin 10 as an output pin
  pinMode(10, OUTPUT);
}

// Initialize the loop function
void loop(){
  // Loop to increment the value of 'a' from 0 to 255
  for(int a = 0; a < 256; a++){
    // Write the analog value 'a' to digital pin 10
    analogWrite(10, a);
    // Wait for 1 second (1000 milliseconds)
    delay(1000);
    // Set the analog value at pin 10 to 0 (turn off)
    analogWrite(10, 0);
    // Wait for another 1 second
    delay(1000);
  }
}


------------------------------------------------------------
// Through Digital Pin

// Declare a variable 'yellow' and assign it to pin 10
int yellow = 10;

// Initialize the setup function
void setup(){
  // Set the 'yellow' pin (digital pin 10) as an output pin
  pinMode(yellow, OUTPUT);
}

// Initialize the loop function
void loop(){
  // Set the 'yellow' pin to HIGH (turn it on)
  digitalWrite(yellow, HIGH);
  // Wait for 1 second (1000 milliseconds)
  delay(1000);
  // Set the 'yellow' pin to LOW (turn it off)
  digitalWrite(yellow, LOW);
  // Wait for another 1 second
  delay(1000);
}

