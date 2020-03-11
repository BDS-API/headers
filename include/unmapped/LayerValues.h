#pragma once

#include "./PreBiome.h"


class LayerValues {

public:

    void operator==(LayerValues::PreBiome const&, LayerValues::PreBiome const&);
    void operator!=(LayerValues::PreBiome const&, LayerValues::PreBiome const&);
};
