#pragma once

#include "./EnumData.h"


namespace AvailableCommandsPacket {

class EnumData {

public:

    ~EnumData();
    EnumData(AvailableCommandsPacket::EnumData &&);
    EnumData();
};

}