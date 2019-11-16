#pragma once

class BlockCommandOrigin : CommandOrigin {

    virtual void Block~BlockCommandOrigin();
    virtual void Block~BlockCommandOrigin();
    virtual void _ZNK18BlockCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK18BlockCommandOrigin7getNameB5cxx11Ev;
    virtual void BlockgetBlockPosition(void)const;
    virtual void BlockgetWorldPosition(void)const;
    virtual void BlockgetLevel(void)const;
    virtual void BlockgetDimension(void)const;
    virtual void BlockgetEntity(void)const;
    virtual void BlockgetPermissionsLevel(void)const;
    virtual void Blockclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void BlockcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void BlockisSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void BlockgetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
    virtual void BlockgetBlockEntity(void)const;
    virtual void BlockgetBaseCommandBlock(void)const;
}
