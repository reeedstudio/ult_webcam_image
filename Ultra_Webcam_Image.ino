#include <Ultrasonic.h>
#include <Streaming.h>

Ultrasonic ultrasonic1(7);

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    int val1 = 0;
    ultrasonic1.MeasureInCentimeters();
    val1 = ultrasonic1.RangeInCentimeters;
  
   // if(val1 < 420 & val1 > 150)
    cout << "val = "<<val1<<" cm" << endl;
   
    delay(100);

}
