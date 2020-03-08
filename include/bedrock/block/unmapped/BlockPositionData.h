#pragma once



using namespace StructureBlockPalette;

class BlockPositionData {

public:

    BlockPositionData(void);
    BlockPositionData(StructureBlockPalette::BlockPositionData&&);
    bool isValid()const;
};
