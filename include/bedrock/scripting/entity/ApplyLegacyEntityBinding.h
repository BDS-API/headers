#pragma once

#include "../../actor/Actor"
#include "../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"


class ApplyLegacyEntityBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    virtual ApplyLegacyEntityBinding::~ApplyLegacyEntityBinding()
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    ApplyLegacyEntityBinding(void);
};
