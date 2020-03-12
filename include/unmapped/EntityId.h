#pragma once



class EntityId {

public:
    void operator==(EntityId const&)const;
    void operator!=(EntityId const&)const;
    EntityId(unsigned long);
};
