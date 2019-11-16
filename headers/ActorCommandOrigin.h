#pragma once

class ActorCommandOrigin : CommandOrigin {

    virtual void Actor~ActorCommandOrigin();
    virtual void Actor~ActorCommandOrigin();
    virtual void _ZNK18ActorCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK18ActorCommandOrigin7getNameB5cxx11Ev;
    virtual void ActorgetBlockPosition(void)const;
    virtual void ActorgetWorldPosition(void)const;
    virtual void ActorgetLevel(void)const;
    virtual void ActorgetDimension(void)const;
    virtual void ActorgetEntity(void)const;
    virtual void ActorgetPermissionsLevel(void)const;
    virtual void Actorclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void canUseCommandsWithoutCheatsEnabled(void)const;
    virtual void ActorisSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void ActorgetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
