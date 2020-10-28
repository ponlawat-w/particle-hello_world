/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Ponlawat/source/particle/hello-world/src/hello-world.ino"
/*
 * Project hello-world
 * Description: Hello World
 * Author: Ponlawat W.
 * Date: 28 October 2563
 */

// setup() runs once, when the device is first turned on.
void setup();
void loop();
#line 9 "c:/Users/Ponlawat/source/particle/hello-world/src/hello-world.ino"
void setup() {
  // Put initialization like pinMode and begin functions here.
  Particle.publish("Hello World!", PUBLIC);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  Particle.publish("loop", PUBLIC);
}
