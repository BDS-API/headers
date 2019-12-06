#pragma once

class SubChunkLightUpdate {

public:

    void SubChunkLightUpdate(SubChunkBlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void SubChunkLightUpdate(SubChunkLightUpdate const&);
};
