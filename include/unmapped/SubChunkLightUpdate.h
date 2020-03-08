#pragma once



class SubChunkLightUpdate {

public:

    SubChunkLightUpdate(SubChunkBlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    SubChunkLightUpdate(SubChunkLightUpdate const&);
};
