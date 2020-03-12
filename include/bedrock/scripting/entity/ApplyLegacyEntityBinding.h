#pragma once

#include <string>


class ApplyLegacyEntityBinding /*ScriptTemplateFactory<ScriptServerContext>::Entity*/ { //TODO: incomplete class definition

public:
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;
    ~ApplyLegacyEntityBinding();
    ApplyLegacyEntityBinding();
};
