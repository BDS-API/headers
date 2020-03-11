#pragma once

#include "./PingCallbackData.h"


namespace RakNetInstance {

class PingCallbackData {

public:

    ~PingCallbackData();
    PingCallbackData(RakNetInstance::PingCallbackData &&);
};

}