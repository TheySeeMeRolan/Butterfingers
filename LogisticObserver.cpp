#include "LogisticObserver.h"

LogisticObserver::LogisticObserver()
{
}

void LogisticObserver::registerTeam(Subject *s)
{
    s->attach(this);
}


LogisticObserver::~LogisticObserver()
{

}

