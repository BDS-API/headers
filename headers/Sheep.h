#pragma once

class Sheep : Animal {

public:
    static long EAT_ANIMATION_TICKS;

    virtual ~Sheep();
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getLootTable(void);
    virtual void getDefaultLootTable(void);
    virtual void aiStep(void);
    virtual void ate(void);
    virtual void useNewAi(void)const;
    virtual void jumpFromGround(void);
    virtual void newServerAiStep(void);

    void Sheep(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isGrazing(void)const;
    void _getOffspringColor(Animal &, Animal &);
};
