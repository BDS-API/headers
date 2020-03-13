#pragma once



class ResourceLocationPair {

public:
    ~ResourceLocationPair(); // _ZN20ResourceLocationPairD2Ev
    ResourceLocationPair(ResourceLocation const&, PackIdVersion const&, int); // _ZN20ResourceLocationPairC2ERK16ResourceLocationRK13PackIdVersioni
    ResourceLocationPair(ResourceLocationPair const&); // _ZN20ResourceLocationPairC2ERKS_
};
