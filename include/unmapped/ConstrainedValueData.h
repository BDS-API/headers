#pragma once

#include "./ConstrainedValueData.h"


namespace AvailableCommandsPacket {

class ConstrainedValueData {

public:

    ~ConstrainedValueData();
    ConstrainedValueData(AvailableCommandsPacket::ConstrainedValueData &&);
    ConstrainedValueData();
};

}