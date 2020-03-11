#pragma once

#include "../../scripting/unmapped/ScriptEngine.h"
#include "../../level/ServerLevel.h"
#include "../../../json/Value.h"
#include "./CommandOrigin.h"
#include <string>


class ScriptCommandOrigin : CommandOrigin {

public:
    virtual ~ScriptCommandOrigin();
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
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
