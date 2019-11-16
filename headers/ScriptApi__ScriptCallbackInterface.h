#pragma once

class ScriptApi::ScriptCallbackInterface {

    virtual void ~ScriptCallbackInterface();
    virtual void ~ScriptCallbackInterface();
    virtual void initialize(void);
    virtual void shutdown(void);
    virtual void onLogReceived(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onInfoReceived(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onWarnReceived(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onErrorReceived(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void makeErrorResultObject(ScriptApi::ScriptObjectHandle &);
    virtual void processLogCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processRegisterEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processCreateEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processListenForEventCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processBroadcastEventCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processCreateEntityCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processDestroyEntityCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processIsValidEntityCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processRegisterComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processCreateComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processDestroyComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processHasComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processGetComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processApplyComponentChangesCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processRegisterQueryCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processAddFilterToQueryCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processGetEntitiesFromQueryCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void processGetBlockCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
}
