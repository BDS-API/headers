#pragma once

#include <string>
#include "CommandOrigin.h"


class BlockCommandOrigin : CommandOrigin {

public:
    virtual void getLevel()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void clone()const;
    virtual void getDimension()const;
    virtual void getBaseCommandBlock()const;
    virtual void getWorldPosition()const;
    virtual std::string getRequestId()const;
    virtual void getPermissionsLevel()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual void getBlockEntity()const;
    virtual void getEntity()const;
    virtual std::string getName()const;
    virtual void getBlockPosition()const;
    ~BlockCommandOrigin();
    BlockCommandOrigin(BlockSource &, BlockPos const&);
};
