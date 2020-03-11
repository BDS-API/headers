#pragma once

#include "./CommandData.h"


namespace AvailableCommandsPacket {

class CommandData {

public:

    ~CommandData();
    CommandData(AvailableCommandsPacket::CommandData &&);
    CommandData();
};

}