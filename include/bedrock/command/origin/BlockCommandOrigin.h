#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "CommandOrigin.h"


class BlockCommandOrigin : CommandOrigin {

public:
    virtual void getWorldPosition()const;
    virtual void getBlockEntity()const;
    virtual void getLevel()const;
    virtual void getEntity()const;
    virtual void clone()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual std::string getName()const;
    virtual std::string getRequestId()const;
    ~BlockCommandOrigin();
    virtual void getDimension()const;
    virtual void getPermissionsLevel()const;
    virtual void getBlockPosition()const;
    virtual void getOriginType()const;
    virtual void getBaseCommandBlock()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    BlockCommandOrigin(BlockSource &, BlockPos const&);
};
