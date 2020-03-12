#pragma once

#include <string>
#include <memory>
#include "ServerMetrics.h"


class ServerMetricsImpl : ServerMetrics {

public:
//  virtual void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::string const&); //TODO: incomplete function definition
//  virtual void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&); //TODO: incomplete function definition
    ~ServerMetricsImpl();
    virtual void sendPeriodicMetrics(ServerInstance &);
    void addMetrics(std::unique_ptr<com::mojang::clacks::protocol::MetricReport>);
    ServerMetricsImpl(ServerCommunicationInterface *);
    void sendPeriodicMetricsInternal(ServerInstance &);
    bool isEnabledMetricQueuing()const;
    void popMetric();
    void setEnableMetricQueuing(bool);
};
