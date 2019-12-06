#pragma once

class MinecartHopper : Minecart {

public:
    virtual ~MinecartHopper();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType(void);
    virtual void getDefaultDisplayBlock(void)const;
    virtual void getDefaultDisplayOffset(void)const;
    virtual void applyNaturalSlowdown(void);

    void MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
