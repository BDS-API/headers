#pragma once

class ResourceHelper {

public:

    void deserializePackStackEntry(Json::Value const&, PackInstanceId &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void serializePackStackEntry(PackInstanceId const&, Json::Value &);
    void toPackIdAnyVersion(PackIdVersion const&);
};
