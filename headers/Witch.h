#pragma once

class Witch : HumanoidMonster {

public:
    static long Witch::SPEED_MODIFIER_DRINKING_UUID;
    static long Witch::SPEED_MODIFIER_DRINKING;

    virtual ~Witch();
    virtual bool canAttack(Actor *, bool)const;
    virtual void performRangedAttack(Actor &, float);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _onSizeUpdated(void);
    virtual void aiStep(void);
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);

    void Witch(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setUsingItem(bool);
    bool isUsingItem(void);
};
