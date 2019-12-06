#pragma once

class GetInteractionPositionForBlockNode : BehaviorNode {

public:
    virtual ~GetInteractionPositionForBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void GetInteractionPositionForBlockNode(void);
    void parseFacingNameFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
