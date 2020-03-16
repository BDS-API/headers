#pragma once



class PackRenderCapabilitiesBitSet {

public:
    PackRenderCapabilitiesBitSet(); // _ZN28PackRenderCapabilitiesBitSetC2Ev
//    void setFlag(long); //TODO: incomplete function definition // _ZN28PackRenderCapabilitiesBitSet7setFlagE16RenderCapability
//    void getFlag(long)const; //TODO: incomplete function definition // _ZNK28PackRenderCapabilitiesBitSet7getFlagE16RenderCapability
    void combineWithSet(PackRenderCapabilitiesBitSet const&); // _ZN28PackRenderCapabilitiesBitSet14combineWithSetERKS_
    void reduceToNonTrusted(); // _ZN28PackRenderCapabilitiesBitSet18reduceToNonTrustedEv
};
