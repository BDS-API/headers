#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderItemStackTemplate : ScriptBinderTemplate {

public:
    virtual void applyTemplate(ScriptObjectBinder &)const;
    virtual std::string getTemplateIdentifier()const;
    ~ScriptBinderItemStackTemplate();
//  void build(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition
    ScriptBinderItemStackTemplate();
};
