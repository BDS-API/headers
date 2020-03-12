#pragma once

#include "../../../mce/UUID.h"
#include "../../util/BlockPos.h"
#include "../../level/Level.h"
#include "../../../json/Value.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "../CommandOriginData.h"


class CommandOrigin {

public:
    static long sUnknownSource;

    virtual void getCursorHitBlockPos()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void toCommandOriginData()const;
    virtual void getCursorHitPos()const;
    virtual bool isWorldBuilder()const;
    ~CommandOrigin();
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getOutputReceiver()const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual bool hasChatPerms()const;
    virtual void getUUID()const;
    virtual void _setUUID(mce::UUID const&);
    virtual void getSourceId()const;
    virtual void getSourceSubId()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual bool hasTellPerms()const;
    CommandOrigin();
    void getAreaAt(BlockPos const&, BlockPos const&, bool)const;
    void getAreaAtWithBuffer(BlockPos const&)const;
    void fromCommandOriginData(CommandOriginData const&, Level &, NetworkIdentifier const&, unsigned char);
    void getAreaAt(BlockPos const&)const;
    void _toCommandOriginData(CommandOriginData &)const;
    void getAreaAtWithBuffer(BlockPos const&, BlockPos const&, bool)const;
};
