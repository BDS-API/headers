#pragma once

class BehaviorFactory {

public:

    void BehaviorFactory(void);
    void _initNodes(void);
    void registerNodePair(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>> ()(void)>, std::function<std::unique_ptr<BehaviorNode, std::default_delete<BehaviorNode>> ()(void)>);
    void tryGetDefinition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void tryGetNode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void loadNodeDefinition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value, BehaviorTreeDefinitionPtr &)const;
};
