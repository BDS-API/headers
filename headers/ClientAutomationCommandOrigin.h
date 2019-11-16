#pragma once

class ClientAutomationCommandOrigin : CommandOrigin {

    virtual void ClientAutomation~ClientAutomationCommandOrigin();
    virtual void ClientAutomation~ClientAutomationCommandOrigin();
    virtual void _ZNK29ClientAutomationCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK29ClientAutomationCommandOrigin7getNameB5cxx11Ev;
    virtual void ClientAutomationgetBlockPosition(void)const;
    virtual void ClientAutomationgetWorldPosition(void)const;
    virtual void ClientAutomationgetLevel(void)const;
    virtual void ClientAutomationgetDimension(void)const;
    virtual void ClientAutomationgetEntity(void)const;
    virtual void ClientAutomationgetPermissionsLevel(void)const;
    virtual void ClientAutomationclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void ClientAutomationcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void ClientAutomationisSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void ClientAutomationgetOriginType(void)const;
    virtual void ClientAutomationtoCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
