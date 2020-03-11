#pragma once

#include "./ScriptCommandCallbackData.h"


class ScriptCommandCallbackData {

public:

    ScriptCommandCallbackData();
    ~ScriptCommandCallbackData();
    ScriptCommandCallbackData(ScriptCommandCallbackData &&);
};
