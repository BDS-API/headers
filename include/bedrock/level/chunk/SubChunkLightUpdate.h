#pragma once

#include "../../util/Brightness.h"
#include "./SubChunkBlockPos.h"
#include "./SubChunkLightUpdate.h"


class SubChunkLightUpdate {

public:

    SubChunkLightUpdate(SubChunkBlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    SubChunkLightUpdate(SubChunkLightUpdate const&);
};
