#pragma once

#include "../../../mce/UUID"
#include "../../../json/Value"
#include "../../../unmapped/NetworkIdentifier"
#include "../../util/BlockPos"
#include "../CommandOriginData"
#include "../../level/Level"


class CommandOrigin {

public:
    static long sUnknownSource;

    CommandOrigin::~CommandOrigin()
    virtual void getCursorHitBlockPos()const;
    virtual void getCursorHitPos()const;
    virtual bool hasChatPerms()const;
    virtual bool hasTellPerms()const;
    virtual bool canUseAbility(AbilitiesIndex)const;
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
    CommandOrigin(void);
    void fromCommandOriginData(CommandOriginData const&, Level &, NetworkIdentifier const&, unsigned char);
    void getAreaAt(BlockPos const&)const;
    void getAreaAtWithBuffer(BlockPos const&)const;
    void getAreaAt(BlockPos const&, BlockPos const&, bool)const;
    void getAreaAtWithBuffer(BlockPos const&, BlockPos const&, bool)const;
};
