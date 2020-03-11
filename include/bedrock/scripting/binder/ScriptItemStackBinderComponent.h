#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptBinderComponent.h"
#include "../../item/ItemInstance.h"


class ScriptItemStackBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;
    static std::string COUNT;
    static std::string ITEM;
    static std::string UNDEFINED;

    virtual ~ScriptItemStackBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptItemStackBinderComponent();
//  ScriptItemStackBinderComponent(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition
    void getIdentifier()const;
};
