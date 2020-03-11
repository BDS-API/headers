#pragma once

#include "./OverloadData.h"


namespace AvailableCommandsPacket {

class OverloadData {

public:

    ~OverloadData();
    OverloadData(AvailableCommandsPacket::OverloadData &&);
    OverloadData();
};

}