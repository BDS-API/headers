#pragma once



class EntityContext {

public:

    EntityContext(EntityRegistry &, EntityId);
    EntityContext(EntityRegistry &, unsigned int);
    void getWeakRef()const;
    void _registry()const;
};
