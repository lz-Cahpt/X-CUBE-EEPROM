## <b>Example Description</b>

This application is a software solution that allows substituting a standalone EEPROM 
by emulating the EEPROM mechanism using the on-chip Flash devices. The emulation
is achieved by using at least two Flash pages and the coherence mechanism is ensured 
by swapping between the Flash pages.

NUCLEO-U385RG-Q's LED can be used to monitor the application status:

  - LED2 blinks twice at start up
  - LED2 remains lit for 3s after demonstration completes successfully and before entering Standby Mode
  - LED2 blinks once upon wakeup from Standby Mode
  - LED2 toggles in case of error.

NUCLEO-U385RG-Q's push buttons can be used to generate events:

  - Press the Reset (Black) button during the emulated EEPROM demonstration to restart it; in this case, it formats the emulated EEPROM and starts the read and write operations. The Reset button can also be used to wake up the MCU from Standby mode; upon wakeup, the emulated EEPROM is initialized (but not formatted) and the demonstration restarts.
  - Press the User Button (B1) to wake up the MCU from Standby mode; upon wakeup, the emulated EEPROM is initialized and the demonstration restarts.
  
#### <b>Notes</b>
 1. Care must be taken when using HAL_Delay(), this function provides accurate delay (in milliseconds)
      based on variable incremented in SysTick ISR. This implies that if HAL_Delay() is called from
      a peripheral ISR process, then the SysTick interrupt must have higher priority (numerically lower)
      than the peripheral interrupt. Otherwise the caller ISR process will be blocked.
      To change the SysTick interrupt priority you have to use HAL_NVIC_SetPriority() function.
      
 2. The application need to ensure that the SysTick time base is always set to 1 millisecond
      to have correct HAL operation.

### <b>Directory contents</b>

 - STM32U3/EEPROM_Emul/Inc/eeprom_emul_conf.h          EEPROM Emulation Configuration file
 - STM32U3/EEPROM_Emul/Inc/main.h                      Header for main.c module 
 - STM32U3/EEPROM_Emul/Inc/stm32u3xx_hal_conf.h        HAL Configuration file
 - STM32U3/EEPROM_Emul/Inc/stm32u3xx_it.h              Header for stm32u3xx_it.c
 - STM32U3/EEPROM_Emul/Src/main.c                      Main program
 - STM32U3/EEPROM_Emul/Src/stm32u3xx_it.c              Interrupt handlers
 - STM32U3/EEPROM_Emul/Src/system_stm32u3xx.c          STM32U3xx system clock configuration file 

### <b>Hardware and Software environment</b>

  - This example runs on STM32U375/385 devices.
    
  - This example has been tested with NUCLEO-U385RG-Q board and can be
    easily tailored to any other supported device and development board.

### <b>How to use it ?</b>

In order to make the program work, you must do the following :

 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example

