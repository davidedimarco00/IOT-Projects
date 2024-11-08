#ifndef __WAIT_FOR_CLICK_TASK__
#define __WAIT_FOR_CLICK_TASK__

#include "kernel/DependantTask.h"
#include "components/api/Button.h"
#include "config/config.h"
#include "components/api/LCD.h"

#include "Arduino.h"

/**
 * @class WaitForClickTask
 * @brief This task waits for the user to click the start button.
 *
 * @author Alessandro Monticelli
 */
class WaitForClickTask : public DependantTask
{
public:
    WaitForClickTask() : DependantTask()
    {
        this->start = new Button(BUTTON_PIN);
        this->lcd = new LCD(0x27, 16, 2);
        this->init();
        // Serial.println(F("WaitForClickTask created"));
    };

    void tick() override;

private:
    Button *start;
    LCD *lcd;
};
#endif