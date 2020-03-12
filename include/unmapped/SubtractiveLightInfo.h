#pragma once

#include "../bedrock/util/Brightness.h"
#include "../bedrock/level/chunk/SubChunkLightIndex.h"


class SubtractiveLightInfo {

public:
    SubtractiveLightInfo(SubChunkLightIndex, Brightness);
    SubtractiveLightInfo(SubtractiveLightInfo const&);
    SubtractiveLightInfo();
    void operator<(SubtractiveLightInfo const&);
};
