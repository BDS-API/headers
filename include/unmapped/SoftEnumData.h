#pragma once

#include "./SoftEnumData.h"


namespace AvailableCommandsPacket {

class SoftEnumData {

public:

    ~SoftEnumData();
    SoftEnumData(AvailableCommandsPacket::SoftEnumData &&);
};

}