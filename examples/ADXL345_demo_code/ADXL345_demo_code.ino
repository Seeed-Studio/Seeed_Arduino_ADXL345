/*****************************************************************************/
//    Function:    Get the accelemeter of X/Y/Z axis and print out on the
//                    serial monitor.
//  Hardware:    3-Axis Digital Accelerometer(??16g)
//    Arduino IDE: Arduino-1.0
//    Author:     Frankie.Chu
//    Date:      Jan 11,2013
//    Version: v1.0
//    by www.seeedstudio.com
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//
/*******************************************************************************/

#include <Wire.h>
#include <ADXL345.h>


ADXL345 adxl; //variable adxl is an instance of the ADXL345 library

void setup()
{
    
    Serial.begin(9600);
}

void loop(){

    //Boring accelerometer stuff
    int x,y,z;
    adxl.readXYZ(&x, &y, &z); //read the accelerometer values and store them in variables  x,y,z
    // Output x,y,z values
    Serial.print("values of X , Y , Z: ");
    Serial.print(x);
    Serial.print(" , ");
    Serial.print(y);
    Serial.print(" , ");
    Serial.println(z);

    double xyz[3];
    double ax,ay,az;
    adxl.getAcceleration(xyz);
    ax = xyz[0];
    ay = xyz[1];
    az = xyz[2];
    Serial.print("X=");
    Serial.print(ax);
    Serial.println(" g");
    Serial.print("Y=");
    Serial.print(ay);
    Serial.println(" g");
    Serial.print("Z=");
    Serial.println(az);
    Serial.println(" g");
    Serial.println("**********************");
    delay(500);

}
