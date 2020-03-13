#pragma once

#include <string>
#include "../util/Vec3.h"
#include "../util/BlockPos.h"
#include <vector>


class CommandOutputParameter {

public:
    ~CommandOutputParameter(); // _ZN22CommandOutputParameterD2Ev
    CommandOutputParameter(char const*); // _ZN22CommandOutputParameterC2EPKc
    CommandOutputParameter(std::string const&); // _ZN22CommandOutputParameterC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    CommandOutputParameter(std::string const&, int); // _ZN22CommandOutputParameterC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    CommandOutputParameter(Actor const&); // _ZN22CommandOutputParameterC2ERK5Actor
    CommandOutputParameter(Actor const*); // _ZN22CommandOutputParameterC2EPK5Actor
    CommandOutputParameter(bool); // _ZN22CommandOutputParameterC2Eb
    CommandOutputParameter(int); // _ZN22CommandOutputParameterC2Ei
    CommandOutputParameter(float); // _ZN22CommandOutputParameterC2Ef
    CommandOutputParameter(BlockPos); // _ZN22CommandOutputParameterC2E8BlockPos
    CommandOutputParameter(Vec3); // _ZN22CommandOutputParameterC2E4Vec3
//  CommandOutputParameter(CommandOutputParameter::NoCountType); //TODO: incomplete function definition // _ZN22CommandOutputParameterC2ENS_11NoCountTypeE
    CommandOutputParameter(std::vector<Actor const*> const&); // _ZN22CommandOutputParameterC2ERKSt6vectorIPK5ActorSaIS3_EE
    CommandOutputParameter(std::vector<Player const*> const&); // _ZN22CommandOutputParameterC2ERKSt6vectorIPK6PlayerSaIS3_EE
    CommandOutputParameter(std::vector<std::string> const&); // _ZN22CommandOutputParameterC2ERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
//  CommandOutputParameter(CommandSelectorResults<Actor> const&); //TODO: incomplete function definition // _ZN22CommandOutputParameterC2ERK22CommandSelectorResultsI5ActorE
//  CommandOutputParameter(CommandSelectorResults<Player> const&); //TODO: incomplete function definition // _ZN22CommandOutputParameterC2ERK22CommandSelectorResultsI6PlayerE
    CommandOutputParameter(CommandOutputParameter &&); // _ZN22CommandOutputParameterC2EOS_
    CommandOutputParameter(CommandOutputParameter const&); // _ZN22CommandOutputParameterC2ERKS_
    std::string getText()const; // _ZNK22CommandOutputParameter7getTextB5cxx11Ev
    void count()const; // _ZNK22CommandOutputParameter5countEv
};
