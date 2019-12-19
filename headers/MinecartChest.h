#pragma once

class MinecartChest : Minecart {

public:
    static long ITEMS_SIZE;

    virtual ~MinecartChest();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType(void);
    virtual void getDefaultDisplayBlock(void)const;
    virtual void applyNaturalSlowdown(void);

    void MinecartChest(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
