#pragma once



class SubtractiveLightInfo {

public:

    SubtractiveLightInfo(void);
    SubtractiveLightInfo(SubChunkLightIndex, Brightness);
    SubtractiveLightInfo(SubtractiveLightInfo const&);
};
