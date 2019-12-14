#pragma once

class CompoundTagUpdaterBuilder {

public:

    void addCompound(std::string const&);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2}::~CompoundTagEditHelper();
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} && std::forward<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1}>(std::remove_reference<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1}>::type &);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1}::operator() const(CompoundTagEditHelper &);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} const * std::__addressof<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} const>(CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} const&);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} const& std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1}>(void)const;
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} * & std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} *>(void);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1} & std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#1}>(void);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2} && std::forward<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2}>(std::remove_reference<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2}>::type &);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2}::CompoundTagEditHelper({lambda(CompoundTagEditHelper &)#2}&&);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2} * & std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2} *>(void);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2}::operator() const(CompoundTagEditHelper &);
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2} * const& std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2} *>(void)const;
    void addCompound(std::string const&)::{lambda(CompoundTagEditHelper &)#2}::CompoundTagEditHelper({lambda(CompoundTagEditHelper &)#2} const&);
    void CompoundTagUpdaterBuilder(CompoundTagUpdater &);
    void match(std::string const&, std::string);
    void visit(std::string const&);
    void popVisit(void);
    void edit(std::string const&, std::function<void ()(CompoundTagEditHelper &)> &&);
    void tryEdit(std::string const&, std::function<void ()(CompoundTagEditHelper &)> &&);
    void remove(std::string const&);
    void rename(std::string const&, std::string const&);
};
