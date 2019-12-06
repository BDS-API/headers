#pragma once

class ObjectiveCriteria {

public:

    void ObjectiveCriteria(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, ObjectiveRenderType);
    bool isReadOnly(void)const;
    void getRenderType(void)const;
    void deserialize(CompoundTag const&);
    void serialize(ObjectiveCriteria const&);
};
