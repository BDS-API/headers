#pragma once

#include "../../../core/Path.h"
#include "./ScriptQueueData.h"
#include <string>


namespace ScriptEngine {

class ScriptQueueData {

public:

    ScriptQueueData(Core::Path const&, std::string const&, std::string const&, std::string const&);
    ~ScriptQueueData();
    ScriptQueueData(ScriptEngine::ScriptQueueData const&);
};

}