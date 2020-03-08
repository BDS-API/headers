#pragma once



class ResourceLocationPair {

public:

    ResourceLocationPair(ResourceLocation const&, PackIdVersion const&, int);
    ResourceLocationPair(ResourceLocationPair const&);
};
