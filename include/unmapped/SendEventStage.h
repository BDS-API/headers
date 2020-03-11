#pragma once

#include "./SendEventStage.h"


class SendEventStage {

public:

    ~SendEventStage();
    SendEventStage(SendEventStage const&);
    SendEventStage();
    SendEventStage(SendEventStage &&);
};
