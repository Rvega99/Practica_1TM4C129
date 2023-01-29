
#include "lib/include.h"


int main() {

  while (1U)
  {
        //
        // Turn on the LED.
        //
         GPION->DATA |= 0x01;
        //GPIO_PORTN_DATA_R |= 0x01;

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 2000000; ui32Loop++)
        {
        }
         GPION->DATA |= 0x02;
        //GPIO_PORTN_DATA_R |= 0x01;

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 2000000; ui32Loop++)
        {
        }
        //
        // Turn off the LED.
        //
        GPION->DATA &= ~(0x01);
        //GPIO_PORTN_DATA_R &= ~(0x01);

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
        {
        }
                GPION->DATA &= ~(0x02);
        //GPIO_PORTN_DATA_R &= ~(0x01);

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
        {
        }
  }
}