#pragma once

#include <memory>


class SurfaceBuilderRegistry {

public:
    class Element;

    SurfaceBuilderRegistry();
    ~SurfaceBuilderRegistry();
    void lookupForEntity(EntityContext &)const;
    class Element {

    public:
//      Element(std::unique_ptr<ISurfaceBuilder>, unsigned long ((EntityContext &), ); //TODO: incomplete function definition
        Element(SurfaceBuilderRegistry::Element &&);
        ~Element();
    };
};
