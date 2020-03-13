#pragma once

#include <string>
#include "BlockLegacy.h"


class ConcreteBlock : BlockLegacy {

public:
    ~ConcreteBlock(); // _ZN13ConcreteBlockD2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK13ConcreteBlock15isValidAuxValueEi
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13ConcreteBlock15getResourceItemER6RandomRK5Blocki
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK13ConcreteBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK13ConcreteBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK13ConcreteBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK13ConcreteBlock24getSilkTouchItemInstanceERK5Block
    ConcreteBlock(std::string const&, int); // _ZN13ConcreteBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
