/**
 **************************************************
 *
 * @file        Read_value.ino
 * @brief       Example for using the digital and analog read functions for www.solde.red/333131
 *
 *
 *
 * @authors     Goran Juric for Soldered.com
 ***************************************************/

#include "Slider-potentiometer-easyC-SOLDERED.h"

// Declare the sensor object
sliderPot slider;

void setup()
{
    // Initialize the serial communication via UART
    Serial.begin(115200);

    // Initialize the sensor
    slider.begin();
}

void loop()
{
    Serial.print("Raw value of slider potentiometer: "); //Print information message
    Serial.println(slider.getValue()); //Prints raw value of slider potentiometer

    Serial.print("Minimum value of slider potentiometer: "); //Print information message
    Serial.println(slider.minValue()); //Prints minimum value of potentiometer

    Serial.print("Maximum value of slider potentiometer: "); //Print information message
    Serial.println(slider.maxValue()); //Prints maximum value of potentiometer

    Serial.print("Percent value of slider potentiometer: "); //Print information message
    Serial.println(slider.getPercentage()); //Prints percent value of slider potentiometer
    delay(1000);
    
}
