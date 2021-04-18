/*
 * KEYPAD.h
 *
 *  Created on: Mar 16, 2021
 *   file name:keypad.c
 *  Description: Source file for the Keypad driver
 *      Author: Ahmed zakria
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "std_types.h"
#include"common_macros.h"
#include "micro_config.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* Keypad configurations for number of rows and columns */
#define N_col 3
#define N_row 3

/* Keypad Port Configurations */
#define KEYPAD_PORT_OUT PORTA
#define KEYPAD_PORT_IN  PINA
#define KEYPAD_PORT_DIR DDRA

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Function responsible for getting the pressed keypad key
 */
uint8 KeyPad_getPressedKey(void);

#endif /* KEYPAD_H_ */
