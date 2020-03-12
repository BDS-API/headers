#pragma once

#include <memory>


class LegacyStructureBlockInfo {

public:
    void getNonEmptyTag();
    void getNonEmptyTag()const;
    LegacyStructureBlockInfo(LegacyStructureBlockInfo &&);
    LegacyStructureBlockInfo(BlockPos const&, std::unique_ptr<CompoundTag>, Block const&, Block const&);
    ~LegacyStructureBlockInfo();
};
