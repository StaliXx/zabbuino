#ifndef _ZABBUINO_DHT_H_
#define _ZABBUINO_DHT_H_

/*

Based on: https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTstable
version 0.1.13 is used

*/

#include "../basic.h"
#include "tune.h"
#include "service.h"


#define DHT11_ID                                                (11)
#define DHT21_ID                                                (21)
#define DHT22_ID                                                (22)
#define DHT33_ID                                                (33)
#define DHT44_ID                                                (44)
#define AM2301_ID                                               (21)
#define AM2302_ID                                               (22)


// max timeout is 100usec.
// For a 16Mhz proc that is max 1600 clock cycles
// loops using TIMEOUT use at least 4 clock cycli
// so 100 us takes max 400 loops
// so by dividing F_CPU by 40000 we "fail" as fast as possible
#ifndef F_CPU
  #define DHTLIB_TIMEOUT                                        (1000)  // ahould be approx. clock/40000
#else
  #define DHTLIB_TIMEOUT                                        (F_CPU/40000)
#endif

#define DHTLIB_DHT11_WAKEUP                                     (18)
#define DHTLIB_DHT_WAKEUP                                       (1)

/*****************************************************************************************************************************
*
*   Overloads of main subroutine. Used to get numeric metric's value or it's char presentation only
*
*****************************************************************************************************************************/
int8_t getDHTMetric(const uint8_t, const uint8_t, const uint8_t, int32_t*);
int8_t getDHTMetric(const uint8_t, const uint8_t, const uint8_t, char*);

/*****************************************************************************************************************************
*
*  Read specified metric's value of the AM/DHT sensor, put it to output buffer on success. 
*
*  Returns: 
*    - RESULT_IN_BUFFER on success
*    - DEVICE_ERROR_CONNECT on connection error
*    - DEVICE_ERROR_ACK_L
*    - DEVICE_ERROR_ACK_H
*    - DEVICE_ERROR_TIMEOUT if sensor stops answer to the request
*
*****************************************************************************************************************************/
int8_t getDHTMetric(const uint8_t, const uint8_t, const uint8_t, char*, int32_t*, const uint8_t _wantsNumber = false);

#endif // #ifndef ZabbuinoDHT_h