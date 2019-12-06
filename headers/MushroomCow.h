#pragma once

class MushroomCow : Animal {

public:
    virtual ~MushroomCow();
    virtual void checkSpawnRules(bool);

    void MushroomCow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _isFloorMycelium(BlockPos const&);
};
