#pragma once

class AddOceanTemperatureLayer : RootLayer<BiomeTemperatureCategory> {

public:
    virtual ~AddOceanTemperatureLayer();
    virtual void _fillArea(LayerDetails::WorkingData<BiomeTemperatureCategory, char> &, int, int, int, int)const;

};
