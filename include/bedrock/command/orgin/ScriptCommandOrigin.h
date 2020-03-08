#pragma once

#include "../../level/ServerLevel"
#include "../../../json/Value"
#include "../../scripting/unmapped/ScriptEngine"


class ScriptCommandOrigin : CommandOrigin {

public:
    virtual ScriptCommandOrigin::~ScriptCommandOrigin()
    virtual void getRequestId()const;
    virtual void getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;

    ScriptCommandOrigin(ServerLevel &, ScriptEngine &);
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &, unsigned int);
};
