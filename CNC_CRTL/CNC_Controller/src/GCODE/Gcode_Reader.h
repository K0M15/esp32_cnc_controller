#ifndef GCODE_READER_H
#define GCODE_READER_H

#include <stdint.h>
#include <queue>
#include "INPUT/BaseInputClass.h"

/**
 * @brief a position with speed and flags
 * 
 */
struct movement_t{
    float x;
    float y;
    float z;
    float velocity;
    uint32_t flags;
};

class CMD_queue{
public:
    CMD_queue(size_t max_size);
    ~CMD_queue();
    void push(movement_t move);
    movement_t pop();
private:
    uint32_t buffered;
    std::queue<movement_t> * queue;
};

class GcodeReader{
public:
    GcodeReader();
    ~GcodeReader();
    CMD_queue * get_queue();
    uint32_t check();
private:
    uint32_t fill();

    CMD_queue * queue;
    uint32_t position;
    uint32_t total_amount;
};


#endif /* GCODE_READER_H */