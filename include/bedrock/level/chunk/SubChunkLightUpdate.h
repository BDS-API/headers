#pragma once

#include "../../util/Brightness"


class SubChunkLightUpdate {

public:

    SubChunkLightUpdate(SubChunkBlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    SubChunkLightUpdate(SubChunkLightUpdate const&);
};
