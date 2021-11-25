/*
  Blink with variable 

  Turns on an LED for one second, then turns it off for one second, in a repeated interval, but each time the time increases by 1 more second.

 */

int blinkTime = 1000: // set variable to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(blinkTime);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  
  
  blinkTime = blinkTime + 1000; // wait for a second
