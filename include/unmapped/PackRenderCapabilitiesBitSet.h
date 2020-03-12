#pragma once



class PackRenderCapabilitiesBitSet {

public:
    void combineWithSet(PackRenderCapabilitiesBitSet const&);
//  void getFlag(RenderCapability)const; //TODO: incomplete function definition
    void reduceToNonTrusted();
//  void setFlag(RenderCapability); //TODO: incomplete function definition
    PackRenderCapabilitiesBitSet();
};
