#pragma once

#include <memory>


class SurfaceBuilderRegistry {

public:
    class Element;

    SurfaceBuilderRegistry(); // _ZN22SurfaceBuilderRegistryC2Ev
    ~SurfaceBuilderRegistry(); // _ZN22SurfaceBuilderRegistryD2Ev
    void lookupForEntity(EntityContext &)const; // _ZNK22SurfaceBuilderRegistry15lookupForEntityER13EntityContext
    class Element {

    public:
        ~Element(); // _ZN22SurfaceBuilderRegistry7ElementD2Ev
//      Element(std::unique_ptr<ISurfaceBuilder>, unsigned long ((EntityContext &), ); //TODO: incomplete function definition // _ZN22SurfaceBuilderRegistry7ElementC2ESt10unique_ptrI15ISurfaceBuilderSt14default_deleteIS2_EEPFmR13EntityContextE
        Element(SurfaceBuilderRegistry::Element &&); // _ZN22SurfaceBuilderRegistry7ElementC2EOS0_
    };
};
