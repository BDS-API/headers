#pragma once

#include "../../actor/Actor.h"
#include "../unmapped/ScriptEngine.h"
#include "../ScriptVersionInfo.h"
#include "../unmapped/ScriptServerContext.h"
#include <string>


class ApplyLegacyEntityBinding /*ScriptTemplateFactory<ScriptServerContext>::Entity*/ { //TODO: incomplete class definition

public:
    virtual ~ApplyLegacyEntityBinding();
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    ApplyLegacyEntityBinding();
};
