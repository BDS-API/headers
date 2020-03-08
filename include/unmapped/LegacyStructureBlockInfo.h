#pragma once



class LegacyStructureBlockInfo {

public:

    void getNonEmptyTag(void)const;
    void getNonEmptyTag(void);
    LegacyStructureBlockInfo(LegacyStructureBlockInfo&&);
    LegacyStructureBlockInfo(BlockPos const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, Block const&, Block const&);
};
