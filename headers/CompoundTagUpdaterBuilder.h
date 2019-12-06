#pragma once

class CompoundTagUpdaterBuilder {

public:

    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2}::~CompoundTagEditHelper();
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} && std::forward<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1}>(std::remove_reference<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1}>::type &);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1}::operator() const(CompoundTagEditHelper &);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} const * std::__addressof<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} const>(CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} const&);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} const& std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1}>(void)const;
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} * & std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} *>(void);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1} & std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#1}>(void);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2} && std::forward<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2}>(std::remove_reference<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2}>::type &);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2}::CompoundTagEditHelper({lambda(CompoundTagEditHelper &)#2}&&);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2} * & std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2} *>(void);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2}::operator() const(CompoundTagEditHelper &);
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2} * const& std::_Any_data::_M_access<CompoundTagUpdaterBuilder::addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2} *>(void)const;
    void addCompound(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)::{lambda(CompoundTagEditHelper &)#2}::CompoundTagEditHelper({lambda(CompoundTagEditHelper &)#2} const&);
    void CompoundTagUpdaterBuilder(CompoundTagUpdater &);
    void match(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void visit(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void popVisit(void);
    void edit(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(CompoundTagEditHelper &)> &&);
    void tryEdit(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(CompoundTagEditHelper &)> &&);
    void remove(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void rename(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
