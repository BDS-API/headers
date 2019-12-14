#pragma once

class ScriptEngine::ScriptQueueData {

public:

    void ScriptQueueData(Core::Path const&, std::string const&, std::string const&, std::string const&);
    void ScriptQueueData(ScriptEngine::ScriptQueueData const&);
};
