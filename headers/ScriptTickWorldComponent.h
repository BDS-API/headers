#pragma once

class ScriptTickWorldComponent : ScriptTemplateFactory_ltScriptServerContext_ge::Component {

    virtual void ScriptTickWorldComponent::~ScriptTickWorldComponent();
    virtual void ScriptTickWorldComponent::~ScriptTickWorldComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual void hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, Level &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, Level &, ScriptApi::ScriptObjectHandle &)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, Level &, bool &)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle const&)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle &)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, Block const&, BlockSource &, BlockPos const&, bool &)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, ITickingArea &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, ITickingArea &, ScriptApi::ScriptObjectHandle &)const;
    virtual void ScriptTemplateFactory<ScriptServerContext>::Component::hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext&, ITickingArea const&, bool &)const;
}
