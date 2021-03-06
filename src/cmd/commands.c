/*******************************************************************************
 * @file 				commands.c
 *
 * @brief       Implementation of bluetooth commands
 *
 * @author			FER)
 *
 * @year				2019.
 ******************************************************************************/

/* standard libraries */
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

//#include "softdevice_handler.h"
#include "nrf_sdh.h."
#include "boards.h"
#include "cmd.h"

/* bluetooth */
#include "ble.h"
#include "ble_hci.h"
#include "ble_srv_common.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_bas.h"
#include "ble_nus.h"
#include "ble_hrs.h"
#include "ble_dis.h"
#include "ble_conn_params.h"

#include "nrf_sdh.h"

#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "semphr.h"


#include "cmd.h"

#include "nrf_sdh.h"
#include "nrf_sdh_ble.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdm.h"
#include "nrf_power.h"
//#include "nrf_bootloader_info.h"
#include "nrf_pwr_mgmt.h"
#include "ble_dfu.h"

/* bsp */
#include "I2C.h"

static float cmdStr2Num(char *str)
{
    return strtof(str, NULL);
}
