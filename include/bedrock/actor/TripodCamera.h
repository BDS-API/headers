#pragma once

class TripodCamera : Mob {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual TripodCamera::~TripodCamera();
    virtual void remove(void);
    virtual void breaksFallingBlocks(void)const;
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getShadowRadius(void)const;
    virtual void interactPreventDefault(void);
    virtual bool isPickable(void);
    virtual bool isTargetable(void)const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool canExistWhenDisallowMob(void)const;

    TripodCamera(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setPlayerOwner(Player *);
    void interactWithPlayer(Player &);
    void startTakingPicture(Player &);
    bool isActivated(void)const;
    void getCountdown(void)const;
};
