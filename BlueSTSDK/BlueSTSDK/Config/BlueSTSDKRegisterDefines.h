/*******************************************************************************
 * COPYRIGHT(c) 2015 STMicroelectronics
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************/

#ifndef BlueSTSDKRegisterDefines_h
#define BlueSTSDKRegisterDefines_h

#import <Foundation/Foundation.h>
#import "BlueSTSDKRegister.h"

@interface BlueSTSDKRegisterDefines : NSObject

/**
 * This enum contains the registers name */
typedef NS_ENUM(NSInteger, BlueSTSDKRegisterName_e) {
    BlueSTSDK_REGISTER_NAME_NONE,
    
    /*Mandatory registers*/
    BlueSTSDK_REGISTER_NAME_FW_VER,
    BlueSTSDK_REGISTER_NAME_LED_CONFIG,
    BlueSTSDK_REGISTER_NAME_BLE_LOC_NAME,
    BlueSTSDK_REGISTER_NAME_BLE_PUB_ADDR,
    
    BlueSTSDK_REGISTER_NAME_BATTERY_LEVEL,
    BlueSTSDK_REGISTER_NAME_BATTERY_VOLTAGE,
    BlueSTSDK_REGISTER_NAME_CURRENT,
    BlueSTSDK_REGISTER_NAME_PWRMNG_STATUS,
    
    /*optional generic*/
    BlueSTSDK_REGISTER_NAME_RADIO_TXPWR_CONFIG,
    BlueSTSDK_REGISTER_NAME_TIMER_FREQ,
    BlueSTSDK_REGISTER_NAME_PWR_MODE_CONFIG,
    BlueSTSDK_REGISTER_NAME_HW_FEATURES_MAP,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0001,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0002,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0004,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0008,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0010,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0020,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0040,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0080,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0100,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0200,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0400,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_0800,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_1000,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_2000,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_4000,
    BlueSTSDK_REGISTER_NAME_HW_FEATURE_CTRLS_8000,
    BlueSTSDK_REGISTER_NAME_SW_FEATURES_MAP,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0001,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0002,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0004,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0008,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0010,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0020,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0040,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0080,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0100,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0200,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0400,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_0800,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_1000,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_2000,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_4000,
    BlueSTSDK_REGISTER_NAME_SW_FEATURE_CTRLS_8000,
    BlueSTSDK_REGISTER_NAME_BLE_DEBUG_CONFIG,
    BlueSTSDK_REGISTER_NAME_USB_DEBUG_CONFIG,
    BlueSTSDK_REGISTER_NAME_HW_CALIBRATION_MAP,
    BlueSTSDK_REGISTER_NAME_SW_CALIBRATION_MAP,
    
    BlueSTSDK_REGISTER_NAME_DFU_REBOOT,
    BlueSTSDK_REGISTER_NAME_HW_CALIBRATION,
    BlueSTSDK_REGISTER_NAME_HW_CALIBRATION_STATUS,
    BlueSTSDK_REGISTER_NAME_SW_CALIBRATION,
    BlueSTSDK_REGISTER_NAME_SW_CALIBRATION_STATUS
};

/**
 * Lookup the register through the name
 * @param name name of the register
 *
 * @return the register if exist otherwise nil
 */
+(BlueSTSDKRegister *) lookUpWithRegisterName:(BlueSTSDKRegisterName_e)name;
/**
 * Lookup the register through the name
 * @param address address of the register
 * @param target target of the register
 *
 * @return the register if exist otherwise nil
 */
+(BlueSTSDKRegister *) lookUpRegisterWithAddress:(NSInteger)address target:(BlueSTSDKRegisterTarget_e)target;
/**
 * Lookup the register through the name
 * @param address address of the register
 * @param target target of the register
 *
 * @return the register name if exist, otherwise BlueSTSDK_REGISTER_NAME_NONE
 */
+(BlueSTSDKRegisterName_e) lookUpRegisterNameWithAddress:(NSInteger)address target:(BlueSTSDKRegisterTarget_e)target;

/**
 * Get the list of available registers
 *
 * @return a dictionary with all registers
 */
+(NSDictionary *)registers;
@end
#endif //BlueSTSDKRegisterDefines_h