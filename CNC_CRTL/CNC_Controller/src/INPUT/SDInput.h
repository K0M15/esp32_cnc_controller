#ifndef SD_INPUT_H
#define SD_INPUT_H

#include "BaseInputClass.h"

class SDInput: public BaseInputClass{
public:
    SDInput();
    ~SDInput();
    uint32_t get(char * out);
};


#endif /* SD_INPUT_H */