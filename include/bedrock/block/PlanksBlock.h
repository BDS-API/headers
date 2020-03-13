#pragma once

#include <string>
#include "BlockLegacy.h"


class PlanksBlock : BlockLegacy {

public:
    static std::string WOOD_NAMES;

    ~PlanksBlock(); // _ZN11PlanksBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11PlanksBlock15getResourceItemER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK11PlanksBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK11PlanksBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK11PlanksBlock24getSilkTouchItemInstanceERK5Block
    PlanksBlock(std::string const&, int); // _ZN11PlanksBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
//  void getWoodMaterialColor(WoodType); //TODO: incomplete function definition // _ZN11PlanksBlock20getWoodMaterialColorE8WoodType
    bool isValidWoodMaterial(int); // _ZN11PlanksBlock19isValidWoodMaterialEi
};
