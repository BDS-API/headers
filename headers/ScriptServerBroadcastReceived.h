#pragma once

class ScriptServerBroadcastReceived : ScriptTemplateFactory_ltScriptServerContext_ge::ReceivedEvent {

public:
    virtual ~ScriptServerBroadcastReceived();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle &);

    void ScriptServerBroadcastReceived(void);
};
