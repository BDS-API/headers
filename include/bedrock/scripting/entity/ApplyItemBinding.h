#pragma once

#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"
#include "../../actor/Actor"
#include "../unmapped/ScriptServerContext"


class ApplyItemBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    ApplyItemBinding::~ApplyItemBinding()
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    ApplyItemBinding(void);
};
