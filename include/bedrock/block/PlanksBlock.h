#pragma once

#include "../../unmapped/Block.h"
#include <string>
#include "../util/Random.h"
#include "./BlockLegacy.h"


class PlanksBlock : BlockLegacy {

public:
    static std::string WOOD_NAMES;

    virtual ~PlanksBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    PlanksBlock(std::string const&, int);
//  void getWoodMaterialColor(WoodType); //TODO: incomplete function definition
    bool isValidWoodMaterial(int);
};
