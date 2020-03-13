#pragma once

#include <string>
#include <functional>
#include "../util/BlockPos.h"
#include "CommandPosition.h"


class CommandSelectorBase {

public:
    ~CommandSelectorBase(); // _ZN19CommandSelectorBaseD2Ev
    CommandSelectorBase(bool); // _ZN19CommandSelectorBaseC2Eb
    void setVersion(int); // _ZN19CommandSelectorBase10setVersionEi
//  void setType(CommandSelectionType); //TODO: incomplete function definition // _ZN19CommandSelectorBase7setTypeE20CommandSelectionType
    bool isExplicitIdSelector()const; // _ZNK19CommandSelectorBase20isExplicitIdSelectorEv
    void getType()const; // _ZNK19CommandSelectorBase7getTypeEv
//  void setOrder(CommandSelectionOrder); //TODO: incomplete function definition // _ZN19CommandSelectorBase8setOrderE21CommandSelectionOrder
    void getOrder()const; // _ZNK19CommandSelectorBase8getOrderEv
//  void addNameFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition // _ZN19CommandSelectorBase13addNameFilterERK16InvertableFilterINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE
    bool hasName()const; // _ZNK19CommandSelectorBase7hasNameEv
    std::string getName()const; // _ZNK19CommandSelectorBase7getNameB5cxx11Ev
//  void addTypeFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition // _ZN19CommandSelectorBase13addTypeFilterERK16InvertableFilterINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE
//  void addTagFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition // _ZN19CommandSelectorBase12addTagFilterERK16InvertableFilterINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE
    void setResultCount(unsigned long); // _ZN19CommandSelectorBase14setResultCountEm
    void setPosition(CommandPosition); // _ZN19CommandSelectorBase11setPositionE15CommandPosition
    void setBox(BlockPos); // _ZN19CommandSelectorBase6setBoxE8BlockPos
    void setRadiusMin(float); // _ZN19CommandSelectorBase12setRadiusMinEf
    void setRadiusMax(float); // _ZN19CommandSelectorBase12setRadiusMaxEf
    void setIncludeDeadPlayers(bool); // _ZN19CommandSelectorBase21setIncludeDeadPlayersEb
    void addFilter(std::function<bool (CommandOrigin const&, Actor const&)>); // _ZN19CommandSelectorBase9addFilterESt8functionIFbRK13CommandOriginRK5ActorEE
    void setExplicitIdSelector(std::string const&); // _ZN19CommandSelectorBase21setExplicitIdSelectorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void compile(CommandOrigin const&, std::string &); // _ZN19CommandSelectorBase7compileERK13CommandOriginRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isExpansionAllowed(CommandOrigin const&)const; // _ZNK19CommandSelectorBase18isExpansionAllowedERK13CommandOrigin
    void matchName(Actor const&)const; // _ZNK19CommandSelectorBase9matchNameERK5Actor
    void matchType(Actor const&)const; // _ZNK19CommandSelectorBase9matchTypeERK5Actor
    void matchTag(Actor const&)const; // _ZNK19CommandSelectorBase8matchTagERK5Actor
    void newResults(CommandOrigin const&)const; // _ZNK19CommandSelectorBase10newResultsERK13CommandOrigin
    void filter(CommandOrigin const&, Actor &, float)const; // _ZNK19CommandSelectorBase6filterERK13CommandOriginR5Actorf
    bool isInDimension(CommandOrigin const&, Actor &)const; // _ZNK19CommandSelectorBase13isInDimensionERK13CommandOriginR5Actor
    std::string getExplicitPlayerName()const; // _ZNK19CommandSelectorBase21getExplicitPlayerNameB5cxx11Ev
};
