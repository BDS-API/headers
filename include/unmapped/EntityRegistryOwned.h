#pragma once



class EntityRegistryOwned {

public:

    EntityRegistryOwned(void);
    void createEntity();
    void destroyEntity(EntityContext);
};
