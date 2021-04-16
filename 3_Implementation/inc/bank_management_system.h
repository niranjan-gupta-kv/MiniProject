/** 
* @file bank_management_system.h
* Has the following functions
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  takes amount, time, rate and returns the Simple interest
* @param[in] t 
* @param[in] amount
* @param[in] rate
* @return Result of (rate*t*amount)/100.0
*/
float interest(float t,float amount,int rate);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */