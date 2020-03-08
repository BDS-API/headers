#pragma once

#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"
#include "../../actor/Actor"
#include "../unmapped/ScriptServerContext"


class ApplyLegacyEntityBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    ApplyLegacyEntityBinding::~ApplyLegacyEntityBinding()
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    ApplyLegacyEntityBinding(void);
};
