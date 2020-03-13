#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderItemStackTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderItemStackTemplate(); // _ZN29ScriptBinderItemStackTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK29ScriptBinderItemStackTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK29ScriptBinderItemStackTemplate13applyTemplateER18ScriptObjectBinder
//  void build(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition // _ZN29ScriptBinderItemStackTemplate5buildERN4entt8RegistryIjEERK12ItemInstance
    ScriptBinderItemStackTemplate(); // _ZN29ScriptBinderItemStackTemplateC2Ev
};
