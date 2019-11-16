#pragma once

class ServerCommandOrigin : CommandOrigin {

    virtual void Server~ServerCommandOrigin();
    virtual void Server~ServerCommandOrigin();
    virtual void _ZNK19ServerCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK19ServerCommandOrigin7getNameB5cxx11Ev;
    virtual void ServergetBlockPosition(void)const;
    virtual void ServergetWorldPosition(void)const;
    virtual void ServergetLevel(void)const;
    virtual void ServergetDimension(void)const;
    virtual void ServergetEntity(void)const;
    virtual void ServergetPermissionsLevel(void)const;
    virtual void Serverclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void ServercanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void ServerisSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void ServergetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
