#pragma once

class Creeper : Monster {

public:
    virtual Creeper::~Creeper();
    virtual void normalTick(void);
    virtual void die(ActorDamageSource const&);
    virtual void _onSizeUpdated(void);
    virtual void useNewAi(void)const;

    Creeper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _getSwell(void)const;
    void _setOldSwell(int);
    void _setSwellDir(int);
    void getSwellDir(void);
    void _setSwell(int);
    void _getOldSwell(void)const;
    void getSwelling(float)const;
};
