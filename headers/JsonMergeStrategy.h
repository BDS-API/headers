#pragma once

class JsonMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual ~JsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);
    virtual void _preMergeTransform(Json::Value &);

    void JsonMergeStrategy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value &, std::function<bool ()(Json::Value &, Json::Value const&)> const&);
    void _recursiveMerge(Json::Value &, Json::Value const&);
};
