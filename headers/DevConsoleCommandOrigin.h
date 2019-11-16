#pragma once

class DevConsoleCommandOrigin : CommandOrigin {

    virtual void DevConsole~DevConsoleCommandOrigin();
    virtual void DevConsole~DevConsoleCommandOrigin();
    virtual void _ZNK23DevConsoleCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK23DevConsoleCommandOrigin7getNameB5cxx11Ev;
    virtual void DevConsolegetBlockPosition(void)const;
    virtual void DevConsolegetWorldPosition(void)const;
    virtual void DevConsolegetLevel(void)const;
    virtual void DevConsolegetDimension(void)const;
    virtual void DevConsolegetEntity(void)const;
    virtual void DevConsolegetPermissionsLevel(void)const;
    virtual void DevConsoleclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void DevConsolecanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void DevConsoleisSelectorExpansionAllowed(void)const;
    virtual void DevConsolegetSourceId(void)const;
    virtual void DevConsolegetSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void DevConsolegetOriginType(void)const;
    virtual void DevConsoletoCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
