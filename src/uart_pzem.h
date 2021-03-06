#ifndef _ZABBUINO_UART_PZEM_H_ 
#define _ZABBUINO_UART_PZEM_H_

#include "uart_bus.h"

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

Based on: https://github.com/olehs/PZEM004T
version 1.0 is used

*/

#define PZEM_UART_SPEED                    (9600) // baud

#define PZEM_CMD_VOLTAGE                   (0xB0)
#define PZEM_CMD_CURRENT                   (0xB1)
#define PZEM_CMD_POWER                     (0xB2)
#define PZEM_CMD_ENERGY                    (0xB3)
#define PZEM_CMD_SETADDR                   (0xB4)
#define PZEM_PACKET_SIZE                   (0x07)
#define PZEM_DEFAULT_READ_TIMEOUT          (1000L)

/*****************************************************************************************************************************
*
*   Read values of the specified metric from the Peacefair PZEM-004 Energy Meter, put it to output buffer on success. 
*
*   Returns: 
*     - RESULT_IN_BUFFER on success
*     - DEVICE_ERROR_TIMEOUT if device stop talking
*
*****************************************************************************************************************************/
int8_t getPZEM004Metric(const uint8_t _rxPin, const uint8_t _txPin, uint8_t _metric, const char *_ip, uint8_t *_dst);

#endif // #ifndef _ZABBUINO_UART_PZEM_H_