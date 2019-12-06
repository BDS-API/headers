#pragma once

class ScriptTelemetryEventListener : ScriptEventListener {

public:
    virtual ~ScriptTelemetryEventListener();
    virtual void onScriptLoaded(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    virtual void onScriptRan(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);

    void ScriptTelemetryEventListener(IMinecraftEventing &, bool);
};
