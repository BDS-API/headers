#pragma once

class MinecartBlockCommandOrigin : BlockCommandOrigin {

    virtual void Minecart~MinecartBlockCommandOrigin();
    virtual void Minecart~MinecartBlockCommandOrigin();
    virtual void _ZNK18BlockCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK18BlockCommandOrigin7getNameB5cxx11Ev;
    virtual void MinecartgetBlockPosition(void)const;
    virtual void MinecartgetWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void Minecartclone(void)const;
    virtual void CommandOrigin::getCursorHitBlockPos(void)const;
    virtual void CommandOrigin::getCursorHitPos(void)const;
    virtual void CommandOrigin::hasChatPerms(void)const;
    virtual void CommandOrigin::hasTellPerms(void)const;
    virtual void CommandOrigin::canUseAbility(AbilitiesIndex)const;
    virtual void CommandOrigin::isWorldBuilder(void)const;
    virtual void MinecartcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void isSelectorExpansionAllowed(void)const;
    virtual void CommandOrigin::getSourceId(void)const;
    virtual void CommandOrigin::getSourceSubId(void)const;
    virtual void CommandOrigin::getOutputReceiver(void)const;
    virtual void MinecartgetOriginType(void)const;
    virtual void CommandOrigin::toCommandOriginData(void)const;
    virtual void CommandOrigin::getUUID(void)const;
    virtual void CommandOrigin::handleCommandOutputCallback(Json::Value &&)const;
    virtual void CommandOrigin::_setUUID(mce::UUID const&);
    virtual void MinecartgetBlockEntity(void)const;
    virtual void MinecartgetBaseCommandBlock(void)const;
}
