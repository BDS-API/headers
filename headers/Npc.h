#pragma once

class Npc : Mob {

public:
    static long SKIN_ID_TAG[abi:cxx11];
    static long Skins[abi:cxx11];

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Npc();
    virtual void breaksFallingBlocks(void)const;
    virtual bool canShowNameTag(void)const;
    virtual void getFormattedNameTag[abi:cxx11](void)const;
    virtual void interactPreventDefault(void);
    virtual bool isFishable(void)const;
    virtual bool isTargetable(void)const;
    virtual bool canBePulledIntoVehicle(void)const;
    virtual void buildDebugInfo(std::string &)const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated(void);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual bool canExistWhenDisallowMob(void)const;
    virtual void useNewAi(void)const;
    virtual void newServerAiStep(void);
    virtual void _serverAiMobStep(void);

    void Npc(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
