#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderActorTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderActorTemplate(); // _ZN25ScriptBinderActorTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK25ScriptBinderActorTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK25ScriptBinderActorTemplate13applyTemplateER18ScriptObjectBinder
//  void build(entt::Registry<unsigned int> &, Actor const&); //TODO: incomplete function definition // _ZN25ScriptBinderActorTemplate5buildERN4entt8RegistryIjEERK5Actor
    ScriptBinderActorTemplate(); // _ZN25ScriptBinderActorTemplateC2Ev
};
