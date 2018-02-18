/*
 * AnalogReader
 * Reads from analog pin and writes result to serial. 
 * 
 * Use plotter from Arduino IDE for a nice visualization.
 */

int analogPin = 5;     // potentiometer wiper (middle terminal) connected to analog pin 5
                       // outside leads to ground and +5V
int val = 0;           // variable to store the value read

void setup()
{
  Serial.begin(9600);              //  setup serial, 9600 is a good default
}

void loop()
{
  val = analogRead(analogPin);     // read the input pin
  Serial.println(val);             // debug value
}
