#pragma once

class Json::Path {

public:

    void Path(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&);
    void makePath(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*>> const&);
    void addPathInArg(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*>> const&, __gnu_cxx::__normal_iterator<Json::PathArgument const* const*, std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*>>> &, Json::PathArgument::Kind);
    void invalidPath(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void resolve(Json::Value const&)const;
    void resolve(Json::Value const&, Json::Value const&)const;
    void make(Json::Value &)const;
};
