#pragma once

#include "./ParamData.h"


namespace AvailableCommandsPacket {

class ParamData {

public:

    ~ParamData();
    ParamData(AvailableCommandsPacket::ParamData &&);
    ParamData();
};

}