#ifndef MOTION_CONTROLER_H
#define MOTION_CONTROLER_H

#include <stdint.h>
#include <SimpleFOC.h>
#include "GCODE/Gcode_Reader.h"

#define MASK_SPINDLE_ON     0b00000000000000000000000000000001
#define MASK_SPINDLE_DIR    0b00000000000000000000000000000010

enum MachineSystem_t{
    Karthasian,
    CoreXY,
    Lathe
};


struct MotionControllerSettings_t{
    MachineSystem_t system;
    float rapid_speed;
    float straight_feed;
    uint32_t flags;
};

class MotionController{
public:
    MotionController();
    ~MotionController();
    void loop();
private:
    MotionControllerSettings_t * settings;
    CMD_queue * queue;
};


#endif /* MOTION_CONTROLER_H */