#pragma once

#include "../../level/Level"
#include "../../../unmapped/ActorUniqueID"
#include "../../actor/Player"


class PlayerCommandOrigin : CommandOrigin {

public:
    virtual PlayerCommandOrigin::~PlayerCommandOrigin();
    virtual void getRequestId[abi:cxx11](void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual bool canUseAbility(AbilitiesIndex)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOriginType(void)const;

    PlayerCommandOrigin(Player &);
    PlayerCommandOrigin(ActorUniqueID, Level &);
};
