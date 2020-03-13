#pragma once

#include <string>


class ApplyLegacyEntityBinding /*ScriptTemplateFactory<ScriptServerContext>::Entity*/ { //TODO: incomplete class definition

public:
    ~ApplyLegacyEntityBinding(); // _ZN24ApplyLegacyEntityBindingD2Ev
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const; // _ZNK24ApplyLegacyEntityBinding22createAndApplyTemplateERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextPP5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ApplyLegacyEntityBinding(); // _ZN24ApplyLegacyEntityBindingC2Ev
};
