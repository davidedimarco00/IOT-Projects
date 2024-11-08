#ifndef __TEMP__
#define __TEMP__

/**
 * @class Temp
 * @brief This class represents a temperature sensor.
 *
 * It provides functionalities to get the temperature.
 */
class Temp
{

public:
    /**
     * @brief Construct a new Temp object
     *
     * @param pin The pin number where the temperature sensor is connected.
     */
    Temp(int pin);

    /**
     * @brief Get the Temp object
     *
     * @return int The temperature value read from the sensor.
     */
    int getTemp();

private:
    /**
     * @brief The pin number where the temperature sensor is connected.
     *
     */
    int tempPin;
};

#endif // __TEMP__
