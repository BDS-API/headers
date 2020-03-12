#pragma once

#include <string>
#include "../bedrock/test/FilterTest.h"
#include "FilterInputs.h"
#include <array>
#include "../json/Value.h"
#include "FilterContext.h"
#include "../bedrock/definition/FilterParamDefinition.h"
#include "FilterInput.h"


class FilterGroup {

public:
    ~FilterGroup();
    virtual void _setupContext(FilterTest const&, FilterContext &)const;
    virtual void _handleUnknownMember(std::string const&, Json::Value const&);
    void empty();
    FilterGroup(FilterGroup const&);
//  void evaluate(std::array<FilterContext, 7ul> &)const; //TODO: incomplete function definition
    void _parseMember(std::string const&, Json::Value const&);
    void serialize(Json::Value &)const;
    void parse(Json::Value const&);
    void addFilterTest(std::string const&, FilterInputs const&);
    void _parseFilterInputs(Json::Value const&, FilterTest::Definition const&, FilterInputs &);
    void getChildren()const;
//  FilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    void _parseFilterParam(std::string const&, std::string const&, Json::Value const&, FilterParamDefinition const&, FilterInput &);
    void addFilterTest(FilterTest::Definition const&, FilterInputs const&);
//  void _evaluateMember(FilterTest const&, std::array<FilterContext, 7ul> &)const; //TODO: incomplete function definition
    void _parseObject(std::string const&, Json::Value const&);
    void _parseTest(Json::Value const&);
    void getMembers()const;
};
