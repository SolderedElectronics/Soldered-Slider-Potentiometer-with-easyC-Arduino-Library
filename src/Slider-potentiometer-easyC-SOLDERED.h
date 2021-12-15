/**
 **************************************************
 *
 * @file        Slider-potentiometer-with-easyC-SOLDERED.h
 * @brief       Basic functions for breakout board with slider potentiometer with easyc
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Goran Juric for soldered.com
 ***************************************************/

#ifndef _easyC_
#define _easyC_

#include "libs/Generic-easyC/easyC.h"

class sliderPot : public SLIDER_POTENTIOMETER_EASYC::EasyC

{

  public:
    uint16_t getValue(void);
    uint16_t minValue(void);
    uint16_t maxValue(void);
    uint8_t getPercentage(void);

  protected:
    void initializeNative(){};

  private:
    int pin;
    uint16_t value;
    char raw[2];
};

#endif // !_easyC_
