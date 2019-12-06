#pragma once

class SurfaceBuilderRegistry::Element {

public:

    void Element(std::unique_ptr<ISurfaceBuilder, std::default_delete<ISurfaceBuilder>>, unsigned long (*)(EntityContext &));
    void Element(SurfaceBuilderRegistry::Element&&);
};
