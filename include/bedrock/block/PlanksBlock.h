#pragma once

#include "../util/Random"
#include "../../unmapped/Block"


class PlanksBlock : BlockLegacy {

public:
    static long WOOD_NAMES[abi:cxx11];

    virtual PlanksBlock::~PlanksBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    PlanksBlock(std::string const&, int);
    void getWoodMaterialColor(WoodType);
    bool isValidWoodMaterial(int);
};
