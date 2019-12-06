#pragma once

class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptLevelAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptLevelAreaBinderComponent(void);
    void ScriptLevelAreaBinderComponent(mce::UUID const&);
    void ScriptLevelAreaBinderComponent(ITickingArea const&);
    void getIdentifier(void)const;
};
