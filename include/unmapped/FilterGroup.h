#pragma once

#include <string>
#include <array>


class FilterGroup {

public:
    virtual void _setupContext(FilterTest const&, FilterContext &)const;
    virtual void _handleUnknownMember(std::string const&, Json::Value const&);
    ~FilterGroup();
    void _parseFilterInputs(Json::Value const&, FilterTest::Definition const&, FilterInputs &);
    FilterGroup(FilterGroup const&);
    void _parseObject(std::string const&, Json::Value const&);
    void getChildren()const;
    void _parseFilterParam(std::string const&, std::string const&, Json::Value const&, FilterParamDefinition const&, FilterInput &);
    void parse(Json::Value const&);
    void _evaluateMember(FilterTest const&, std::array<FilterContext, 7ul> &)const;
    void _parseTest(Json::Value const&);
    void addFilterTest(FilterTest::Definition const&, FilterInputs const&);
    void evaluate(std::array<FilterContext, 7ul> &)const;
    void serialize(Json::Value &)const;
//  FilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    void empty();
    void getMembers()const;
    void _parseMember(std::string const&, Json::Value const&);
    void addFilterTest(std::string const&, FilterInputs const&);
};
