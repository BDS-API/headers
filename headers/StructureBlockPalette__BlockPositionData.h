#pragma once

class StructureBlockPalette::BlockPositionData {

public:

    void BlockPositionData(void);
    void BlockPositionData(StructureBlockPalette::BlockPositionData&&);
    bool isValid(void)const;
};
