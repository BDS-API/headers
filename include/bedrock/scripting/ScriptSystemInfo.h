#pragma once

#include "./ScriptSystemInfo.h"


namespace ScriptApi {

class ScriptSystemInfo {

public:

    ScriptSystemInfo();
    ~ScriptSystemInfo();
    ScriptSystemInfo(ScriptApi::ScriptSystemInfo &&);
};

}