#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderItemActorTemplate : public ScriptBinderTemplate {

public:
    virtual ~ScriptBinderItemActorTemplate(); // _ZN29ScriptBinderItemActorTemplateD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getTemplateIdentifier()const; // _ZNK29ScriptBinderItemActorTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK29ScriptBinderItemActorTemplate13applyTemplateER18ScriptObjectBinder
//    void build(long &, ItemActor const&); //TODO: incomplete function definition // _ZN29ScriptBinderItemActorTemplate5buildERN4entt8RegistryIjEERK9ItemActor
    ScriptBinderItemActorTemplate(); // _ZN29ScriptBinderItemActorTemplateC2Ev
};
