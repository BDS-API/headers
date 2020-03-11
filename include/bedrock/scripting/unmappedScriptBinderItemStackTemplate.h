#pragma once

#include "./ScriptBinderTemplate.h"
#include "../../item/ItemInstance.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderItemStackTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderItemStackTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

//  void build(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition
    ScriptBinderItemStackTemplate();
};
