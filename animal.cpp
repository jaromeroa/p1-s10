#include "animal.h"

animal::animal(QObject *parent) : QObject(parent)
{
    qInfo()<<this<<"UP";
}

animal::~animal()
{
    qInfo()<<this<<"DOWN";
}
