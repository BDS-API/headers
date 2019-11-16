#pragma once

class ActorServerCommandOrigin : ActorCommandOrigin {

    virtual void ~ActorServerCommandOrigin();
    virtual void ~ActorServerCommandOrigin();
    virtual void _ZNK18ActorCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK18ActorCommandOrigin7getNameB5cxx11Ev;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual void CommandOrigin::getCursorHitBlockPos(void)const;
    virtual void CommandOrigin::getCursorHitPos(void)const;
    virtual void CommandOrigin::hasChatPerms(void)const;
    virtual void CommandOrigin::hasTellPerms(void)const;
    virtual void CommandOrigin::canUseAbility(AbilitiesIndex)const;
    virtual void CommandOrigin::isWorldBuilder(void)const;
    virtual void CommandOrigin::canUseCommandsWithoutCheatsEnabled(void)const;
    virtual void isSelectorExpansionAllowed(void)const;
    virtual void CommandOrigin::getSourceId(void)const;
    virtual void CommandOrigin::getSourceSubId(void)const;
    virtual void CommandOrigin::getOutputReceiver(void)const;
    virtual void getOriginType(void)const;
    virtual void CommandOrigin::toCommandOriginData(void)const;
    virtual void CommandOrigin::getUUID(void)const;
    virtual void CommandOrigin::handleCommandOutputCallback(Json::Value &&)const;
    virtual void CommandOrigin::_setUUID(mce::UUID const&);
}
