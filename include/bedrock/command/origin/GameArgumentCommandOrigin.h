#pragma once

#include <string>
#include "CommandOrigin.h"


class GameArgumentCommandOrigin : CommandOrigin {

public:
    ~GameArgumentCommandOrigin(); // _ZN25GameArgumentCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK25GameArgumentCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK25GameArgumentCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK25GameArgumentCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK25GameArgumentCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK25GameArgumentCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK25GameArgumentCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK25GameArgumentCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK25GameArgumentCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK25GameArgumentCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK25GameArgumentCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK25GameArgumentCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK25GameArgumentCommandOrigin13getOriginTypeEv
    GameArgumentCommandOrigin(); // _ZN25GameArgumentCommandOriginC2Ev
};
