#pragma once

#include "CompoundTagEditHelper.h"
#include <functional>
#include <string>
#include "CompoundTagUpdater.h"


class CompoundTagUpdaterBuilder {

public:
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void tryEdit(std::string const&, std::function<void (CompoundTagEditHelper &)> &&);
    void rename(std::string const&, std::string const&);
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void visit(std::string const&);
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void remove(std::string const&);
    CompoundTagUpdaterBuilder(CompoundTagUpdater &);
    void addCompound(std::string const&)const;
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void edit(std::string const&, std::function<void (CompoundTagEditHelper &)> &&);
    void addCompound(std::string const&)const;
    void addCompound(std::string const&);
    void match(std::string const&, std::string);
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void popVisit();
};
