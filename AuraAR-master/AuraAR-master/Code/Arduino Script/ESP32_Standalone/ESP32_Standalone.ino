#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// #define relay 15  // Relay pin

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "F6Jt4cAnpcXAkR-cx1BSUWZhpDb8yKGF";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Venkatesh Raichur ";
char pass[] = "venkie@Wifi2";

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  digitalWrite(15,pinValue);
  // process received value
}


void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(15,OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
