#include "test.h"

test::test(QObject *parent) : QObject(parent)
{
    qInfo()<<this<<"DEP";
}

test::~test()
{
    qInfo()<<this<<"DEP";
}
