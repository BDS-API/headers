#pragma once

#include <string>
#include "BlockLegacy.h"


class PlanksBlock : BlockLegacy {

public:
    static std::string WOOD_NAMES;

    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~PlanksBlock();
    PlanksBlock(std::string const&, int);
    bool isValidWoodMaterial(int);
//  void getWoodMaterialColor(WoodType); //TODO: incomplete function definition
};
