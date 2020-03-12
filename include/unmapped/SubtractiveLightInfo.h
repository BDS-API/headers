#pragma once

#include "../bedrock/util/Brightness.h"
#include "../bedrock/level/chunk/SubChunkLightIndex.h"


class SubtractiveLightInfo {

public:
    SubtractiveLightInfo();
    SubtractiveLightInfo(SubChunkLightIndex, Brightness);
    SubtractiveLightInfo(SubtractiveLightInfo const&);
    void operator<(SubtractiveLightInfo const&);
};
