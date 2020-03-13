#pragma once



class EntityId {

public:
    EntityId(unsigned long); // _ZN8EntityIdC2Em
    void operator==(EntityId const&)const; // _ZNK8EntityIdeqERKS_
    void operator!=(EntityId const&)const; // _ZNK8EntityIdneERKS_
};
