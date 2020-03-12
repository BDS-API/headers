#pragma once

#include "BlockLegacy.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"
#include <string>


class PlanksBlock : BlockLegacy {

public:
    static std::string WOOD_NAMES;

    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~PlanksBlock();
//  void getWoodMaterialColor(WoodType); //TODO: incomplete function definition
    PlanksBlock(std::string const&, int);
    bool isValidWoodMaterial(int);
};
