#include "pxt.h"

enum class HandleButton {
    //% block=touch key
    TOUCHKEY = MES_DPAD_BUTTON_1_DOWN,
    B1 = MES_DPAD_BUTTON_2_DOWN,
    B2 = MES_DPAD_BUTTON_3_DOWN,
    B3 = MES_DPAD_BUTTON_4_DOWN,
    B4 = MES_DPAD_BUTTON_A_DOWN,
    //% block=knob1
    KNOB1 = MES_DPAD_BUTTON_B_DOWN,
    //% block=knob2
    KNOB2 = MES_DPAD_BUTTON_C_DOWN
};


namespace microbot {
    /**
     * Do something when a button is pushed down and released again.
     * @param button the button that needs to be pressed
     * @param body code to run when event is raised
     */
    //% help=input/on-button-pressed weight=58 blockGap=8
    //% blockId=device_button_event block="on button|%NAME|pressed"
    //% parts="buttonpair"
    void onButtonPressed(HandleButton button, Action body) {
        registerWithDal(MES_DPAD_CONTROLLER_ID,(int)button, body);
    }
}