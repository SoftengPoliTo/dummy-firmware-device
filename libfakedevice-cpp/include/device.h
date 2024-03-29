#ifndef DEVICE_H
#define DEVICE_H

/**
 * Turns on the lamp.
 * 
 * This function turns on the lamp and returns a boolean value.
 * @return True.
 * 
 * @note Hazards
 * - Fire
 * - LogEnergyConsumption
 * - EnergyConsumption
 */
extern "C" bool turnLampOn();

/**
 * Turns off the lamp.
 * 
 * This function turns off the lamp and returns a boolean value.
 * @return False.
 *
 * @note Hazards
 * - LogEnergyConsumption
 */
extern "C" bool turnLampOff(); 

#endif // DEVICE_H
