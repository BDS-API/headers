#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderLevelTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderLevelTemplate(); // _ZN25ScriptBinderLevelTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK25ScriptBinderLevelTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK25ScriptBinderLevelTemplate13applyTemplateER18ScriptObjectBinder
//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition // _ZN25ScriptBinderLevelTemplate5buildERN4entt8RegistryIjEEj
    ScriptBinderLevelTemplate(); // _ZN25ScriptBinderLevelTemplateC2Ev
};
