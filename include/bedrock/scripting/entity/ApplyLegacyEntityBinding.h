#pragma once

#include <string>


class ApplyLegacyEntityBinding /*public ScriptTemplateFactory<ScriptServerContext>::Entity*/ { //TODO: incomplete class definition

public:
    virtual ~ApplyLegacyEntityBinding(); // _ZN24ApplyLegacyEntityBindingD2Ev
    virtual void __fake_function0(); // fake
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const; // _ZNK24ApplyLegacyEntityBinding22createAndApplyTemplateERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextPP5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ApplyLegacyEntityBinding(); // _ZN24ApplyLegacyEntityBindingC2Ev
};
