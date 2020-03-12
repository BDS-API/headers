#pragma once

#include <string>
#include <functional>


class CompoundTagUpdaterBuilder {

public:
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    CompoundTagUpdaterBuilder(CompoundTagUpdater &);
    void edit(std::string const&, std::function<void (CompoundTagEditHelper &)> &&);
    void visit(std::string const&);
    void addCompound(std::string const&);
    void addCompound(std::string const&)const;
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void match(std::string const&, std::string);
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void rename(std::string const&, std::string const&);
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void addCompound(std::string const&);
    void tryEdit(std::string const&, std::function<void (CompoundTagEditHelper &)> &&);
    void addCompound(std::string const&);
    void remove(std::string const&);
    void addCompound(std::string const&);
    void popVisit();
    void addCompound(std::string const&)const;
};
