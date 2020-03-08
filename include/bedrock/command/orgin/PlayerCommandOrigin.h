#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../actor/Player"
#include "../../level/Level"


class PlayerCommandOrigin : CommandOrigin {

public:
    PlayerCommandOrigin::~PlayerCommandOrigin()
    virtual void getRequestId()const;
    virtual void getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual void getCursorHitBlockPos()const;
    virtual void getCursorHitPos()const;
    virtual bool canUseAbility(AbilitiesIndex)const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getSourceId()const;
    virtual void getSourceSubId()const;
    virtual void getOriginType()const;

    PlayerCommandOrigin(Player &);
    PlayerCommandOrigin(ActorUniqueID, Level &);
};
