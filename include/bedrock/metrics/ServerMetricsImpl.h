#pragma once

#include "../../clacks/protocol/MetricReport.h"
#include <ratio>
#include <memory>
#include "./ServerMetrics.h"
#include "../../unmapped/ServerCommunicationInterface.h"
#include "../ServerInstance.h"
#include <string>


class ServerMetricsImpl : ServerMetrics {

public:
    virtual ~ServerMetricsImpl();
    virtual void sendPeriodicMetrics(ServerInstance &);
//  virtual void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::string const&); //TODO: incomplete function definition
//  virtual void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&); //TODO: incomplete function definition

    ServerMetricsImpl(ServerCommunicationInterface *);
    void sendPeriodicMetricsInternal(ServerInstance &);
    void addMetrics(std::unique_ptr<com::mojang::clacks::protocol::MetricReport, std::default_delete<com::mojang::clacks::protocol::MetricReport>>);
    bool isEnabledMetricQueuing()const;
    void popMetric();
    void setEnableMetricQueuing(bool);
};
