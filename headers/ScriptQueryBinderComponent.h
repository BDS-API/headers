#pragma once

class ScriptQueryBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptQueryBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptQueryBinderComponent(void);
    void ScriptQueryBinderComponent(unsigned int);
    void getIdentifier(void)const;
};
