#pragma once

#include "../bedrock/util/Brightness"
#include "../bedrock/level/chunk/SubChunkLightIndex"


class SubtractiveLightInfo {

public:

    SubtractiveLightInfo(void);
    SubtractiveLightInfo(SubChunkLightIndex, Brightness);
    SubtractiveLightInfo(SubtractiveLightInfo const&);
};
