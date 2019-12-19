#pragma once

class EntityContext {

public:

    EntityContext(EntityRegistry &, EntityId);
    EntityContext(EntityRegistry &, unsigned int);
    void getWeakRef(void)const;
    void _registry(void)const;
};
