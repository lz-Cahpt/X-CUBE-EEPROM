---
pagetitle: Release Notes for STM32L5xx CMSIS
lang: en
---

::: {.row}
::: {.col-sm-12 .col-lg-4}

::: {.card .fluid}
::: {.sectione .dark}
<center>
# <small>Release Notes for</small> **STM32L5xx CMSIS**
Copyright &copy; 2019 STMicroelectronics\
    
[![ST logo](./_htmresc/st_logo.png)](https://www.st.com){.logo}
</center>
:::
:::

# License

This software component is licensed by ST under Apache-2.0 license, the \"License\"; You may
not use this component except in compliance with the License. You may
obtain a copy of the License at:

[Apache License v2.0](https://opensource.org/licenses/Apache-2.0)

# Purpose

This driver provides the CMSIS device for the STM32L5 products. This covers STM32L552xx/STM32L5622x devices.

This driver is composed of the descriptions of the registers under “Include” directory.

Various template file are provided to easily build an application. They can be adapted to fit applications requirements.

- Include/Templates/partition_stm32l552xx.h and partition_stm32l562xx.h contain a default Secure Attribute Unit (SAU) set up from SystemInit() for secure application when the security is enabled (TZEN=1).
- Source/Templates/system_stm32l5xx.c contains the initialization code referred as SystemInit() when there is no security enabled (TZEN=0).
- Source/Templates/system_stm32l5xx_s.c contains the initialization code referred as SystemInit() for secure application when the security is enabled (TZEN=1).
- Source/Templates/system_stm32l5xx_ns.c contains the initialization code referred as SystemInit() for non-secure application when the security is enabled (TZEN=1).
- Startup files are provided as example for IAR, KEIL and STM32CubeIDE.
- Linker files are provided as example for IAR, KEIL and STM32CubeIDE.

:::

::: {.col-sm-12 .col-lg-8}
# Update History

::: {.collapse}
<input type="checkbox" id="collapse-section1" checked aria-hidden="true">
<label for="collapse-section1" aria-hidden="true">__V1.0.0 / 13-December-2019__</label>
<div>

## Main Changes

**First release**

## Contents

First official release of STM32L5xx CMSIS Device drivers to support **STM32L552xx and STM32L562xx** devices

- Templates
  - When TrustZone security is enabled in the system (Flash option bit TZEN=1), the partition_stm32l552xx.h and
    partition_stm32l562xx.h are available from \\Include\\Templates with a default Security Attribute Unit (SAU)
    configuration:
	  - SAU region 0: 0x0C03E000-0x0C03FFFF  (Secure, Non-Secure Callable)
	  - SAU region 1: 0x08040000-0x0807FFFF  (Non-Secure FLASH Bank2 (256 Kbytes))
	  - SAU region 2: 0x20018000-0x2003FFFF  (Non-Secure RAM (2nd half SRAM1 + SRAM2 (160 Kbytes)))
	  - SAU region 3: 0x40000000-0x4FFFFFFF  (Non-Secure Peripheral mapped memory)
	  - SAU region 4: 0x60000000-0x9FFFFFFF  (Non-Secure external memories)
	  - SAU region 5: 0x0BF90000-0x0BFA8FFF  (Non-Secure System memory)
  - system_stm32l5xx_s.c and system_stm32l5xx_ns.c for respectively secure application and non-secure application
    when TrustZone security is enabled (TZEN=1)
  - Linker files for 256 and 512 Kbytes Flash device configurations

## Notes

When TrustZone is enabled in the system (Flash option bit TZEN=1), template device partition_stm32l552xx.h or
partition_stm32l562xx.h file must be copied and optionally updated in user application secure project to configure
the system (SAU, interrupts, core)

</div>
:::

:::
:::

<footer class="sticky">
For complete documentation on STM32L5xx, visit: [[www.st.com/stm32l5](http://www.st.com/stm32l5)]

*This release note uses up to date web standards and, for this reason, should not be opened with Internet Explorer but preferably with popular browsers such as Google Chrome, Mozilla Firefox, Opera or Microsoft Edge.*
</footer>
