#pragma once

#include "./ExpressionNode.h"
#include "./RenderParams.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "./CoordinateRange.h"
#include <vector>
#include "./ScatterParams.h"
#include <functional>
#include "../bedrock/util/BlockPos.h"
#include <string>


class ScatterParams {

public:

    ~ScatterParams();
    ScatterParams();
    ScatterParams(ScatterParams const&);
    void _getPos(unsigned int, BlockPos const&, Random &, RenderParams &)const;
    void initMolangParams(RenderParams &, BlockPos const&, Random &);
    void scatter(RenderParams &, BlockPos const&, Random &)const;
    void _shouldScatter(RenderParams &, Random &)const;
    void _parseCoordinate(Json::Value const&, ScatterParams::CoordinateRange &, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    void _parseExtents(Json::Value const&, ExpressionNode &, ExpressionNode &, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
//  void _parseDistribution(Json::Value const&, ScatterParams::RandomDistributionType &); //TODO: incomplete function definition
};
