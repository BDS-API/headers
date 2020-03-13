#pragma once

#include <memory>


class LegacyStructureBlockInfo {

public:
    void getNonEmptyTag()const; // _ZNK24LegacyStructureBlockInfo14getNonEmptyTagEv
    void getNonEmptyTag(); // _ZN24LegacyStructureBlockInfo14getNonEmptyTagEv
    ~LegacyStructureBlockInfo(); // _ZN24LegacyStructureBlockInfoD2Ev
    LegacyStructureBlockInfo(LegacyStructureBlockInfo &&); // _ZN24LegacyStructureBlockInfoC2EOS_
    LegacyStructureBlockInfo(BlockPos const&, std::unique_ptr<CompoundTag>, Block const&, Block const&); // _ZN24LegacyStructureBlockInfoC2ERK8BlockPosSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EERK5BlockSA_
};
