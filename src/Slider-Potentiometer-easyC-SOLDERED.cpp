/**
 **************************************************
 *
 * @file        Slider-potentiometer-with-easyC-SOLDERED.cpp
 * @brief       Basic functions for breakout board with slider potentiometer with easyc
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Goran Juric for soldered.com
 ***************************************************/


#include "Slider-potentiometer-easyC-SOLDERED.h"

#define analogRead 1
/**
 * @brief       Function for reading value of potentiometer reading
 *
 * @return      value of potentiometer reading
 */
uint16_t sliderPot::getValue()
{
    readRegister(ANALOG_READ_REG, raw, 2 * sizeof(uint8_t));
    value = raw[0] | (raw[1]) << 8;
    return value;
}

/**
 * @brief       Function for reading minimal value of potentiometer reading
 *
 * @return      minimal value of potentiometer reading
 */
uint16_t sliderPot::minValue()
{
    return 0;
}

/**
 * @brief       Function for reading maximal value of potentiometer reading
 *
 * @return      maximal value of potentiometer reading
 */
uint16_t sliderPot::maxValue()
{
    return 1024;
}

/**
 * @brief       Function for reading percent vaule of potentiometer reading
 *
 * @return      percent vaule of potentiometer reading
 */
uint8_t sliderPot::getPercentage()
{
    return (int)(100*((float)getValue() / (float)maxValue()));
}