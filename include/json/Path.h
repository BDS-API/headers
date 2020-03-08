#pragma once



using namespace Json;

class Path {

public:

    Path(std::string const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&);
    void makePath(std::string const&, std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*>> const&);
    void addPathInArg(std::string const&, std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*>> const&, __gnu_cxx::__normal_iterator<Json::PathArgument const**, std::vector<Json::PathArgument const*, std::allocator<Json::PathArgument const*>>> &, Json::PathArgument::Kind);
    void invalidPath(std::string const&, int);
    void resolve(Json::Value const&)const;
    void resolve(Json::Value const&, Json::Value const&)const;
    void make(Json::Value &)const;
};
