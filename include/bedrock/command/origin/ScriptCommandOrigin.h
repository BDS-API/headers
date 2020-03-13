#pragma once

#include <string>
#include "CommandOrigin.h"


class ScriptCommandOrigin : CommandOrigin {

public:
    ~ScriptCommandOrigin(); // _ZN19ScriptCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK19ScriptCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK19ScriptCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK19ScriptCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK19ScriptCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK19ScriptCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK19ScriptCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK19ScriptCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK19ScriptCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK19ScriptCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK19ScriptCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK19ScriptCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK19ScriptCommandOrigin13getOriginTypeEv
    virtual void handleCommandOutputCallback(Json::Value &&)const; // _ZNK19ScriptCommandOrigin27handleCommandOutputCallbackEON4Json5ValueE
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &); // _ZN19ScriptCommandOriginC2ER11ServerLevelR12ScriptEngine
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &, unsigned int); // _ZN19ScriptCommandOriginC2ER11ServerLevelR12ScriptEnginej
};
