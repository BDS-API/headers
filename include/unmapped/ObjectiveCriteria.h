#pragma once

#include "../bedrock/nbt/CompoundTag"


class ObjectiveCriteria {

public:

    ObjectiveCriteria(std::string const&, bool, ObjectiveRenderType);
    bool isReadOnly()const;
    void getRenderType()const;
    void deserialize(CompoundTag const&);
    void serialize(ObjectiveCriteria const&);
};
