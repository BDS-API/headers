#pragma once

class WaterAnimal : Mob {

public:
    virtual WaterAnimal::~WaterAnimal();
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);
    virtual void useNewAi(void)const;

    WaterAnimal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
