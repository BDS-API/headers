#pragma once

class EntityContext {

public:

    void EntityContext(EntityRegistry &, EntityId);
    void EntityContext(EntityRegistry &, unsigned int);
    void getWeakRef(void)const;
    void _registry(void)const;
};
