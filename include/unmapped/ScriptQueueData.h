#pragma once

using namespace ScriptEngine;

class ScriptQueueData {

public:

    ScriptQueueData(Core::Path const&, std::string const&, std::string const&, std::string const&);
    ScriptQueueData(ScriptEngine::ScriptQueueData const&);
};