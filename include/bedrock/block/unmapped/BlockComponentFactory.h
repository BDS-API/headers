#pragma once

#include <string>
#include <memory>
#include <functional>


class BlockComponentFactory {

public:
    BlockComponentFactory(); // _ZN21BlockComponentFactoryC2Ev
    void initializeFactory(); // _ZN21BlockComponentFactory17initializeFactoryEv
    ~BlockComponentFactory(); // _ZN21BlockComponentFactoryD2Ev
    void teardownFactory(); // _ZN21BlockComponentFactory15teardownFactoryEv
    void registerDescription(std::string const&, std::function<std::unique_ptr<BlockComponentDescription> (void)>); // _ZN21BlockComponentFactory19registerDescriptionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt8functionIFSt10unique_ptrI25BlockComponentDescriptionSt14default_deleteISA_EEvEE
    std::string getRegisteredComponentNames()const; // _ZNK21BlockComponentFactory27getRegisteredComponentNamesB5cxx11Ev
    void createComponentDescription(std::string const&)const; // _ZNK21BlockComponentFactory26createComponentDescriptionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
