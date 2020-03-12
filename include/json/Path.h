#pragma once

#include <string>
#include <vector>


namespace Json {

    class Path {

    public:
//      void addPathInArg(std::string const&, std::vector<Json::PathArgument const*> const&, __gnu_cxx::__normal_iterator<Json::PathArgument const**, std::vector<Json::PathArgument const*>> &, Json::PathArgument::Kind); //TODO: incomplete function definition
        void resolve(Json::Value const&)const;
        void make(Json::Value &)const;
        ~Path();
        void makePath(std::string const&, std::vector<Json::PathArgument const*> const&);
        void resolve(Json::Value const&, Json::Value const&)const;
        void invalidPath(std::string const&, int);
        Path(std::string const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&);
    };
}
