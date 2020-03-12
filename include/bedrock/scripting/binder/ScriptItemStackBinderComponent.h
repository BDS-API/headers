#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "../../item/ItemInstance.h"
#include "../unmapped/ScriptEngine.h"
#include "ScriptBinderComponent.h"


class ScriptItemStackBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;
    static std::string COUNT;
    static std::string ITEM;
    static std::string UNDEFINED;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptItemStackBinderComponent();
    ScriptItemStackBinderComponent();
    void getIdentifier()const;
//  ScriptItemStackBinderComponent(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition
};
