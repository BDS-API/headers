#pragma once

class Pillager : HumanoidMonster {

public:
    virtual ~Pillager();
    virtual void normalTick(void);
    virtual void getRidingHeight(void);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getItemUseDuration(void);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool isDarkEnoughToSpawn(void)const;

    void Pillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
