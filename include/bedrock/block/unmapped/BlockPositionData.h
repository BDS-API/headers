#pragma once

#include "./BlockPositionData.h"


namespace StructureBlockPalette {

class BlockPositionData {

public:

    BlockPositionData();
    BlockPositionData(StructureBlockPalette::BlockPositionData &&);
    ~BlockPositionData();
    bool isValid()const;
};

}