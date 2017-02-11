//Updated: November 10, 2016
//D to A Addresses
#define DAC_CR (*((volatile unsigned long *) 0x40007400))   //DAC Control Register
#define DAC_SWTRIGR (*((volatile unsigned long *) 0x40007404))   //DAC Software trigger Reg
#define DAC_DHR12R1 (*((volatile unsigned long *) 0x40007408))   //DAC 12-bit Right align data Reg
#define DAC_DHR12R2 (*((volatile unsigned long *) 0x40007414))   //DAC2 12-bit Right align data Reg
#define DAC_DOR1 (*((volatile unsigned long *) 0x4000742C))   //DAC Ch1 data output Reg
#define DAC_DOR2 (*((volatile unsigned long *) 0x40007430))   //DAC Ch2 data output Reg
//GPIO Port A Addresses
#define GPIOA_MODER    (*((volatile unsigned long *) 0x40020000))   //GPIO A Mode Reg
#define GPIOA_PUPDR    (*((volatile unsigned long *) 0x4002000C))   //GPIO A Pull Up/Pull Dn Reg
#define GPIOA_OSPEEDER (*((volatile unsigned long *) 0x40020008))   //GPIO A Speed register
#define GPIOA_OTYPER   (*((volatile unsigned long *) 0x40020004))   //GPIO A Output type register
#define GPIOA_IDR      (*((volatile unsigned long *) 0x40020010))   //GPIO A Input Data register
#define GPIOA_ODR      (*((volatile unsigned long *) 0x40020014))   //GPIO A Output Data register
#define GPIOA_BSRR     (*((volatile unsigned long *) 0x40020018))   //GPIO A Output Bit set/reset reg
#define GPIOA_AFRL     (*((volatile unsigned long *) 0x40020020))   //GPIO A Alt Funct reg bits 0-7
#define GPIOA_AFRH     (*((volatile unsigned long *) 0x40020024))   //GPIO A Alt Funct reg bits 8-15
//GPIO Port B Addresses
#define GPIOB_MODER    (*((volatile unsigned long *) 0x40020400))   //GPIO B Mode Reg
#define GPIOB_PUPDR    (*((volatile unsigned long *) 0x4002040C))   //GPIO B Pull Up/Pull Dn Reg
#define GPIOB_OSPEEDER (*((volatile unsigned long *) 0x40020408))   //GPIO B Speed register
#define GPIOB_OTYPER   (*((volatile unsigned long *) 0x40020404))   //GPIO B Output type register
#define GPIOB_IDR      (*((volatile unsigned long *) 0x40020410))   //GPIO B Input Data register
#define GPIOB_ODR      (*((volatile unsigned long *) 0x40020414))   //GPIO B Output Data register
#define GPIOB_BSRR     (*((volatile unsigned long *) 0x40020418))   //GPIO B Output Bit set/reset reg
#define GPIOB_AFRL     (*((volatile unsigned long *) 0x40020420))   //GPIO B Alt Funct reg bits 0-7
#define GPIOB_AFRH     (*((volatile unsigned long *) 0x40020424))   //GPIO B Alt Funct reg bits 8-15
//GPIO Port C Addresses
#define GPIOC_MODER    (*((volatile unsigned long *) 0x40020800))   //GPIO C Mode Reg
#define GPIOC_PUPDR    (*((volatile unsigned long *) 0x4002080C))   //GPIO C Pull Up/Pull Dn Reg
#define GPIOC_OSPEEDER (*((volatile unsigned long *) 0x40020808))   //GPIO C Speed register
#define GPIOC_OTYPER   (*((volatile unsigned long *) 0x40020804))   //GPIO C Output type register
#define GPIOC_IDR      (*((volatile unsigned long *) 0x40020810))   //GPIO C Input Data register
#define GPIOC_ODR      (*((volatile unsigned long *) 0x40020814))   //GPIO C Output Data register
#define GPIOC_BSRR     (*((volatile unsigned long *) 0x40020818))   //GPIO C Output Bit set/reset reg
#define GPIOC_AFRL     (*((volatile unsigned long *) 0x40020820))   //GPIO C Alt Funct reg bits 0-7
#define GPIOC_AFRH     (*((volatile unsigned long *) 0x40020824))   //GPIO C Alt Funct reg bits 8-15
//GPIO Port D Addresses
#define GPIOD_MODER    (*((volatile unsigned long *) 0x40020C00))   //GPIO D Mode Reg
#define GPIOD_PUPDR    (*((volatile unsigned long *) 0x40020C0C))   //GPIO D Pull Up/Pull Dn Reg
#define GPIOD_OSPEEDER (*((volatile unsigned long *) 0x40020C08))   //GPIO D Speed register
#define GPIOD_OTYPER   (*((volatile unsigned long *) 0x40020C04))   //GPIO D Output type register
#define GPIOD_IDR      (*((volatile unsigned long *) 0x40020C10))   //GPIO D Input Data register
#define GPIOD_ODR      (*((volatile unsigned long *) 0x40020C14))   //GPIO D Output Data register
#define GPIOD_BSRR     (*((volatile unsigned long *) 0x40020C18))   //GPIO D Output Bit set/reset reg
#define GPIOD_AFRL     (*((volatile unsigned long *) 0x40020C20))   //GPIO D Alt Funct reg bits 0-7
#define GPIOD_AFRH     (*((volatile unsigned long *) 0x40020C24))   //GPIO D Alt Funct reg bits 8-15
//GPIO Port E Addresses
#define GPIOE_MODER    (*((volatile unsigned long *) 0x40021000))   //GPIO E Mode Reg
#define GPIOE_PUPDR    (*((volatile unsigned long *) 0x4002100C))   //GPIO E Pull Up/Pull Dn Reg
#define GPIOE_OSPEEDER (*((volatile unsigned long *) 0x40021008))   //GPIO E Speed register
#define GPIOE_OTYPER   (*((volatile unsigned long *) 0x40021004))   //GPIO E Output type register
#define GPIOE_IDR      (*((volatile unsigned long *) 0x40021010))   //GPIO E Input Data register
#define GPIOE_ODR      (*((volatile unsigned long *) 0x40021014))   //GPIO E Output Data register
#define GPIOE_BSRR     (*((volatile unsigned long *) 0x40021018))   //GPIO E Output Bit set/reset reg
#define GPIOE_AFRL     (*((volatile unsigned long *) 0x40021020))   //GPIO E Alt Funct reg bits 0-7
#define GPIOE_AFRH     (*((volatile unsigned long *) 0x40021024))   //GPIO E Alt Funct reg bits 8-15
//GPIO Port F Addresses
#define GPIOF_MODER    (*((volatile unsigned long *) 0x40021400))   //GPIO F Mode Reg
#define GPIOF_PUPDR    (*((volatile unsigned long *) 0x4002140C))   //GPIO F Pull Up/Pull Dn Reg
#define GPIOF_OSPEEDER (*((volatile unsigned long *) 0x40021408))   //GPIO F Speed register
#define GPIOF_OTYPER   (*((volatile unsigned long *) 0x40021404))   //GPIO F Output type register
#define GPIOF_IDR      (*((volatile unsigned long *) 0x40021410))   //GPIO F Input Data register
#define GPIOF_ODR      (*((volatile unsigned long *) 0x40021414))   //GPIO F Output Data register
#define GPIOF_BSRR     (*((volatile unsigned long *) 0x40021418))   //GPIO F Output Bit set/reset reg
#define GPIOF_AFRL     (*((volatile unsigned long *) 0x40021420))   //GPIO F Alt Funct reg bits 0-7
#define GPIOF_AFRH     (*((volatile unsigned long *) 0x40021424))   //GPIO F Alt Funct reg bits 8-15
//Clock addresses
#define RCC_APB1RSTR (*((volatile unsigned long *) 0x40023820))   //Periph Reset Register
#define RCC_APB1ENR (*((volatile unsigned long *) 0x40023840))   //DAC Periph Clock Enable Reg
#define RCC_AHB1ENR (*((volatile unsigned long *) 0x40023830))   //GPIO Enable Reg
#define RCC_APB2ENR (*((volatile unsigned long *) 0x40023844))   //ADC Periph Clock Enable Reg

//A to D Addresses
//ADC1
#define ADC1_SR (*((volatile unsigned long *) 0x40012000))      //ADC1 Status Register
#define ADC1_CR1 (*((volatile unsigned long *) 0x40012004))     //ADC1 Control Register 1
#define ADC1_CR2 (*((volatile unsigned long *) 0x40012008))     //ADC1 Control Register 2
#define ADC1_SQR1 (*((volatile unsigned long *) 0x4001202C))     //ADC1 Regular Seq Register 1
#define ADC1_SQR2 (*((volatile unsigned long *) 0x40012030))     //ADC1 Regular Seq Register 2
#define ADC1_SQR3 (*((volatile unsigned long *) 0x40012034))     //ADC1 Regular Seq Register 3
#define ADC1_DR (*((volatile unsigned long *) 0x4001204C))      //ADC1 Data Register
//ADC2
#define ADC2_SR (*((volatile unsigned long *) 0x40012100))      //ADC2 Status Register
#define ADC2_CR1 (*((volatile unsigned long *) 0x40012104))     //ADC2 Control Register 1
#define ADC2_CR2 (*((volatile unsigned long *) 0x40012108))     //ADC2 Control Register 2
#define ADC2_SQR1 (*((volatile unsigned long *) 0x4001212C))     //ADC2 Regular Seq Register 1
#define ADC2_SQR2 (*((volatile unsigned long *) 0x40012130))     //ADC2 Regular Seq Register 2
#define ADC2_SQR3 (*((volatile unsigned long *) 0x40012134))     //ADC2 Regular Seq Register 3
#define ADC2_DR (*((volatile unsigned long *) 0x4001214C))      //ADC2 Data Register
//ADC3
#define ADC3_SR (*((volatile unsigned long *) 0x40012200))      //ADC3 Status Register
#define ADC3_CR1 (*((volatile unsigned long *) 0x40012204))     //ADC3 Control Register 1
#define ADC3_CR2 (*((volatile unsigned long *) 0x40012208))     //ADC3 Control Register 2
#define ADC3_SQR1 (*((volatile unsigned long *) 0x4001222C))     //ADC3 Regular Seq Register 1
#define ADC3_SQR2 (*((volatile unsigned long *) 0x40012230))     //ADC3 Regular Seq Register 2
#define ADC3_SQR3 (*((volatile unsigned long *) 0x40012234))     //ADC3 Regular Seq Register 3
#define ADC3_DR (*((volatile unsigned long *) 0x4001224C))      //ADC3 Data Register
//ADC Common
#define ADC_CCR (*((volatile unsigned long *) 0x40012304))     //ADC Common Control Register
//Timer 2 addresses
#define TIM2_CR1  (*((volatile unsigned long *) 0x40000000))   //Timer 2 Control Reg 1
#define TIM2_CR2  (*((volatile unsigned long *) 0x40000004))   //Timer 2 Control Reg 2
#define TIM2_SR   (*((volatile unsigned long *) 0x40000010))   //Timer 2 Status Reg
#define TIM2_DIER (*((volatile unsigned long *) 0x4000000C))   //Timer 2 Interrupt Enable
#define TIM2_EGR  (*((volatile unsigned long *) 0x40000014))   //Timer 2 Event Generation Reg
#define TIM2_CNT  (*((volatile unsigned long *) 0x40000024))   //Timer 2 Count Reg
#define TIM2_PSC  (*((volatile unsigned long *) 0x40000028))   //Timer 2 Prescale Reg
#define TIM2_ARR  (*((volatile unsigned long *) 0x4000002C))   //Timer 2 Auto-Reload Reg
//Timer 3 addresses
#define TIM3_CR1  (*((volatile unsigned long *) 0x40000400))   //Timer 3 Control Reg 1
#define TIM3_CR2  (*((volatile unsigned long *) 0x40000404))   //Timer 3 Control Reg 2
#define TIM3_SR   (*((volatile unsigned long *) 0x40000410))   //Timer 3 Status Reg
#define TIM3_DIER (*((volatile unsigned long *) 0x4000040C))   //Timer 3 Interrupt Enable
#define TIM3_EGR  (*((volatile unsigned long *) 0x40000414))   //Timer 3 Event Generation Reg
#define TIM3_CCMR1 (*((volatile unsigned long *) 0x40000418))   //Timer 3 Capture/Compare Mode
#define TIM3_CCER (*((volatile unsigned long *) 0x40000420))   //Timer 3 Compare/Capture Reg
#define TIM3_CNT  (*((volatile unsigned long *) 0x40000424))   //Timer 3 Count Reg
#define TIM3_PSC  (*((volatile unsigned long *) 0x40000428))   //Timer 3 Prescale Reg
#define TIM3_ARR  (*((volatile unsigned long *) 0x4000042C))   //Timer 3 Auto-Reload Reg
#define TIM3_CCR1 (*((volatile unsigned long *) 0x40000434))   //Timer 3 Capture/Compare Reg
//Timer 6 addresses
#define TIM6_CR1 (*((volatile unsigned long *) 0x40001000))   //Timer 6 Control Reg 1
#define TIM6_CR2 (*((volatile unsigned long *) 0x40001004))   //Timer 6 Control Reg 2
#define TIM6_SR (*((volatile unsigned long *) 0x40001010))    //Timer 6 Status Reg
#define TIM6_DIER (*((volatile unsigned long *) 0x4000100C))  //Timer 6 Interrupt Enable
#define TIM6_CNT (*((volatile unsigned long *) 0x40001024))   //Timer 6 Count Reg
#define TIM6_PSC (*((volatile unsigned long *) 0x40001028))   //Timer 6 Prescale Reg
#define TIM6_ARR (*((volatile unsigned long *) 0x4000102C))   //Timer 6 Auto-Reload Reg
#define TIM6_EGR (*((volatile unsigned long *) 0x40001014))   //Timer 6 Event Generation Reg
//Interrupt controller addresses
#define NVICISER0 (*((volatile unsigned long *) 0xE000E100))   //Interrupt Enable 0-31
#define NVICISER1 (*((volatile unsigned long *) 0xE000E104))   //Interrupt Enable 32-63
#define NVICICER0 (*((volatile unsigned long *) 0xE000E180))   //Interrupt Clear Enable 0-31
#define NVICICER1 (*((volatile unsigned long *) 0xE000E184))   //Interrupt Clear Enable 32-63
//USART1 Registers
#define USART1_SR   (*((volatile unsigned long *) 0x40011000))   //USART 1 Status Register
#define USART1_DR   (*((volatile unsigned long *) 0x40011004))   //USART 1 Data Register
#define USART1_BRR  (*((volatile unsigned long *) 0x40011008))  //USART 1 Baud Rate Register
#define USART1_CR1  (*((volatile unsigned long *) 0x4001100C))  //USART 1 Control Register 1
#define USART1_CR2  (*((volatile unsigned long *) 0x40011010))  //USART 1 Control Register 2
#define USART1_CR3  (*((volatile unsigned long *) 0x40011014))  //USART 1 Control Register 3
#define USART1_GTPR (*((volatile unsigned long *) 0x40011018)) //USART 1 Gd Time & Prescale Register
//USART4 Registers
#define USART4_SR   (*((volatile unsigned long *) 0x40004C00))   //USART 4 Status Register
#define USART4_DR   (*((volatile unsigned long *) 0x40004C04))   //USART 4 Data Register
#define USART4_BRR  (*((volatile unsigned long *) 0x40004C08))  //USART 4 Baud Rate Register
#define USART4_CR1  (*((volatile unsigned long *) 0x40004C0C))  //USART 4 Control Register 1
#define USART4_CR2  (*((volatile unsigned long *) 0x40004C10))  //USART 4 Control Register 2
#define USART4_CR3  (*((volatile unsigned long *) 0x40004C14))  //USART 4 Control Register 3
#define USART4_GTPR (*((volatile unsigned long *) 0x40004C18)) //USART 4 Gd Time & Prescale Register
//USART6 Registers
#define USART6_SR   (*((volatile unsigned long *) 0x40011400))   //USART 6 Status Register
#define USART6_DR   (*((volatile unsigned long *) 0x40011404))   //USART 6 Data Register
#define USART6_BRR  (*((volatile unsigned long *) 0x40011408))  //USART 6 Baud Rate Register
#define USART6_CR1  (*((volatile unsigned long *) 0x4001140C))  //USART 6 Control Register 1
#define USART6_CR2  (*((volatile unsigned long *) 0x40011410))  //USART 6 Control Register 2
#define USART6_CR3  (*((volatile unsigned long *) 0x40011414))  //USART 6 Control Register 3
#define USART6_GTPR (*((volatile unsigned long *) 0x40011418)) //USART 6 Gd Time & Prescale Register
//I2C1
#define I2C1_CR1   (*((volatile unsigned long *) 0x40005400)) //I2C1 Control Reg 1
#define I2C1_CR2   (*((volatile unsigned long *) 0x40005404)) //I2C1 Control Reg 2
#define I2C1_OAR1  (*((volatile unsigned long *) 0x40005408)) //I2C1 Own Addr Reg 1
#define I2C1_OAR2  (*((volatile unsigned long *) 0x4000540C)) //I2C1 Own Addr Reg 2
#define I2C1_DR    (*((volatile unsigned long *) 0x40005410)) //I2C1 Data Reg
#define I2C1_SR1   (*((volatile unsigned long *) 0x40005414)) //I2C1 Status Reg 1
#define I2C1_SR2   (*((volatile unsigned long *) 0x40005418)) //I2C1 Status Reg 2
#define I2C1_CCR   (*((volatile unsigned long *) 0x4000541C)) //I2C1 Clock Control Reg
#define I2C1_TRISE (*((volatile unsigned long *) 0x40005420)) //I2C1 Rise Time Reg
#define I2C1_FLTR  (*((volatile unsigned long *) 0x40005424)) //I2C1 Filter Reg
//I2C2
#define I2C2_CR1   (*((volatile unsigned long *) 0x40005800)) //I2C2 Control Reg 1
#define I2C2_CR2   (*((volatile unsigned long *) 0x40005804)) //I2C2 Control Reg 2
#define I2C2_OAR1  (*((volatile unsigned long *) 0x40005808)) //I2C2 Own Addr Reg 1
#define I2C2_OAR2  (*((volatile unsigned long *) 0x4000580C)) //I2C2 Own Addr Reg 2
#define I2C2_DR    (*((volatile unsigned long *) 0x40005810)) //I2C2 Data Reg
#define I2C2_SR1   (*((volatile unsigned long *) 0x40005814)) //I2C2 Status Reg 1
#define I2C2_SR2   (*((volatile unsigned long *) 0x40005818)) //I2C2 Status Reg 2
#define I2C2_CCR   (*((volatile unsigned long *) 0x4000581C)) //I2C2 Clock Control Reg
#define I2C2_TRISE (*((volatile unsigned long *) 0x40005820)) //I2C2 Rise Time Reg
#define I2C2_FLTR  (*((volatile unsigned long *) 0x40005824)) //I2C2 Filter Reg
//I2C3
#define I2C3_CR1   (*((volatile unsigned long *) 0x40005C00)) //I2C3 Control Reg 1
#define I2C3_CR2   (*((volatile unsigned long *) 0x40005C04)) //I2C3 Control Reg 2
#define I2C3_OAR1  (*((volatile unsigned long *) 0x40005C08)) //I2C3 Own Addr Reg 1
#define I2C3_OAR2  (*((volatile unsigned long *) 0x40005C0C)) //I2C3 Own Addr Reg 2
#define I2C3_DR    (*((volatile unsigned long *) 0x40005C10)) //I2C3 Data Reg
#define I2C3_SR1   (*((volatile unsigned long *) 0x40005C14)) //I2C3 Status Reg 1
#define I2C3_SR2   (*((volatile unsigned long *) 0x40005C18)) //I2C3 Status Reg 2
#define I2C3_CCR   (*((volatile unsigned long *) 0x40005C1C)) //I2C3 Clock Control Reg
#define I2C3_TRISE (*((volatile unsigned long *) 0x40005C20)) //I2C3 Rise Time Reg
#define I2C3_FLTR  (*((volatile unsigned long *) 0x40005C24)) //I2C3 Filter Reg
//SPI1
#define SPI1_CR1     (*((volatile unsigned long *) 0x40013000)) //SPI1 Control Reg 1
#define SPI1_CR2     (*((volatile unsigned long *) 0x40013004)) //SPI1 Control Reg 2
#define SPI1_SR      (*((volatile unsigned long *) 0x40013008)) //SPI1 Status Reg
#define SPI1_DR      (*((volatile unsigned long *) 0x4001300C)) //SPI1 Data Reg
#define SPI1_CRCPR   (*((volatile unsigned long *) 0x40013010)) //SPI1 CRC Polynomial Reg
#define SPI1_RXCRCR  (*((volatile unsigned long *) 0x40013014)) //SPI1 CRS receive
#define SPI1_TXCRCR  (*((volatile unsigned long *) 0x40013018)) //SPI1 CRC transmit
#define SPI1_I2SCFGR (*((volatile unsigned long *) 0x4001301C)) //SPI1 I2S Config Reg
#define SPI1_I2SCPR  (*((volatile unsigned long *) 0x40013020)) //SPI1 I2S Clk Prescale
//SPI2
#define SPI2_CR1     (*((volatile unsigned long *) 0x40003800)) //SPI2 Control Reg 1
#define SPI2_CR2     (*((volatile unsigned long *) 0x40003804)) //SPI2 Control Reg 2
#define SPI2_SR      (*((volatile unsigned long *) 0x40003808)) //SPI2 Status Reg
#define SPI2_DR      (*((volatile unsigned long *) 0x4000380C)) //SPI2 Data Reg
#define SPI2_CRCPR   (*((volatile unsigned long *) 0x40003810)) //SPI2 CRC Polynomial Reg
#define SPI2_RXCRCR  (*((volatile unsigned long *) 0x40003814)) //SPI2 CRS receive
#define SPI2_TXCRCR  (*((volatile unsigned long *) 0x40003818)) //SPI2 CRC transmit
#define SPI2_I2SCFGR (*((volatile unsigned long *) 0x4000381C)) //SPI2 I2S Config Reg
#define SPI2_I2SCPR  (*((volatile unsigned long *) 0x40003820)) //SPI2 I2S Clk Prescale
//SPI3
#define SPI3_CR1     (*((volatile unsigned long *) 0x40003C00)) //SPI3 Control Reg 1
#define SPI3_CR2     (*((volatile unsigned long *) 0x40003C04)) //SPI3 Control Reg 2
#define SPI3_SR      (*((volatile unsigned long *) 0x40003C08)) //SPI3 Status Reg
#define SPI3_DR      (*((volatile unsigned long *) 0x40003C0C)) //SPI3 Data Reg
#define SPI3_CRCPR   (*((volatile unsigned long *) 0x40003C10)) //SPI3 CRC Polynomial Reg
#define SPI3_RXCRCR  (*((volatile unsigned long *) 0x40003C14)) //SPI3 CRS receive
#define SPI3_TXCRCR  (*((volatile unsigned long *) 0x40003C18)) //SPI3 CRC transmit
#define SPI3_I2SCFGR (*((volatile unsigned long *) 0x40003C1C)) //SPI3 I2S Config Reg
#define SPI3_I2SCPR  (*((volatile unsigned long *) 0x40003C20)) //SPI3 I2S Clk Prescale





