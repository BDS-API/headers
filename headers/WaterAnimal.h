#pragma once

class WaterAnimal : Mob {

public:
    virtual ~WaterAnimal();
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);
    virtual void useNewAi(void)const;

    void WaterAnimal(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
