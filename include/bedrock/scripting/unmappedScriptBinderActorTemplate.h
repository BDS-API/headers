#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderActorTemplate : public ScriptBinderTemplate {

public:
    virtual ~ScriptBinderActorTemplate(); // _ZN25ScriptBinderActorTemplateD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getTemplateIdentifier()const; // _ZNK25ScriptBinderActorTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK25ScriptBinderActorTemplate13applyTemplateER18ScriptObjectBinder
//    void build(long &, Actor const&); //TODO: incomplete function definition // _ZN25ScriptBinderActorTemplate5buildERN4entt8RegistryIjEERK5Actor
    ScriptBinderActorTemplate(); // _ZN25ScriptBinderActorTemplateC2Ev
};
