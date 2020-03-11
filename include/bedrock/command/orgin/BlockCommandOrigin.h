#pragma once

#include "../../block/unmapped/BlockSource.h"
#include "./CommandOrigin.h"
#include "../../util/BlockPos.h"
#include <string>


class BlockCommandOrigin : CommandOrigin {

public:
    virtual ~BlockCommandOrigin();
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual void getBlockEntity()const;
    virtual void getBaseCommandBlock()const;

    BlockCommandOrigin(BlockSource &, BlockPos const&);
};
