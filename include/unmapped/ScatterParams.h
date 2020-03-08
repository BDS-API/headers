#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"
#include "../json/Value"


class ScatterParams {

public:

    ScatterParams(void);
    ScatterParams(ScatterParams const&);
    void _getPos(unsigned int, BlockPos const&, Random &, RenderParams &)const;
    void initMolangParams(RenderParams &, BlockPos const&, Random &);
    void scatter(RenderParams &, BlockPos const&, Random &)const;
    void _shouldScatter(RenderParams &, Random &)const;
    void _parseCoordinate(Json::Value const&, ScatterParams::CoordinateRange &, std::function ()(std::string const&, bool));
    void _parseExtents(Json::Value const&, ExpressionNode &, ExpressionNode &, std::function ()(std::string const&, bool));
    void _parseDistribution(Json::Value const&, ScatterParams::RandomDistributionType &);
};
