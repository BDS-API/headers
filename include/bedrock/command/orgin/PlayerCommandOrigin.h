#pragma once

#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "./CommandOrigin.h"
#include <string>


class PlayerCommandOrigin : CommandOrigin {

public:
    virtual ~PlayerCommandOrigin();
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual void getCursorHitBlockPos()const;
    virtual void getCursorHitPos()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getSourceId()const;
    virtual void getSourceSubId()const;
    virtual void getOriginType()const;

    PlayerCommandOrigin(Player &);
    PlayerCommandOrigin(ActorUniqueID, Level &);
};
