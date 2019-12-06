#pragma once

class BehaviorTreeGroup {

public:

    void BehaviorTreeGroup(ResourcePackManager &, BehaviorFactory &);
    void tryGetDefinition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addBehaviorTree(std::unique_ptr<BehaviorTreeDefinition, std::default_delete<BehaviorTreeDefinition>>);
    void _addRef(BehaviorTreeDefinitionPtr &);
    void _removeRef(BehaviorTreeDefinitionPtr &);
    void _loadTrees(void);
    void loadTree(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void initializeTrees(void);
    void loadTree(Json::Value, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
