#pragma once



class PackRenderCapabilitiesBitSet {

public:

    PackRenderCapabilitiesBitSet(void);
    void setFlag(RenderCapability);
    void getFlag(RenderCapability)const;
    void combineWithSet(PackRenderCapabilitiesBitSet const&);
    void reduceToNonTrusted();
};
