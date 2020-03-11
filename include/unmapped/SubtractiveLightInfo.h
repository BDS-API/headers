#pragma once

#include "./SubtractiveLightInfo.h"
#include "../bedrock/level/chunk/SubChunkLightIndex.h"
#include "../bedrock/util/Brightness.h"


class SubtractiveLightInfo {

public:

    SubtractiveLightInfo();
    SubtractiveLightInfo(SubChunkLightIndex, Brightness);
    SubtractiveLightInfo(SubtractiveLightInfo const&);
    void operator<(SubtractiveLightInfo const&);
};
