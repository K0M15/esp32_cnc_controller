#ifndef BASE_INPUT_CLASS_H
#define BASE_INPUT_CLASS_H

#include <stdint.h>


class BaseInputClass{
public:
    BaseInputClass();
    ~BaseInputClass();
    virtual uint32_t get(char * out);
};


#endif /* BASE_INPUT_CLASS_H */