#pragma once

class VirtualCommandOrigin : CommandOrigin {

    virtual void Virtual~VirtualCommandOrigin();
    virtual void Virtual~VirtualCommandOrigin();
    virtual void _ZNK20VirtualCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK20VirtualCommandOrigin7getNameB5cxx11Ev;
    virtual void VirtualgetBlockPosition(void)const;
    virtual void VirtualgetWorldPosition(void)const;
    virtual void VirtualgetLevel(void)const;
    virtual void VirtualgetDimension(void)const;
    virtual void VirtualgetEntity(void)const;
    virtual void VirtualgetPermissionsLevel(void)const;
    virtual void Virtualclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void VirtualhasChatPerms(void)const;
    virtual void VirtualhasTellPerms(void)const;
    virtual void VirtualcanUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void VirtualcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void VirtualisSelectorExpansionAllowed(void)const;
    virtual void VirtualgetSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void VirtualgetOutputReceiver(void)const;
    virtual void VirtualgetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
