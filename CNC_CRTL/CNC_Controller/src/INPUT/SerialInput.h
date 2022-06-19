#ifndef SERIAL_INPUT_H
#define SERIAL_INPUT_H

#include "BaseInputClass.h"

class SerialInput: public BaseInputClass{
public:
    SerialInput();
    ~SerialInput();
    uint32_t get(char * out);
};


#endif /* SERIAL_INPUT_H */