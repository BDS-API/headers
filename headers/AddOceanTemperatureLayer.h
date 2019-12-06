#pragma once

class AddOceanTemperatureLayer : RootLayer_ltBiomeTemperatureCategory_ge {

public:
    virtual ~AddOceanTemperatureLayer();
    virtual void _fillArea(LayerDetails::WorkingData<BiomeTemperatureCategory, char> &, int, int, int, int)const;

};
