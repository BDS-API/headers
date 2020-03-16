#pragma once

#include <string>
#include "BlockLegacy.h"


class HugeMushroomBlock : public BlockLegacy {

public:
    virtual ~HugeMushroomBlock(); // _ZN17HugeMushroomBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK17HugeMushroomBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK17HugeMushroomBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17HugeMushroomBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK17HugeMushroomBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK17HugeMushroomBlock24getSilkTouchItemInstanceERK5Block
//    HugeMushroomBlock(std::string const&, int, Material const&, long); //TODO: incomplete function definition // _ZN17HugeMushroomBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8MaterialNS_4TypeE
};
