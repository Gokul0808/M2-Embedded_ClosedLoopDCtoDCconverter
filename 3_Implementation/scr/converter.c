/**
 * @file function.c
 * @author Gokulakrishnan 
 * @brief 
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "header.h"

uint16_t theOCR1A = 214;

ISR(TIMER1_OVF_vect)
{
  OCR1A = theOCR1A;
}
