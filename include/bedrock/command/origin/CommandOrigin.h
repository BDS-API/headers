#pragma once



class CommandOrigin {

public:
    static long sUnknownSource;

    virtual void getCursorHitPos()const;
    virtual bool hasChatPerms()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isWorldBuilder()const;
    virtual void getCursorHitBlockPos()const;
    ~CommandOrigin();
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void toCommandOriginData()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getSourceSubId()const;
    virtual void _setUUID(mce::UUID const&);
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual void getUUID()const;
    virtual void getSourceId()const;
    virtual void getOutputReceiver()const;
    virtual bool hasTellPerms()const;
    CommandOrigin();
    void getAreaAt(BlockPos const&)const;
    void getAreaAtWithBuffer(BlockPos const&)const;
    void getAreaAt(BlockPos const&, BlockPos const&, bool)const;
    void getAreaAtWithBuffer(BlockPos const&, BlockPos const&, bool)const;
    void _toCommandOriginData(CommandOriginData &)const;
    void fromCommandOriginData(CommandOriginData const&, Level &, NetworkIdentifier const&, unsigned char);
};
