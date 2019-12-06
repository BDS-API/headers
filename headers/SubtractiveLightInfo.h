#pragma once

class SubtractiveLightInfo {

public:

    void SubtractiveLightInfo(void);
    void SubtractiveLightInfo(SubChunkLightIndex, Brightness);
    void SubtractiveLightInfo(SubtractiveLightInfo const&);
};
