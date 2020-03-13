#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderPureEcsTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderPureEcsTemplate(); // _ZN27ScriptBinderPureEcsTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK27ScriptBinderPureEcsTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK27ScriptBinderPureEcsTemplate13applyTemplateER18ScriptObjectBinder
//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition // _ZN27ScriptBinderPureEcsTemplate5buildERN4entt8RegistryIjEEj
    ScriptBinderPureEcsTemplate(); // _ZN27ScriptBinderPureEcsTemplateC2Ev
};
