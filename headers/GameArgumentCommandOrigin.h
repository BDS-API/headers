#pragma once

class GameArgumentCommandOrigin : CommandOrigin {

    virtual void GameArgument~GameArgumentCommandOrigin();
    virtual void GameArgument~GameArgumentCommandOrigin();
    virtual void _ZNK25GameArgumentCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK25GameArgumentCommandOrigin7getNameB5cxx11Ev;
    virtual void GameArgumentgetBlockPosition(void)const;
    virtual void GameArgumentgetWorldPosition(void)const;
    virtual void GameArgumentgetLevel(void)const;
    virtual void GameArgumentgetDimension(void)const;
    virtual void GameArgumentgetEntity(void)const;
    virtual void GameArgumentgetPermissionsLevel(void)const;
    virtual void GameArgumentclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void GameArgumentcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void GameArgumentisSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void GameArgumentgetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
