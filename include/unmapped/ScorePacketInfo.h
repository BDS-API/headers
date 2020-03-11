#pragma once

#include "./ScorePacketInfo.h"


class ScorePacketInfo {

public:

    ~ScorePacketInfo();
    ScorePacketInfo(ScorePacketInfo const&);
    ScorePacketInfo(ScorePacketInfo &&);
};
