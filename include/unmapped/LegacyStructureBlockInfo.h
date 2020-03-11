#pragma once

#include <memory>
#include "../bedrock/nbt/CompoundTag.h"
#include "./LegacyStructureBlockInfo.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"


class LegacyStructureBlockInfo {

public:

    void getNonEmptyTag()const;
    void getNonEmptyTag();
    ~LegacyStructureBlockInfo();
    LegacyStructureBlockInfo(LegacyStructureBlockInfo &&);
    LegacyStructureBlockInfo(BlockPos const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, Block const&, Block const&);
};
