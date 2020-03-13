#pragma once

#include <string>
#include "../Command.h"
#include <vector>


class TagCommand : Command {

public:
    ~TagCommand(); // _ZN10TagCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK10TagCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN10TagCommand5setupER15CommandRegistry
    TagCommand(); // _ZN10TagCommandC2Ev
    void _getSelectorResults(CommandOrigin const&, CommandOutput &)const; // _ZNK10TagCommand19_getSelectorResultsERK13CommandOriginR13CommandOutput
    void _addTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const; // _ZNK10TagCommand7_addTagER13CommandOutputRKSt6vectorISt17reference_wrapperI5ActorESaIS5_EE
    void _removeTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const; // _ZNK10TagCommand10_removeTagER13CommandOutputRKSt6vectorISt17reference_wrapperI5ActorESaIS5_EE
    void _listTags(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const; // _ZNK10TagCommand9_listTagsER13CommandOutputRKSt6vectorISt17reference_wrapperI5ActorESaIS5_EE
    std::string _getTagWithPercentageFixed()const; // _ZNK10TagCommand26_getTagWithPercentageFixedB5cxx11Ev
};
