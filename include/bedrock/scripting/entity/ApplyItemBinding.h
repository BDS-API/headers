#pragma once

#include <string>
#include "../unmapped/ScriptEngine.h"
#include "../unmapped/ScriptServerContext.h"
#include "../../actor/Actor.h"
#include "../ScriptVersionInfo.h"


class ApplyItemBinding /*ScriptTemplateFactory<ScriptServerContext>::Entity*/ { //TODO: incomplete class definition

public:
    ~ApplyItemBinding();
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;
    ApplyItemBinding();
};
