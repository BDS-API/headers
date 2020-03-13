#pragma once

#include <string>


class ApplyItemBinding /*ScriptTemplateFactory<ScriptServerContext>::Entity*/ { //TODO: incomplete class definition

public:
    ~ApplyItemBinding(); // _ZN16ApplyItemBindingD2Ev
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const; // _ZNK16ApplyItemBinding22createAndApplyTemplateERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextPP5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ApplyItemBinding(); // _ZN16ApplyItemBindingC2Ev
};
