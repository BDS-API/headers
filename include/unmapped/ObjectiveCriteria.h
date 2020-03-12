#pragma once

#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class ObjectiveCriteria {

public:
    void getRenderType()const;
    void serialize(ObjectiveCriteria const&);
    ~ObjectiveCriteria();
//  ObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition
    void deserialize(CompoundTag const&);
    std::string getName()const;
    bool isReadOnly()const;
};
