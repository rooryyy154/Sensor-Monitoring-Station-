#include "main.h"

/* --- Private function prototypes --- */
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
// TODO: Add ADC and Timer init prototypes

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* 1. MCU Configuration */

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* 2. Configure the system clock */
  SystemClock_Config();

  /* 3. Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  
  // USER CODE BEGIN Init
  // TODO: Initialize sensors and DMA streams here
  // USER CODE END Init

  /* 4. Infinite loop (Superloop) */
  while (1)
  {
      // USER CODE BEGIN WHILE
      
      /* * TODO: 
       * - Poll non-critical sensor data
       * - Process flags set by Interrupts (EXTI)
       * - Update state machine
       */
       
      // USER CODE END WHILE
  }
}
