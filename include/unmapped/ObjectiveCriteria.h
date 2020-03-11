#pragma once

#include "./ObjectiveCriteria.h"
#include "../bedrock/nbt/CompoundTag.h"
#include <string>


class ObjectiveCriteria {

public:

//  ObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition
    std::string getName()const;
    bool isReadOnly()const;
    void getRenderType()const;
    void deserialize(CompoundTag const&);
    void serialize(ObjectiveCriteria const&);
    ~ObjectiveCriteria();
};
