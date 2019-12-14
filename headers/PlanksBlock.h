#pragma once

class PlanksBlock : BlockLegacy {

public:
    virtual ~PlanksBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void PlanksBlock(std::string const&, int);
    void getWoodMaterialColor(WoodType);
    bool isValidWoodMaterial(int);
};
