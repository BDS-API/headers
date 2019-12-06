#pragma once

class PackRenderCapabilitiesBitSet {

public:

    void PackRenderCapabilitiesBitSet(void);
    void setFlag(RenderCapability);
    void getFlag(RenderCapability)const;
    void combineWithSet(PackRenderCapabilitiesBitSet const&);
    void reduceToNonTrusted(void);
};
