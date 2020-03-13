#pragma once

#include <string>
#include "CommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class PlayerCommandOrigin : CommandOrigin {

public:
    ~PlayerCommandOrigin(); // _ZN19PlayerCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK19PlayerCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK19PlayerCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK19PlayerCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK19PlayerCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK19PlayerCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK19PlayerCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK19PlayerCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK19PlayerCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK19PlayerCommandOrigin5cloneEv
    virtual void getCursorHitBlockPos()const; // _ZNK19PlayerCommandOrigin20getCursorHitBlockPosEv
    virtual void getCursorHitPos()const; // _ZNK19PlayerCommandOrigin15getCursorHitPosEv
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition // _ZNK19PlayerCommandOrigin13canUseAbilityE14AbilitiesIndex
    virtual bool isSelectorExpansionAllowed()const; // _ZNK19PlayerCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getSourceId()const; // _ZNK19PlayerCommandOrigin11getSourceIdEv
    virtual void getSourceSubId()const; // _ZNK19PlayerCommandOrigin14getSourceSubIdEv
    virtual void getOriginType()const; // _ZNK19PlayerCommandOrigin13getOriginTypeEv
    PlayerCommandOrigin(Player &); // _ZN19PlayerCommandOriginC2ER6Player
    PlayerCommandOrigin(ActorUniqueID, Level &); // _ZN19PlayerCommandOriginC2E13ActorUniqueIDR5Level
};
