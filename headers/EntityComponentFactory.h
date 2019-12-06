#pragma once

class EntityComponentFactory {

public:

    void EntityComponentFactory(void);
    void tryGetDefinitionSerializer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void serializeComponentDefinitions(DefinitionInstanceGroup &, Json::Value const&, bool);
    void addComponents(EntityContext &, DefinitionInstanceGroup const&);
    void removeComponents(EntityContext &, DefinitionInstanceGroup const&);
    void addComponents(EntityContext &, Json::Value const&, bool);
    void removeComponents(EntityContext &, Json::Value const&, bool);
};
