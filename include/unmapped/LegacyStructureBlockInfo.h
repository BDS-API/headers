#pragma once

#include <memory>
#include "Block.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/nbt/CompoundTag.h"


class LegacyStructureBlockInfo {

public:
    void getNonEmptyTag()const;
    LegacyStructureBlockInfo(LegacyStructureBlockInfo &&);
    ~LegacyStructureBlockInfo();
    LegacyStructureBlockInfo(BlockPos const&, std::unique_ptr<CompoundTag>, Block const&, Block const&);
    void getNonEmptyTag();
};
