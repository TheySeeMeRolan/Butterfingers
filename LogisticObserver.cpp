#include "LogisticObserver.h"
#include "Subject.cpp"

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
Subject* LogisticObserver::getRegisteredAt()
{
    return registeredAt;
}
