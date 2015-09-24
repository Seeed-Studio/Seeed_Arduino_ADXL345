// test for seeed graphical programming project
// loovee @ 2015-8-4

#include <Wire.h>
#include <ADXL345.h>


ADXL345 adxl;

void setup()
{
    adxl.init();
    Serial.begin(115200);
    Serial.println("test for Seeed Graphical programming project");
    Serial.println("3-axis digital accelerator");
}

void loop()
{
    float ax, ay, az;
    
    ax = adxl.AxisDigitalAccelerometerRead(5, 'X');
    ay = adxl.AxisDigitalAccelerometerRead(5, 'Y');
    az = adxl.AxisDigitalAccelerometerRead(5, 'Z');
    
    Serial.print(ax, 2);
    Serial.print('\t');
    Serial.print(ay, 2);
    Serial.print('\t');
    Serial.println(az, 2);
    
    delay(20);

}