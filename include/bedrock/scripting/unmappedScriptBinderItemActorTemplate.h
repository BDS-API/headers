#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderItemActorTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderItemActorTemplate(); // _ZN29ScriptBinderItemActorTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK29ScriptBinderItemActorTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK29ScriptBinderItemActorTemplate13applyTemplateER18ScriptObjectBinder
//  void build(entt::Registry<unsigned int> &, ItemActor const&); //TODO: incomplete function definition // _ZN29ScriptBinderItemActorTemplate5buildERN4entt8RegistryIjEERK9ItemActor
    ScriptBinderItemActorTemplate(); // _ZN29ScriptBinderItemActorTemplateC2Ev
};
