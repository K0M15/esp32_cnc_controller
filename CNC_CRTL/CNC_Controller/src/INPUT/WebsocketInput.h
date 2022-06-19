#ifndef WEBSOCKET_INPUT_H
#define WEBSOCKET_INPUT_H

#include "BaseInputClass.h"

class WebsocketInput: public BaseInputClass{
public:
    WebsocketInput();
    ~WebsocketInput();
    uint32_t get(char * out);
};


#endif /* WEBSOCKET_INPUT_H */