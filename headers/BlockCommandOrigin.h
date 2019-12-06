#pragma once

class BlockCommandOrigin : CommandOrigin {

public:
    virtual ~BlockCommandOrigin();
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;
    virtual void getBlockEntity(void)const;
    virtual void getBaseCommandBlock(void)const;

    void BlockCommandOrigin(BlockSource &, BlockPos const&);
};
