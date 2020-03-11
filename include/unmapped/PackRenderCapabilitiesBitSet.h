#pragma once

#include "./PackRenderCapabilitiesBitSet.h"


class PackRenderCapabilitiesBitSet {

public:

    PackRenderCapabilitiesBitSet();
//  void setFlag(RenderCapability); //TODO: incomplete function definition
//  void getFlag(RenderCapability)const; //TODO: incomplete function definition
    void combineWithSet(PackRenderCapabilitiesBitSet const&);
    void reduceToNonTrusted();
};
