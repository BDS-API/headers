#pragma once

#include "../../../json/Value.h"
#include "../../scripting/unmapped/ScriptEngine.h"
#include "CommandOrigin.h"
#include "../../level/ServerLevel.h"


class ScriptCommandOrigin : CommandOrigin {

public:
    virtual void getEntity()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getBlockPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual std::string getName()const;
    virtual void getPermissionsLevel()const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getWorldPosition()const;
    ~ScriptCommandOrigin();
    virtual std::string getRequestId()const;
    virtual void getOriginType()const;
    virtual void clone()const;
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &, unsigned int);
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &);
};
