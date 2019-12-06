#pragma once

class MoveNode : BehaviorNode {

public:
    virtual ~MoveNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void MoveNode(void);
    void convertDirectionStringToKeyPress(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
