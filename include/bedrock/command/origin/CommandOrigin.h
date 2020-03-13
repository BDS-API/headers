#pragma once



class CommandOrigin {

public:
    static long sUnknownSource;

    ~CommandOrigin(); // _ZN13CommandOriginD2Ev
    virtual void getCursorHitBlockPos()const; // _ZNK13CommandOrigin20getCursorHitBlockPosEv
    virtual void getCursorHitPos()const; // _ZNK13CommandOrigin15getCursorHitPosEv
    virtual bool hasChatPerms()const; // _ZNK13CommandOrigin12hasChatPermsEv
    virtual bool hasTellPerms()const; // _ZNK13CommandOrigin12hasTellPermsEv
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition // _ZNK13CommandOrigin13canUseAbilityE14AbilitiesIndex
    virtual bool isWorldBuilder()const; // _ZNK13CommandOrigin14isWorldBuilderEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK13CommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK13CommandOrigin26isSelectorExpansionAllowedEv
    virtual void getSourceId()const; // _ZNK13CommandOrigin11getSourceIdEv
    virtual void getSourceSubId()const; // _ZNK13CommandOrigin14getSourceSubIdEv
    virtual void getOutputReceiver()const; // _ZNK13CommandOrigin17getOutputReceiverEv
    virtual void toCommandOriginData()const; // _ZNK13CommandOrigin19toCommandOriginDataEv
    virtual void getUUID()const; // _ZNK13CommandOrigin7getUUIDEv
    virtual void handleCommandOutputCallback(Json::Value &&)const; // _ZNK13CommandOrigin27handleCommandOutputCallbackEON4Json5ValueE
    virtual void _setUUID(mce::UUID const&); // _ZN13CommandOrigin8_setUUIDERKN3mce4UUIDE
    void _toCommandOriginData(CommandOriginData &)const; // _ZNK13CommandOrigin20_toCommandOriginDataER17CommandOriginData
    CommandOrigin(); // _ZN13CommandOriginC2Ev
    void fromCommandOriginData(CommandOriginData const&, Level &, NetworkIdentifier const&, unsigned char); // _ZN13CommandOrigin21fromCommandOriginDataERK17CommandOriginDataR5LevelRK17NetworkIdentifierh
    void getAreaAt(BlockPos const&)const; // _ZNK13CommandOrigin9getAreaAtERK8BlockPos
    void getAreaAtWithBuffer(BlockPos const&)const; // _ZNK13CommandOrigin19getAreaAtWithBufferERK8BlockPos
    void getAreaAt(BlockPos const&, BlockPos const&, bool)const; // _ZNK13CommandOrigin9getAreaAtERK8BlockPosS2_b
    void getAreaAtWithBuffer(BlockPos const&, BlockPos const&, bool)const; // _ZNK13CommandOrigin19getAreaAtWithBufferERK8BlockPosS2_b
};
