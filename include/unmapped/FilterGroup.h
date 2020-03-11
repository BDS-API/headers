#pragma once

#include "./FilterInputs.h"
#include "./FilterInput.h"
#include <array>
#include "../bedrock/definition/FilterParamDefinition.h"
#include "../json/Value.h"
#include "../bedrock/test/FilterTest.h"
#include "./Definition.h"
#include "./FilterContext.h"
#include "./FilterGroup.h"
#include <string>


class FilterGroup {

public:
    virtual ~FilterGroup();
    virtual void _setupContext(FilterTest const&, FilterContext &)const;
    virtual void _handleUnknownMember(std::string const&, Json::Value const&);

    FilterGroup(FilterGroup const&);
//  FilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
//  void evaluate(std::array<FilterContext, 7ul> &)const; //TODO: incomplete function definition
//  void _evaluateMember(FilterTest const&, std::array<FilterContext, 7ul> &)const; //TODO: incomplete function definition
    void parse(Json::Value const&);
    void _parseObject(std::string const&, Json::Value const&);
    void _parseTest(Json::Value const&);
    void _parseMember(std::string const&, Json::Value const&);
    void _parseFilterInputs(Json::Value const&, FilterTest::Definition const&, FilterInputs &);
    void addFilterTest(FilterTest::Definition const&, FilterInputs const&);
    void _parseFilterParam(std::string const&, std::string const&, Json::Value const&, FilterParamDefinition const&, FilterInput &);
    void addFilterTest(std::string const&, FilterInputs const&);
    void serialize(Json::Value &)const;
    void empty();
    void getMembers()const;
    void getChildren()const;
};
