#pragma once



class EntityId {

public:
    EntityId(unsigned long);
    void operator!=(EntityId const&)const;
    void operator==(EntityId const&)const;
};
