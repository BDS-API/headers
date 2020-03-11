#pragma once

#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../CommandOriginData.h"
#include "../../../json/Value.h"
#include "../../../unmapped/NetworkIdentifier.h"


class CommandOrigin {

public:
    static long sUnknownSource;

    virtual ~CommandOrigin();
    virtual void getCursorHitBlockPos()const;
    virtual void getCursorHitPos()const;
    virtual bool hasChatPerms()const;
    virtual bool hasTellPerms()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual bool isWorldBuilder()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getSourceId()const;
    virtual void getSourceSubId()const;
    virtual void getOutputReceiver()const;
    virtual void toCommandOriginData()const;
    virtual void getUUID()const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);

    void _toCommandOriginData(CommandOriginData &)const;
    CommandOrigin();
    void fromCommandOriginData(CommandOriginData const&, Level &, NetworkIdentifier const&, unsigned char);
    void getAreaAt(BlockPos const&)const;
    void getAreaAtWithBuffer(BlockPos const&)const;
    void getAreaAt(BlockPos const&, BlockPos const&, bool)const;
    void getAreaAtWithBuffer(BlockPos const&, BlockPos const&, bool)const;
};
