#pragma once

#include "../../../unmapped/BlockPos"
#include "../../../mce/UUID"
#include "../../../json/Value"
#include "../CommandOriginData"


class CommandOrigin {

public:
    static long sUnknownSource;

    virtual CommandOrigin::~CommandOrigin();
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual bool hasChatPerms(void)const;
    virtual bool hasTellPerms(void)const;
    virtual bool canUseAbility(AbilitiesIndex)const;
    virtual bool isWorldBuilder(void)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
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
