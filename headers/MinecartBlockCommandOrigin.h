#pragma once

class MinecartBlockCommandOrigin : BlockCommandOrigin {

public:
    virtual ~MinecartBlockCommandOrigin();
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void clone(void)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual void getOriginType(void)const;
    virtual void getBlockEntity(void)const;
    virtual void getBaseCommandBlock(void)const;

    void MinecartBlockCommandOrigin(BlockSource &, ActorUniqueID const&);
};
