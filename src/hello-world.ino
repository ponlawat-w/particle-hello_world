/*
 * Project hello-world
 * Description: Hello World
 * Author: Ponlawat W.
 * Date: 28 October 2563
 */

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Particle.publish("Hello World!", PRIVATE);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  Particle.publish("loop", PRIVATE);
}
