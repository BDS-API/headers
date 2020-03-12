#pragma once

#include <string>


class ObjectiveCriteria {

public:
//  ObjectiveCriteria(std::string const&, bool, ObjectiveRenderType); //TODO: incomplete function definition
    ~ObjectiveCriteria();
    void deserialize(CompoundTag const&);
    void serialize(ObjectiveCriteria const&);
    std::string getName()const;
    void getRenderType()const;
    bool isReadOnly()const;
};
