#pragma once

#include "../../util/Brightness.h"


class SubChunkLightUpdate {

public:
    SubChunkLightUpdate(SubChunkBlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    SubChunkLightUpdate(SubChunkLightUpdate const&);
};
