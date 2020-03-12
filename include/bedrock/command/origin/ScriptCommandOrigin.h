#pragma once

#include <string>
#include "CommandOrigin.h"


class ScriptCommandOrigin : CommandOrigin {

public:
    virtual std::string getRequestId()const;
    virtual void getWorldPosition()const;
    virtual void getOriginType()const;
    virtual bool isSelectorExpansionAllowed()const;
    ~ScriptCommandOrigin();
    virtual void getDimension()const;
    virtual std::string getName()const;
    virtual void getPermissionsLevel()const;
    virtual void getLevel()const;
    virtual void getEntity()const;
    virtual void getBlockPosition()const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void clone()const;
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &);
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &, unsigned int);
};
