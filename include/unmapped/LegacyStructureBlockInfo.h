#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/BlockPos"


class LegacyStructureBlockInfo {

public:

    void getNonEmptyTag()const;
    void getNonEmptyTag();
    LegacyStructureBlockInfo(LegacyStructureBlockInfo&&);
    LegacyStructureBlockInfo(BlockPos const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, Block const&, Block const&);
};
