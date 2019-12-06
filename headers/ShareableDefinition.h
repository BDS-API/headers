#pragma once

class ShareableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>> &);
    void addShareableByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addShareable(Shareable const&);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void ShareableDefinition(void);
};
